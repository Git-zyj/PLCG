/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176369
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_15 = ((/* implicit */signed char) min((var_10), (((/* implicit */long long int) (~((-(((/* implicit */int) var_12)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 23; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0 - 3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0 + 2] [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
        var_16 = ((/* implicit */unsigned char) var_8);
    }
    for (long long int i_1 = 3; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_17 += arr_0 [i_1];
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    {
                        arr_15 [i_4] [i_4] [i_3] [i_3] [i_3] = (~(((arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1]) / (arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1]))));
                        var_18 = ((/* implicit */long long int) arr_4 [i_1] [i_3]);
                        var_19 ^= ((/* implicit */signed char) (((-(((/* implicit */int) arr_8 [i_1 + 2] [i_2] [i_3])))) * (((/* implicit */int) (signed char)117))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)79)) ? ((~((-(var_5))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_4] [i_3] [i_2] [i_1 - 3])))))));
                        var_21 += ((/* implicit */unsigned char) (~(((/* implicit */int) arr_12 [i_4] [i_3] [i_2] [i_1 - 3]))));
                    }
                } 
            } 
        } 
        arr_16 [i_1 + 2] [i_1 + 2] = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) -6035150475481263587LL)))));
    }
    var_22 = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) (+(((/* implicit */int) var_6))))))), (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_11))) <= (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
}

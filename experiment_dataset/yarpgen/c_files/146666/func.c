/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146666
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
    var_14 = ((/* implicit */int) var_12);
    var_15 = ((/* implicit */long long int) var_5);
    var_16 = var_1;
    var_17 = ((/* implicit */int) max((var_17), ((-(((/* implicit */int) (signed char)-41))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_0 [i_0])))), ((~(((/* implicit */int) arr_0 [i_0]))))));
        arr_2 [i_0] [i_0] = ((int) 10);
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) (~((+(((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_3 [i_1] [i_1]) : (((/* implicit */int) (signed char)-20))))))));
        var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) 10)), (-1LL)))) ? (max((arr_1 [i_1]), (((/* implicit */long long int) (short)29577)))) : (min((arr_1 [i_1]), (arr_1 [i_1])))));
    }
    for (signed char i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            for (signed char i_4 = 4; i_4 < 24; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    {
                        var_21 &= ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) arr_8 [i_4] [i_4 - 1] [i_4])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            arr_16 [i_2] [i_3] [i_4] [i_4] [i_5] [i_5] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) (short)4374))));
                            var_22 ^= ((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_4 - 1]))));
                        }
                    }
                } 
            } 
        } 
        var_23 += (-(((/* implicit */int) ((signed char) (+(arr_14 [i_2]))))));
        var_24 = ((/* implicit */signed char) ((short) ((signed char) arr_7 [i_2])));
    }
}

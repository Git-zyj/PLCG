/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155340
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
    var_19 = ((/* implicit */unsigned short) ((long long int) var_4));
    var_20 ^= ((/* implicit */short) var_14);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_21 |= (~(min((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [12LL]))))), (min((((/* implicit */long long int) arr_1 [10LL])), (var_5))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_22 += ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_0]))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)-1);
        arr_5 [i_0] = ((/* implicit */long long int) (~(((((/* implicit */int) var_4)) % (((/* implicit */int) (signed char)7))))));
    }
    var_23 = ((/* implicit */short) var_12);
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        for (signed char i_2 = 2; i_2 < 22; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    var_24 = max((((long long int) (unsigned short)53375)), (((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_2])) ? (7316514994271804984LL) : ((~(arr_7 [i_1]))))));
                    var_25 = -7316514994271804999LL;
                    var_26 += ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_2 - 1])) ? (7316514994271804984LL) : (arr_6 [i_1] [i_1]))) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_9 [i_2] [i_2] [i_2 - 2]))))));
                    var_27 = ((/* implicit */unsigned short) (~(max((-1LL), (arr_6 [i_2 + 1] [i_2 + 1])))));
                }
            } 
        } 
    } 
}

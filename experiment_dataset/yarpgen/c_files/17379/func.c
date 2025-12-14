/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17379
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
    var_18 = ((/* implicit */signed char) var_1);
    var_19 = var_8;
    var_20 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_13))))), (min((var_0), (-5449766028045529971LL)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_3] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */long long int) -1086034320)) : (((((((/* implicit */int) var_5)) <= (1177165858))) ? (min((((/* implicit */long long int) 2147483632)), (var_0))) : (var_8)))));
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_6 [i_4] [i_2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20))))), (((/* implicit */unsigned int) arr_10 [i_2 - 1] [(unsigned char)5] [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 2]))))) ? (((/* implicit */int) var_17)) : ((~(((/* implicit */int) arr_8 [i_1])))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_1 [i_2 - 2])) <= (((/* implicit */int) (signed char)127)))) ? (((((/* implicit */int) arr_4 [i_0] [i_2 + 2])) & (((/* implicit */int) arr_4 [i_2] [i_2 + 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2118855636U)))))));
                    arr_15 [i_0] [i_0] |= ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */long long int) min((2118855636U), (3680900758U)))) == (var_0)))), (max((((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (var_10)))), (max((var_12), (((/* implicit */int) (signed char)-19))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 19; i_5 += 2) 
                    {
                        for (int i_6 = 3; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) var_9);
                                arr_22 [i_6 + 2] [i_5] [i_2] [i_5] [i_0] = ((/* implicit */unsigned int) var_16);
                                arr_23 [i_0] [i_1] [i_2 - 2] [i_5 - 1] [i_5] = ((/* implicit */unsigned char) min(((+(arr_10 [i_0] [i_1] [i_6 - 2] [i_2 - 1] [12LL] [i_5]))), (((/* implicit */int) (!(((arr_16 [i_6 + 1] [17U] [i_1] [i_0]) == (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_5 + 2] [i_1] [i_0])))))))));
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1]))) : (max((614066547U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)228)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 &= ((/* implicit */unsigned char) var_4);
}

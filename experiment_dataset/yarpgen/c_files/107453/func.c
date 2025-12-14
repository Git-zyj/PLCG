/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107453
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
    var_17 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (((~(((/* implicit */int) (unsigned char)23)))) > (((/* implicit */int) min(((short)-32764), (((/* implicit */short) (unsigned char)23)))))))), (((((/* implicit */_Bool) (~(4823716832002497504LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) var_7))))) : (((-4823716832002497505LL) % (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
    var_18 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (unsigned char)210))))))))));
    var_19 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) var_4))))) : (min((4823716832002497504LL), (((/* implicit */long long int) (unsigned char)216)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) arr_0 [i_0 + 2]);
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (long long int i_4 = 4; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_12 [i_1] [(unsigned char)18] [i_2] [i_4 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_1] [i_2] [(short)4] [(unsigned char)19] [15LL] [(short)12])) || (((/* implicit */_Bool) 1418016804U)))) ? ((~(((/* implicit */int) (unsigned char)46)))) : (((((/* implicit */_Bool) 1314789492U)) ? (((/* implicit */int) arr_1 [(unsigned char)11] [i_1])) : (((/* implicit */int) arr_9 [i_0 + 3] [i_3]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)38)) || (((/* implicit */_Bool) (unsigned char)23)))))) : (((((/* implicit */_Bool) ((short) arr_2 [i_0 + 2] [i_0] [i_0 + 3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -4823716832002497505LL)))))) : (arr_0 [i_0 + 2])))));
                                var_20 -= ((/* implicit */short) max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3915786721U)) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_2] [10U] [i_2] [i_0])) : (((/* implicit */int) (unsigned char)23))))), (arr_4 [i_1] [i_1]))), (((/* implicit */unsigned int) arr_8 [i_3] [i_3]))));
                                var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (short)16798)) : (((/* implicit */int) (unsigned char)45)))))))), (min((((/* implicit */unsigned int) (unsigned char)0)), ((~(3915786721U)))))));
                                arr_13 [i_1] [i_3] [i_1] = ((/* implicit */unsigned int) arr_8 [i_1] [i_3]);
                                var_22 += ((/* implicit */unsigned char) max((((long long int) arr_4 [i_1] [i_4 - 3])), (((/* implicit */long long int) (~((~(((/* implicit */int) (short)31606)))))))));
                            }
                        } 
                    } 
                } 
                var_23 -= ((/* implicit */unsigned char) (~(arr_0 [i_0 + 1])));
                var_24 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)209))))) | (((((/* implicit */int) ((short) 379180594U))) & (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)37)) || (((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 2] [i_0])))))))));
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((unsigned int) ((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)204))) : (3915786721U)))) <= (((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)46)) << (((-433232608769700418LL) + (433232608769700426LL)))))) : (min((((/* implicit */unsigned int) arr_7 [17LL] [i_1] [(unsigned char)22])), (arr_0 [i_0 + 1]))))))))));
            }
        } 
    } 
    var_26 *= var_3;
}

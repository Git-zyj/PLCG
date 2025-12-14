/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187690
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) var_9);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_12 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (short)12288)), (690627723U)));
                                arr_13 [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_1] [i_2] [i_4 + 2] [i_2] [i_1]))))), (((((/* implicit */_Bool) 2146130649)) ? (var_6) : (var_16)))));
                                arr_14 [i_0] [i_2] [i_0] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) (+((-(arr_6 [i_0] [i_1] [i_2] [i_0])))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)104)) >= (-2146130650))) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 8555374848188922738ULL)))))))) : (12563269682283100883ULL)));
                                arr_15 [i_2] [i_2] = ((/* implicit */unsigned int) var_12);
                            }
                        } 
                    } 
                } 
                var_20 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (9223372036854775807LL));
                var_21 = ((/* implicit */unsigned char) ((min((min((var_2), (((/* implicit */unsigned int) arr_2 [i_1] [i_1] [i_0])))), (((/* implicit */unsigned int) var_13)))) | (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) var_1)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))))), ((~(max((var_2), (((/* implicit */unsigned int) -2146130650))))))));
    var_23 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) (unsigned char)47)), (0U))), (((/* implicit */unsigned int) var_0))));
    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)61873))) / (var_1))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)122))))))));
}

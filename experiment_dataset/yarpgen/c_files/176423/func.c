/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176423
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_10))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)32838))));
                    var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6573938372963554265LL)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) ((short) arr_3 [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0]);
                                var_17 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (~(0)))) ? (((/* implicit */unsigned int) ((int) (signed char)90))) : (((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-22515))) : (627957750U))))), (((((/* implicit */_Bool) arr_4 [(unsigned char)12] [i_1] [8U])) ? (627957750U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)63014)) ? (((/* implicit */int) arr_7 [i_0] [i_2])) : (((/* implicit */int) (unsigned char)16)))))))));
                                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_10 [i_0] [i_1] [i_2]), (arr_10 [i_0] [i_1] [i_0])))))))));
                                arr_12 [i_0] [i_2] [i_4] [i_3] [i_4] [(short)16] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_3 [i_3]), (((/* implicit */long long int) arr_8 [(short)6]))))), (11924509450173336525ULL)))) ? (((unsigned int) ((unsigned short) 2774994005U))) : (3667009545U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((short) ((_Bool) ((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */int) (short)21960)) : (((/* implicit */int) var_9))))));
}

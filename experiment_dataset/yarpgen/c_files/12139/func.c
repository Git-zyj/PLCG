/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12139
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
    var_13 += ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) ((signed char) var_10))), ((+(17207720334403288971ULL))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_4] [i_2 - 1] [2ULL] [i_0] [i_2] [7ULL] = ((/* implicit */unsigned short) ((_Bool) ((unsigned short) arr_11 [i_2 - 1] [i_4] [i_4] [i_0 - 1])));
                                var_14 = ((/* implicit */short) var_5);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max((((/* implicit */long long int) arr_1 [i_0 + 2])), (((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (5131463714711019309LL) : (((/* implicit */long long int) arr_1 [i_0 + 1])))))))));
                    var_16 = ((/* implicit */unsigned char) ((arr_5 [i_0 - 4] [i_1 + 3] [i_2 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_2] [(unsigned short)12] [i_5] [i_6] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_1 + 3] [i_1 + 1] [i_2 + 2])) || (((/* implicit */_Bool) arr_14 [i_0 - 4] [i_1 + 2] [i_1 + 1] [i_2 + 3]))))));
                                var_17 = ((/* implicit */unsigned long long int) ((int) arr_5 [i_2 + 2] [i_1 - 1] [i_0 + 1]));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3557801298U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)13446))))) ? (((/* implicit */int) ((signed char) arr_14 [i_0] [i_0] [i_2] [13]))) : ((+(((/* implicit */int) (short)-13446)))))) : (((/* implicit */int) min((var_8), (((/* implicit */signed char) (!(((/* implicit */_Bool) 818178083177713949ULL))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (-((-(var_0)))));
}

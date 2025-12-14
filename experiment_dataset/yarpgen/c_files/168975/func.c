/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168975
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
    var_15 = ((/* implicit */short) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned int) var_12))))) % (max((var_13), (((/* implicit */long long int) 4146619203U)))))) | (((long long int) ((((/* implicit */_Bool) var_3)) ? (-972462606437897521LL) : (-1152921504606846976LL))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 8; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((((((/* implicit */_Bool) arr_6 [i_1 - 2] [i_1 - 2] [(unsigned short)0] [i_1 - 2])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_2] [i_0])) : (4060205957173026196ULL))) : (((((/* implicit */_Bool) (unsigned short)8755)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3720))) : (var_7))))), (((/* implicit */unsigned long long int) ((arr_3 [i_0] [0U] [i_0 + 1]) == (2083783658U)))))))));
                    arr_7 [i_1] [i_2] [i_2 - 1] [i_2] = ((/* implicit */unsigned short) var_3);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 7; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) min((((((/* implicit */unsigned int) ((arr_13 [i_1 - 2] [i_4 - 2]) << (((((/* implicit */int) var_6)) - (46169)))))) % (arr_12 [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_3] [i_2 - 1] [i_2 + 1]))), (((/* implicit */unsigned int) ((max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)56519)))) != (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (var_9))))))))))));
                                var_18 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)9016))) != (arr_5 [i_0 + 2] [i_2 + 2] [i_1 - 3] [i_3])))), (arr_5 [i_3] [i_1 - 4] [i_0 + 2] [i_3])));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_1 - 4] [i_2] [i_2 + 1] = ((/* implicit */long long int) ((unsigned int) (+(4294967295U))));
                }
            } 
        } 
    } 
}

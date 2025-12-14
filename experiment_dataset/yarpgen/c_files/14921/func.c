/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14921
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
    var_14 -= ((/* implicit */short) var_0);
    var_15 = ((/* implicit */unsigned short) (-(max((((unsigned int) (unsigned short)21716)), (min((var_2), (((/* implicit */unsigned int) var_4))))))));
    var_16 = ((/* implicit */unsigned char) ((min(((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-9051977839832212429LL))), (((/* implicit */long long int) var_3)))) - (var_10)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) var_3);
                                var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (arr_3 [i_0]))))) : (max((((/* implicit */unsigned long long int) -9051977839832212431LL)), (var_13))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_9 [i_2 + 4]), (arr_9 [i_2 - 3])))))));
                                var_18 = ((/* implicit */short) (+(max((-9051977839832212429LL), (((/* implicit */long long int) var_5))))));
                            }
                        } 
                    } 
                    var_19 = min((((/* implicit */unsigned long long int) ((unsigned char) var_8))), (((((unsigned long long int) var_11)) | (((/* implicit */unsigned long long int) -9051977839832212418LL)))));
                }
            } 
        } 
    } 
}

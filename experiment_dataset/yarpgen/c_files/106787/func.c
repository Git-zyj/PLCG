/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106787
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                arr_8 [10] [8LL] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((3762865752U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))) >> (((((((/* implicit */unsigned long long int) 5076740067087586099LL)) | (var_2))) - (17797582218789369816ULL)))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_3] [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2 + 2] [i_3 + 1])) & (((/* implicit */int) arr_4 [i_2 - 1]))))) + (((var_8) ^ (((/* implicit */unsigned long long int) arr_2 [i_2 - 1])))));
                            arr_14 [i_3] [i_3] [i_2] [i_2] = ((((10379993257043943509ULL) + (var_0))) < (((/* implicit */unsigned long long int) ((-5076740067087586098LL) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                            var_19 = ((/* implicit */unsigned long long int) ((1595566807493517137LL) << (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = var_8;
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_13))));
}

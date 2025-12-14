/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139435
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
    var_16 = var_1;
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) max((1421522532U), (((/* implicit */unsigned int) max((arr_11 [i_0 - 1] [i_1 + 2] [i_2 + 2] [i_3]), ((short)26652))))));
                            arr_12 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_5)), (10964895047102032882ULL)));
                            var_18 = (short)5798;
                            arr_13 [i_0] [i_0 - 1] [i_1 + 1] [i_1 - 1] [i_2] [i_3] = ((/* implicit */int) arr_8 [i_0 + 2]);
                            var_19 = ((/* implicit */short) max((var_19), (arr_4 [i_0 - 1])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 4; i_5 < 20; i_5 += 4) 
                    {
                        {
                            arr_19 [i_0 + 1] [i_0] [i_4] [i_5 + 4] = ((/* implicit */int) var_4);
                            arr_20 [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_7 [i_0 + 1] [i_0] [i_0] [i_0 + 1])))) <= (((long long int) arr_0 [i_0]))))) < (((/* implicit */int) ((short) arr_0 [i_0 + 2])))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) max((((long long int) (+(((/* implicit */int) arr_3 [i_0]))))), (((/* implicit */long long int) ((unsigned int) arr_15 [i_0 + 1] [i_1 + 2] [i_1 + 2])))));
            }
        } 
    } 
}

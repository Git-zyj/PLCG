/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102458
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
    var_11 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [(signed char)17] [i_0] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (~(1321155770U)))), (arr_1 [i_0 + 1])));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (int i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                            {
                                var_12 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((arr_3 [i_0 + 1] [i_0 + 1]), (4294967287U)))), (max((((/* implicit */unsigned long long int) 1321155770U)), (arr_5 [i_1])))));
                                var_13 ^= ((/* implicit */_Bool) min((max((arr_4 [i_0 + 1] [i_3 - 3]), (arr_4 [i_0 + 1] [i_3 - 3]))), (min((arr_4 [i_0 + 1] [i_3 - 1]), (arr_4 [i_0 + 1] [i_3 - 2])))));
                                var_14 ^= max((min((((/* implicit */unsigned long long int) arr_0 [i_3 - 1] [i_0 + 1])), (max((4083736053561152432ULL), (((/* implicit */unsigned long long int) (short)-1)))))), (((/* implicit */unsigned long long int) arr_7 [i_3] [i_4])));
                            }
                            arr_14 [i_3 - 3] [i_2] [13] [10] = ((/* implicit */_Bool) max((((/* implicit */short) arr_7 [i_0 + 1] [i_3 + 1])), (max(((short)1), ((short)-14323)))));
                        }
                    } 
                } 
                var_15 ^= ((/* implicit */unsigned int) (+(-1476767365)));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (var_8)));
    var_17 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (var_10))))))), (7226829041898949472ULL)));
}

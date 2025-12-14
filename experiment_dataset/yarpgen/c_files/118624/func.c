/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118624
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
    var_19 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned char)158)), (min((3734149874U), (((/* implicit */unsigned int) (_Bool)1))))));
    var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
    var_21 = ((/* implicit */unsigned long long int) (signed char)-93);
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) max((11798293551727138168ULL), (((/* implicit */unsigned long long int) 8593417728213637157LL)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_23 += ((/* implicit */unsigned short) (short)5631);
                                var_24 = ((/* implicit */int) 8755807400612967616LL);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) min((var_25), (-8593417728213637170LL)));
                            arr_20 [8] [8] [8] [i_0] [i_5] [i_6] = ((/* implicit */signed char) (_Bool)1);
                            var_26 += ((/* implicit */unsigned int) min((min((((/* implicit */long long int) (unsigned short)16383)), (8063959400218028493LL))), (((/* implicit */long long int) (_Bool)1))));
                        }
                    } 
                } 
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164847
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
    var_10 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) var_1);
                    var_11 = ((unsigned long long int) 0U);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_12 = (~(((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_3 - 1] [i_3] [i_4 + 1] [16])) <= (((/* implicit */int) arr_14 [i_2] [i_1] [i_3 + 1] [i_3] [i_4 + 1] [i_2]))))));
                                var_13 = ((/* implicit */unsigned int) (~(14996324727423002388ULL)));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_2] [i_2] = min(((((+(((/* implicit */int) arr_5 [i_2] [i_1] [i_0])))) >> (((((/* implicit */int) ((short) arr_7 [i_0]))) + (9492))))), ((-((-(((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) var_0);
}

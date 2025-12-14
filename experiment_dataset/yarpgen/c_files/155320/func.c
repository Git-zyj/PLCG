/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155320
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
    var_12 = ((/* implicit */_Bool) ((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6)))));
    var_13 = ((/* implicit */int) max((864991755053332583LL), (((/* implicit */long long int) (unsigned short)65529))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) 8796093022207ULL))));
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned char) (signed char)-117)), (arr_1 [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) max((max((max((var_7), (arr_4 [i_1] [i_2] [i_1]))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)6)), (-213309568)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)17065)) ^ (((/* implicit */int) var_2))))))))));
                            arr_11 [i_2] [(short)16] [i_1] [i_2] = ((/* implicit */short) arr_6 [i_1] [(unsigned char)1]);
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned short)337)), (864991755053332583LL))))));
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (short)27347))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0])) - (max((((/* implicit */unsigned long long int) var_0)), (var_10)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (max((((((/* implicit */_Bool) 16298462326139942372ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25913))) : (-7899672491235592966LL))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_3 [i_0] [i_1])))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) max((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)23401)))), (((/* implicit */int) ((((/* implicit */int) var_2)) > ((-(((/* implicit */int) (unsigned short)65198)))))))));
}

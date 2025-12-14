/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153121
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 23; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */short) max((max((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))), (48))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) 16870170920904121405ULL);
                                var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) arr_9 [i_2 - 3])))));
                                arr_14 [i_0] [i_1] = ((/* implicit */unsigned char) arr_7 [i_1] [i_2] [i_1] [i_4]);
                                var_13 = ((/* implicit */unsigned long long int) var_5);
                            }
                        } 
                    } 
                    var_14 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((max((((/* implicit */int) (unsigned short)8191)), (-234407773))), (min((((/* implicit */int) (_Bool)1)), (var_9))))))));
                    /* LoopSeq 1 */
                    for (int i_5 = 1; i_5 < 22; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
                        arr_17 [i_1] [i_1] [i_0] [i_0] [i_1] [i_1] = ((((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) - (((/* implicit */int) ((signed char) arr_7 [i_0] [i_1] [i_1] [i_0]))));
                    }
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((var_7), (((/* implicit */unsigned long long int) (unsigned char)192)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)172)) >> (((((/* implicit */int) var_5)) - (1851))))))))) ? (-1644044929) : (((/* implicit */int) var_6))));
}

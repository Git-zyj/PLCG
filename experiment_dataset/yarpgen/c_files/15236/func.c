/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15236
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */long long int) max((max((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_1]))), (((arr_1 [i_0] [i_0]) >> (((arr_1 [i_0] [i_0]) - (1888228776)))))))) : (((/* implicit */long long int) max((max((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_1]))), (((arr_1 [i_0] [i_0]) >> (((((arr_1 [i_0] [i_0]) - (1888228776))) + (1425968405))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_1] = max((1278272530), (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (arr_3 [i_0] [i_1])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) (((((((~(arr_1 [i_0] [i_2]))) + (2147483647))) >> (((arr_13 [i_0] [i_3] [i_0] [i_3 + 1] [i_0]) - (885461860760353492ULL))))) >> (((261632U) - (261614U)))));
                                arr_18 [i_2] &= ((/* implicit */short) (+(((long long int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_17 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_0] [i_0]))) != (min(((~(6612192743366164920ULL))), (((/* implicit */unsigned long long int) var_13))))));
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */unsigned char) (-(var_14)));
}

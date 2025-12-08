/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/23
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
    var_15 |= ((/* implicit */unsigned char) var_2);
    var_16 = ((/* implicit */long long int) var_6);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_10 [i_2] [i_1] [i_0 + 1] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0] [i_1]))))), (((((/* implicit */_Bool) (signed char)127)) ? (0ULL) : (((/* implicit */unsigned long long int) -1344337413)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_0]) - (536346624ULL)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((signed char) arr_8 [i_0] [i_0] [i_2] [i_0]))))))));
                    arr_11 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (signed char)-1);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_16 [i_3] = (+((~(((/* implicit */int) (signed char)120)))));
                                arr_17 [i_0 + 1] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (_Bool)1);
                                arr_18 [i_0 - 1] [i_3] [i_3] [i_4] = ((/* implicit */int) (+(((arr_3 [i_0 - 1]) ^ (((/* implicit */unsigned long long int) arr_0 [i_0 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned char) var_14);
    }
}

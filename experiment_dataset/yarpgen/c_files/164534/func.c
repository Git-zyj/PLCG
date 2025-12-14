/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164534
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [2ULL] [14ULL] |= arr_5 [i_0] [i_0] [(unsigned char)8];
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_10 = ((/* implicit */int) max((arr_7 [i_0] [i_0] [i_1 + 1] [i_3]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1 - 1] [i_4])))))));
                                var_11 = ((/* implicit */_Bool) (+(((unsigned long long int) arr_3 [i_1] [i_1 + 2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */signed char) ((int) ((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) < (((unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0])))));
    }
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) var_4))));
    var_13 = ((/* implicit */unsigned long long int) var_3);
}

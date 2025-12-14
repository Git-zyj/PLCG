/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184545
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3 + 1] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0))));
                        arr_14 [i_2] = ((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [(short)12]);
                    }
                    arr_15 [6ULL] [i_2] [i_2] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_7))))));
                    var_13 = ((/* implicit */unsigned int) (~(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)0))))));
                }
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    arr_18 [i_0] [i_4] [(unsigned short)12] [i_0] = ((/* implicit */signed char) arr_7 [i_0] [i_4] [i_4]);
                    var_14 = ((/* implicit */unsigned int) var_1);
                }
                arr_19 [i_0] [i_0] [1U] = (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-21398)) || (((/* implicit */_Bool) var_2)))))) : (((unsigned long long int) var_6)))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (short)21403)) ? (954563936U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30978)))));
}

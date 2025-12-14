/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160878
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_8 [i_1] = ((/* implicit */unsigned char) var_11);
                            var_20 *= ((/* implicit */short) max((max((((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_2])), (arr_6 [i_2]))), (arr_6 [i_2])));
                            var_21 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 65535U))));
                            var_22 += ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_16))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_16))));
                arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13U)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (11248676882319541097ULL))) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0 + 2] [(short)18]))))) || ((!(((/* implicit */_Bool) (unsigned short)65523))))));
                arr_10 [i_1] = ((/* implicit */short) min((max((arr_0 [i_0 + 3]), (arr_0 [i_0 + 2]))), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned short) arr_3 [i_0 - 1] [i_0 - 1] [i_1])))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) var_3);
}

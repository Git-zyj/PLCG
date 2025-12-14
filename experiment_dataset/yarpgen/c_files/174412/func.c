/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174412
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) -1870000623)))))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_0] [i_2] = ((/* implicit */unsigned char) (_Bool)1);
                    arr_10 [i_0] [(short)18] [i_1] [i_2] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
                }
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    arr_13 [i_0] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_0 - 3])) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) arr_8 [i_0 - 3] [i_0 - 2] [i_0 - 3])))) - (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 - 3])) : (((/* implicit */int) arr_8 [i_0 - 2] [i_0 - 1] [i_0 - 2]))))));
                    var_19 *= ((/* implicit */unsigned int) -1901727945);
                    arr_14 [i_3] = ((/* implicit */_Bool) -1901727945);
                }
                var_20 *= ((/* implicit */unsigned long long int) (((+(((((/* implicit */int) arr_3 [i_1])) * (((/* implicit */int) arr_5 [6U] [0U])))))) + ((+(((((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)16])) ? (-1901727961) : (((/* implicit */int) var_3))))))));
                var_21 = ((/* implicit */unsigned short) arr_1 [i_1] [i_0]);
                arr_15 [14ULL] [i_0] = var_13;
                var_22 = ((/* implicit */short) 0ULL);
            }
        } 
    } 
}

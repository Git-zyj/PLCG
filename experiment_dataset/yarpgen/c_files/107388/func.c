/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107388
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
    var_14 = ((/* implicit */unsigned long long int) 2736422364U);
    var_15 += ((/* implicit */_Bool) var_13);
    var_16 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) var_1)));
    var_17 = ((/* implicit */_Bool) 12019535997776904460ULL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (((_Bool)1) ? (var_8) : (((/* implicit */unsigned long long int) 4294967295U))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) var_4);
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((((/* implicit */int) (short)9563)) / (((/* implicit */int) (short)-26350)))) << (((/* implicit */int) ((((/* implicit */_Bool) 7ULL)) && (((/* implicit */_Bool) var_2))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] [i_4] |= ((/* implicit */short) ((_Bool) 8896169331855100349ULL));
                                var_20 = ((/* implicit */short) var_12);
                                var_21 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)26380)))) / (18446744073709551594ULL)));
                                arr_16 [(_Bool)1] [i_1 - 1] [i_2] [i_3] [17ULL] = ((unsigned long long int) ((((/* implicit */_Bool) 4611650834055299072ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-9568))) : (2081798458U)));
                                arr_17 [i_0] [i_0] [i_0] [i_2] [8U] [i_0] [i_4] = ((unsigned long long int) var_11);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}

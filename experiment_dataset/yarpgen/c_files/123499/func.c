/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123499
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
    var_18 = ((_Bool) (+(((((/* implicit */int) var_6)) * (((/* implicit */int) (short)-4303))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9345)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -2056893888))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) 5625109025672207435ULL))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1 - 1] [i_1 - 1])) && (((/* implicit */_Bool) ((2056893883) >> (((((/* implicit */int) (signed char)91)) - (82)))))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_12 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 - 1] [i_1 - 2] [i_1]) ? (((/* implicit */int) arr_12 [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 2] [i_1])) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1 - 2] [i_1]))))) ? ((((+(((/* implicit */int) var_6)))) / ((+(((/* implicit */int) var_2)))))) : (((((/* implicit */int) arr_12 [i_1 - 2] [i_1 - 2] [i_1] [i_1 + 1] [i_1] [i_1] [i_1 - 1])) * (((/* implicit */int) (unsigned short)65535))))));
                                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551591ULL))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((~(18446744073709551609ULL))), (((/* implicit */unsigned long long int) (!(var_8))))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1 + 2] [i_1]))) / ((+(5625109025672207429ULL))))))));
                }
            } 
        } 
    } 
}

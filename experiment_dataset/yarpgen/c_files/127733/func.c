/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127733
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_1 - 1] [(_Bool)0])) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17412))) : (1044480ULL)))))));
                    var_15 *= ((/* implicit */int) 7ULL);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [5LL] [i_4] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (7556713447104536404ULL)))))));
                                arr_15 [i_2] [i_2] [i_2] [i_3] [i_2] [i_2] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((long long int) var_1))) ? ((+(arr_6 [i_4] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((unsigned char) (_Bool)0))), (arr_7 [i_4] [0ULL] [(unsigned short)4])))))));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-445016174) / (var_10)))) ? (min((((/* implicit */unsigned long long int) 1304882015)), (7ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 1304882013))))));
                                arr_16 [5LL] [5LL] [5LL] = ((/* implicit */int) var_13);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_6)) | (var_10)))))));
}

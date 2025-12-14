/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184242
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
    var_11 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */int) ((4274119856U) * ((-(arr_2 [i_0 - 3] [i_0 - 2])))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_3 [i_0 + 2] [i_0 - 3]) - (arr_3 [i_0 + 1] [i_0 + 2])))) ? ((+(arr_3 [i_0 + 3] [i_0 - 3]))) : (((/* implicit */int) (short)14726)))))));
                                var_13 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((short) arr_0 [i_0 + 3]))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) == (arr_0 [i_0 + 2]))))));
                                var_14 -= ((/* implicit */unsigned int) var_4);
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [8U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_0 + 3])) ? (((/* implicit */unsigned int) arr_3 [i_4] [i_3])) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [6U]))) / (var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42769))) : (((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0 - 3] [i_0 + 3] [i_0] [11U])) + (((/* implicit */int) arr_7 [i_0 - 2] [i_2] [i_3] [i_4]))))) / (var_3)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

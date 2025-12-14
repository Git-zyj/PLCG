/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141884
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
    var_13 = ((/* implicit */unsigned char) ((unsigned long long int) 14870757594698734674ULL));
    var_14 = ((/* implicit */unsigned int) ((short) (+(2624162311293229513ULL))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        arr_11 [i_3] [i_3] &= ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [(short)8] [i_3]))))))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_0]))));
                    }
                    arr_13 [i_1] [(short)9] [(short)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-34))) : (1960720631512295737ULL)));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_5))));
}

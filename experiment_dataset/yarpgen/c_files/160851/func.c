/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160851
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
    var_13 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)48037)) ^ (((/* implicit */int) var_9))))))))));
    var_14 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_11)))) | (var_4)));
    var_15 = ((/* implicit */unsigned long long int) ((((unsigned int) (unsigned short)17515)) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) var_7)) | (((/* implicit */int) var_5)))) : (max((var_3), (((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    var_16 += ((/* implicit */signed char) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_9))));
                    var_17 = ((/* implicit */short) (-(0ULL)));
                }
                arr_9 [i_0] = ((/* implicit */unsigned int) arr_4 [i_1] [i_0] [i_1]);
            }
        } 
    } 
}

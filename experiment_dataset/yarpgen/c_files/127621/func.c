/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127621
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 19; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            var_11 = 8474020848030551349ULL;
                            arr_14 [i_0] [i_1] [i_1] [i_3 + 1] = 9223372036854775807LL;
                            arr_15 [i_0] [i_1] [i_2 - 3] [i_0 + 2] [i_4] [i_3] [(short)16] = ((/* implicit */unsigned int) (short)14228);
                        }
                        arr_16 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_13 [i_0 + 1] [i_1] [i_0 + 1] [i_1] [i_0 + 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((483468598U) >= (((/* implicit */unsigned int) 2016079680))))))))) - (((/* implicit */int) arr_7 [i_0]))));
                    }
                } 
            } 
        } 
        arr_17 [i_0] = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0] [(signed char)12] [i_0] [i_0]);
        arr_18 [i_0] = ((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_12 = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_5] [i_5]))));
        arr_22 [16] = ((/* implicit */unsigned int) (signed char)1);
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) -873349431))));
    }
    var_14 = ((/* implicit */short) var_8);
    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)3968)), (9940298204562193785ULL)));
}

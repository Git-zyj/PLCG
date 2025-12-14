/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168717
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = arr_2 [i_0];
                arr_5 [i_0] [i_0] [i_1] = arr_0 [i_0];
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (((+(((/* implicit */int) (unsigned short)6855)))) == ((+(((/* implicit */int) arr_1 [(unsigned char)11] [(unsigned char)11]))))))) != ((+(((/* implicit */int) arr_13 [i_4] [i_4] [i_4] [i_4 - 1] [6U]))))));
                                arr_15 [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_13 [i_1] [i_1] [2ULL] [i_1] [i_1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_5] [i_5])) ? (((/* implicit */int) arr_19 [i_5] [i_5])) : (((/* implicit */int) (signed char)-100))));
        arr_20 [i_5] = ((/* implicit */_Bool) arr_18 [i_5]);
    }
}

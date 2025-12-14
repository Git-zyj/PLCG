/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18867
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 2])), (((((/* implicit */int) var_15)) - (((/* implicit */int) arr_1 [i_0 + 1]))))))) ? (((((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))) & (((int) var_7)))) : (((/* implicit */int) var_19))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [12LL] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(max((var_2), (((/* implicit */int) var_13))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53880))) - (7ULL))) : (((/* implicit */unsigned long long int) ((int) -8817955076594545320LL)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 18; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)119)) : (var_2)))) && ((!(arr_1 [i_0])))));
                                var_21 = ((/* implicit */int) max((min((((/* implicit */unsigned int) arr_8 [i_0 + 2] [i_1] [i_2] [i_0] [i_3] [i_4])), (((unsigned int) arr_8 [i_0] [i_1] [i_2] [i_0] [(signed char)3] [i_2])))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)11656)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_3])))))))));
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned short) max((919489497U), (((/* implicit */unsigned int) (signed char)127))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
}

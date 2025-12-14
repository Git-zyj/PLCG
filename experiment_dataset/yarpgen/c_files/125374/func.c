/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125374
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
    for (long long int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_3 [i_0 + 3] [i_0 + 3] [i_0 + 2]))) & (((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775804LL)))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_11)) - (((var_10) / (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3]))) - (57548013U))))))));
                                arr_11 [0LL] [(signed char)7] [i_1] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */short) (-(max((arr_9 [i_4] [(signed char)4] [i_2] [i_2] [i_1] [i_0]), (((/* implicit */int) (signed char)-116))))));
                            }
                        } 
                    } 
                    arr_12 [i_2] [i_1] [6ULL] = ((/* implicit */short) max(((+(9223372036854775797LL))), (((/* implicit */long long int) ((3349628008U) / (max((var_11), (57548004U))))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)98)) ? (((((/* implicit */unsigned int) -1)) - (((((/* implicit */_Bool) 4294967293U)) ? (4294967293U) : (57548013U))))) : (((/* implicit */unsigned int) 416005716))));
                }
                var_21 = ((/* implicit */short) arr_0 [i_0]);
                arr_13 [i_0] [i_1] = ((/* implicit */signed char) ((arr_10 [i_1] [i_0] [i_0]) >> (((((((-2866736918076750500LL) & (-9223372036854775804LL))) - (-9223372036854775755LL))) + (57LL)))));
                arr_14 [i_1] [i_0] = ((/* implicit */int) (((+(-3299979123419462463LL))) + (((/* implicit */long long int) ((((/* implicit */int) (short)-15419)) / (((/* implicit */int) (unsigned char)141)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_7);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15759
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */unsigned int) min((var_9), (((/* implicit */unsigned short) (_Bool)0))))), (1U)))))));
    var_16 = ((/* implicit */unsigned int) min(((~((~(((/* implicit */int) var_11)))))), (((/* implicit */int) (_Bool)0))));
    var_17 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-19366)) + (2147483647))) << (((2288586150410615073ULL) - (2288586150410615073ULL)))));
                    arr_7 [i_0] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned long long int) (unsigned short)33736)) == (((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned int) (_Bool)1))))))))) == (((unsigned int) (signed char)-91))));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)64292))))))));
                }
                for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    arr_12 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */short) (_Bool)0);
                    arr_13 [(unsigned short)6] [14LL] [(unsigned short)6] &= ((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned short)56247), (((/* implicit */unsigned short) (_Bool)1)))))));
                    var_19 = (!((_Bool)1));
                }
                arr_14 [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? ((~(((/* implicit */int) (short)27754)))) : (((/* implicit */int) (!((_Bool)1))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((unsigned short) (_Bool)1));
}

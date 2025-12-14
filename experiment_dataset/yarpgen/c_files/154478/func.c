/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154478
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
    var_19 = ((/* implicit */int) max((var_9), (((/* implicit */unsigned long long int) max((4294967295U), (((/* implicit */unsigned int) (unsigned short)65532)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) min((arr_3 [i_2] [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1] [i_2]))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-36)), ((unsigned short)13))))))) ^ (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_0]))))));
                    var_20 = ((((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-7), (arr_1 [i_0] [i_0]))))) + (((((/* implicit */_Bool) (unsigned short)65525)) ? (((/* implicit */unsigned int) 95051170)) : (4294967295U))));
                    arr_7 [i_0] [(signed char)15] [i_2] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (signed char)6)) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */int) arr_1 [i_2] [i_0])) : (((/* implicit */int) (signed char)-7)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_18);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        for (int i_4 = 1; i_4 < 19; i_4 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                var_22 = (-(((unsigned int) (signed char)76)));
                                arr_22 [i_5] [4U] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((int) var_11))) / (((unsigned int) arr_11 [i_3] [i_4] [i_3]))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_4 - 1] [i_4 + 1])) & (((/* implicit */int) arr_11 [i_3] [i_4 - 1] [i_5]))));
                }
                arr_23 [i_3] [i_4 - 1] = ((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_9 [i_4 + 1])))));
            }
        } 
    } 
}

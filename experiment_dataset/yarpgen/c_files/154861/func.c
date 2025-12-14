/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154861
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_2] [i_0] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_2])))), (((((/* implicit */int) var_11)) < (((((/* implicit */int) var_14)) & (((/* implicit */int) arr_4 [i_0]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((_Bool) var_7)))));
                                arr_15 [i_0] [i_0] [i_2 + 1] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */int) (short)-23726)) & (((/* implicit */int) (short)23725))));
                                arr_16 [i_0] [i_0] [i_2] = var_11;
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */_Bool) min((3924982433U), (((/* implicit */unsigned int) (short)-23726))));
    }
    var_18 = var_11;
    var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-23726))));
    var_20 = ((/* implicit */unsigned char) 640333399U);
}

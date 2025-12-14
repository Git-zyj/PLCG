/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116572
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_3]) : (arr_2 [i_1])))) ? ((+(var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0]) < (arr_2 [i_3])))))))));
                                var_21 = (signed char)-2;
                                arr_14 [i_0] [i_1] [i_2] [i_3] [(short)2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_4] [i_3] [i_2] [i_1])) == (((/* implicit */int) arr_8 [i_3] [i_1] [i_2] [i_3]))))) | (((/* implicit */int) arr_8 [i_0] [i_1] [i_4] [i_3]))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_5 = 1; i_5 < 20; i_5 += 4) 
                {
                    var_22 = ((/* implicit */short) (~(((/* implicit */int) (signed char)-2))));
                    var_23 = ((/* implicit */long long int) 1073067871);
                    var_24 = ((/* implicit */short) var_15);
                    var_25 = arr_3 [i_0];
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_2) : (var_12)))), (((((/* implicit */_Bool) (~(-1073067877)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (2ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1073067881)) && (((/* implicit */_Bool) (signed char)88))))))))));
}

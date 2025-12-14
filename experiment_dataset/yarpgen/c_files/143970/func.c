/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143970
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
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_11))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_2 [(signed char)16]))))) ? ((+(((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0 + 3])) : (((/* implicit */int) arr_1 [(unsigned char)12] [i_1])))))) : (((/* implicit */int) ((_Bool) arr_2 [i_0 + 1])))));
                    arr_6 [i_0 + 2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_3 [11])), (((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 + 1])) ? (arr_5 [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))))))));
                    arr_7 [i_0] [5U] [i_1] [6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [i_1])), (((((/* implicit */_Bool) arr_0 [i_2] [i_1])) ? (arr_4 [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0 + 1])))))) : (((((/* implicit */_Bool) ((signed char) 2325415297533526056ULL))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_5 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_2 [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min((((((_Bool) arr_1 [i_4] [i_3])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_1])) : (((/* implicit */int) min((arr_1 [(short)5] [i_2]), (((/* implicit */short) arr_3 [i_4]))))))), (((/* implicit */int) ((signed char) arr_8 [i_0 + 2] [i_2] [i_3]))))))));
                                arr_12 [i_0] [i_1] [i_2] [(unsigned short)16] [i_0] = ((/* implicit */unsigned int) arr_8 [i_2] [i_3] [0]);
                                arr_13 [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [7U] [i_1])) ? (((/* implicit */int) arr_0 [(unsigned char)3] [(signed char)3])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_0])))), (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_4] [i_2] [i_4])) ? (((/* implicit */int) arr_8 [i_0 + 4] [i_1] [i_2])) : (((/* implicit */int) arr_1 [i_1] [i_4]))))))) ? (((long long int) arr_0 [i_4] [i_1])) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [(unsigned char)0] [i_1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

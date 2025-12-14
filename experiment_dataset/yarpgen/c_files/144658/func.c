/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144658
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) (unsigned short)496)) : (((/* implicit */int) var_8))))) : (((unsigned long long int) 4157286975U))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 15; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_13 [i_3] [i_1] [i_4] [i_3] [i_4] [i_0] = ((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_4 - 3] [i_4 - 3] [(unsigned char)18] [i_3] [i_2]);
                                arr_14 [i_2] [i_1] = ((/* implicit */short) (+(((((/* implicit */long long int) arr_3 [i_0 - 3] [i_2 - 2] [i_4 - 3])) - (arr_2 [i_0 - 3] [i_2 - 2])))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)29919), ((unsigned short)35599)))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */int) (unsigned short)35617)) : (((/* implicit */int) max((arr_6 [i_1] [i_1]), (var_1))))));
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */signed char) max((((int) arr_1 [i_0 + 1] [i_1])), (((/* implicit */int) min((var_13), (min((((/* implicit */unsigned short) var_3)), ((unsigned short)35630))))))));
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        arr_23 [(unsigned char)0] [i_1] [(unsigned char)2] [i_5] [i_1] [i_6] = ((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 3] [(unsigned short)5] [i_5]))))))), (max((var_15), (arr_6 [i_0 - 2] [i_5])))));
                        arr_24 [i_6] [i_6] [i_5] = ((/* implicit */signed char) ((((_Bool) arr_11 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))))) : (((/* implicit */int) (unsigned char)154))));
                        arr_25 [i_6] [i_5] [i_1] [i_1] [i_6] [i_6] = ((/* implicit */signed char) arr_12 [i_0 + 1] [i_0 + 1] [(short)17] [i_1] [i_5] [i_6] [i_6]);
                    }
                    for (unsigned char i_7 = 4; i_7 < 18; i_7 += 1) 
                    {
                        arr_29 [i_0] [i_0] [17ULL] [i_5] [i_7] = ((/* implicit */int) arr_4 [i_7] [(unsigned short)9] [i_1] [i_7]);
                        arr_30 [i_7] [i_0] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 3488649640U)), (7446056656689819183ULL)));
                        arr_31 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */long long int) arr_4 [i_0] [i_1] [i_5] [i_7]);
                    }
                }
            }
        } 
    } 
}

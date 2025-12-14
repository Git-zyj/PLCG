/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128173
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
    var_20 = var_8;
    var_21 = ((/* implicit */short) (unsigned char)36);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 6; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_4 [i_0] [i_0]))));
                                arr_10 [i_0] [i_1 + 1] [i_2 - 1] [i_3 + 3] [i_4] = ((/* implicit */unsigned long long int) 991934265);
                                arr_11 [(short)8] [i_1] [(short)8] [i_3] [i_4] [i_1] &= (~(var_1));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_1]))) - (3078924187U)))));
                var_23 = max((min((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) | (((/* implicit */int) (unsigned char)198))))), (max((((/* implicit */unsigned int) (short)-20136)), (0U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((464141246916895074ULL) & (((/* implicit */unsigned long long int) 0U))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != (arr_6 [i_0 - 1] [i_0] [i_1 - 1] [i_1 - 1])));
                    arr_15 [i_0 - 1] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) (short)-13431);
                }
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    var_25 = max((max((var_5), (4294967295U))), (max((arr_0 [i_0]), (arr_0 [i_0 + 1]))));
                    arr_18 [i_0 + 1] [i_0] [i_6] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_7 [i_6] [i_6] [i_0] [i_0] [i_1] [i_0]) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (arr_13 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50962)))))), (arr_6 [i_0] [i_0] [i_6] [i_6])));
                    arr_19 [i_0 - 1] [i_0] [i_0] = ((/* implicit */int) ((long long int) 8816101936911967059ULL));
                }
            }
        } 
    } 
}

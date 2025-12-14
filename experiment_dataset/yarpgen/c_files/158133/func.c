/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158133
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
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((2305843009213661184LL), (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_1]))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (6805427172700062863ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(_Bool)1] [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0] [10U])) | (arr_1 [4ULL]))))))) ? (((/* implicit */unsigned long long int) arr_0 [9LL] [i_1])) : (((min((513993544871540500ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_1] [(_Bool)1] [(_Bool)1]), ((_Bool)1)))))))));
                arr_5 [i_1] = ((/* implicit */long long int) max((arr_1 [i_1]), (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (arr_1 [i_1])))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0]);
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) min(((-2147483647 - 1)), (((/* implicit */int) (signed char)6))))), (max((arr_7 [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12288)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_7 [i_0])))) ? (((((/* implicit */_Bool) (signed char)21)) ? (arr_7 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) arr_1 [i_2]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_16 [i_4] [i_3 - 1] [13ULL] [i_1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned char)56)) : (arr_1 [i_4])))), (arr_10 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4])))), (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [4LL] [15LL] [i_2])), (arr_10 [i_0] [i_0] [i_1] [i_0] [i_3 - 1] [i_0])))) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (arr_7 [i_0])))));
                                arr_17 [i_0] [i_0] [(unsigned short)19] [(unsigned short)19] [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
                                arr_18 [i_4] [(_Bool)1] [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) max((arr_0 [i_1] [13LL]), (((/* implicit */long long int) (unsigned short)240))));
                                arr_19 [i_0] [i_0] [i_2] [i_3 - 1] [i_3] [i_3] [i_3] = ((/* implicit */short) ((min((((/* implicit */long long int) arr_12 [i_4] [i_2] [i_1])), (arr_11 [i_3 - 1] [i_3 - 1] [i_2] [11U]))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) < (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) && (((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_2] [3ULL])))))))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (_Bool)1)), (arr_0 [i_0] [i_2]))) << (((max((((/* implicit */unsigned long long int) 1696198938)), (arr_13 [i_0] [13U] [i_1] [i_2] [i_2]))) - (8982101590022732026ULL)))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */short) min((((/* implicit */int) var_4)), (1048575)));
}

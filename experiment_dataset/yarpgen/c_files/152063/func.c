/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152063
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
    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))))), (((((/* implicit */_Bool) min((var_17), (var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_12)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_20 &= ((/* implicit */long long int) (unsigned short)16965);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) (unsigned char)255);
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            arr_11 [1ULL] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */int) var_8)), (((int) arr_3 [i_3 - 2] [i_0 - 1]))));
                            arr_12 [i_2] = ((/* implicit */_Bool) 1ULL);
                        }
                        arr_13 [i_0] [i_1] [i_2] [4LL] [i_2] [4LL] = min((max((((/* implicit */unsigned long long int) arr_0 [(signed char)2])), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (22ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8292))))))), (((/* implicit */unsigned long long int) var_14)));
                    }
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15740))) : (18446744073709551615ULL)));
                        arr_17 [i_0 - 1] [i_0] [(signed char)4] [i_0 + 2] [i_2] [i_0 + 2] = ((/* implicit */int) (~(((((/* implicit */_Bool) 5359000006254228267ULL)) ? (18446744073709551615ULL) : (1ULL)))));
                    }
                    arr_18 [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) max(((short)18020), (((/* implicit */short) (unsigned char)89))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) 
    {
        var_23 = ((/* implicit */int) 7016486954186222231LL);
        var_24 = ((/* implicit */unsigned int) min((max((18446744073709551594ULL), (max((((/* implicit */unsigned long long int) (signed char)-40)), (var_12))))), (((/* implicit */unsigned long long int) (short)-11407))));
        var_25 += ((/* implicit */_Bool) ((short) (-((~(arr_19 [i_6]))))));
        var_26 += ((/* implicit */unsigned long long int) arr_19 [i_6]);
    }
}

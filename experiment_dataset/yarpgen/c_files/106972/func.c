/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106972
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
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */int) ((arr_2 [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))) != (((((/* implicit */int) arr_3 [i_1] [i_0])) / (((/* implicit */int) arr_0 [i_0 - 3]))))))), (arr_0 [i_0])));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_17 |= ((/* implicit */unsigned char) min((arr_6 [12ULL] [i_1] [i_2] [i_2]), (((((arr_6 [i_0] [i_1] [(signed char)10] [i_2]) - (arr_2 [i_2] [i_2]))) >> (((((/* implicit */int) arr_7 [i_2])) - (145)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((max((min((arr_9 [i_1]), (arr_9 [i_1]))), (((/* implicit */int) arr_12 [i_0] [i_0])))) * (((max((arr_1 [i_2]), (((/* implicit */int) arr_10 [i_0])))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_3] [i_4])) || (((/* implicit */_Bool) arr_11 [i_1]))))))))))));
                                var_19 -= ((/* implicit */int) ((((arr_2 [i_3] [i_1]) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)46284)) % (((/* implicit */int) (unsigned char)244))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_13 [i_2] [i_0] [i_1 - 2] [i_2] [i_3] [i_4])) < (arr_5 [i_1] [i_2] [i_3] [i_4])))) > (min((arr_5 [i_0 - 1] [i_0] [(unsigned short)7] [i_0]), (arr_9 [i_1])))))))));
                                var_20 |= ((/* implicit */unsigned short) ((((((/* implicit */int) min((arr_3 [i_0] [2ULL]), (arr_3 [i_0 + 1] [(unsigned short)8])))) >> (((((/* implicit */int) max((arr_13 [i_1] [i_0] [i_1] [i_3] [i_4] [i_0]), (((/* implicit */unsigned short) arr_7 [i_1]))))) - (37689))))) > (arr_5 [i_1] [i_2] [i_1] [i_4])));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_5)))))))) > (((var_0) >> (((((((/* implicit */int) (unsigned char)226)) + (-1613775013))) + (1613774821)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139555
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
    var_15 ^= ((/* implicit */long long int) var_8);
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) min((var_4), (((/* implicit */long long int) 560715917)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (min(((~(var_12))), (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_8), (((((/* implicit */_Bool) arr_1 [(signed char)8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-27))) : (arr_1 [(unsigned char)8])))))) || (((/* implicit */_Bool) max((((((/* implicit */int) var_5)) & (((/* implicit */int) (signed char)-27)))), (arr_5 [i_1 - 2]))))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    arr_10 [(unsigned char)2] [i_1 - 3] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_0 [i_1]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] [i_4 + 1] &= ((/* implicit */long long int) (~(((/* implicit */int) min((arr_13 [i_0] [i_0] [1] [i_0 - 1] [i_0] [i_4]), (arr_13 [i_0] [i_0] [(signed char)8] [i_0 - 1] [i_2] [(signed char)1]))))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)255)) ? (15ULL) : (((/* implicit */unsigned long long int) 4585444366749532433LL)))), (((/* implicit */unsigned long long int) (_Bool)0))))) ? (((/* implicit */int) ((unsigned char) arr_7 [i_3 - 1] [i_1 - 2] [i_1] [i_0 + 1]))) : (max((((/* implicit */int) arr_8 [i_0 + 1] [i_1 - 1])), (((((/* implicit */int) (signed char)7)) * (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [(signed char)3]))))))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_8 [i_1] [i_3]) ? (((((/* implicit */int) arr_0 [i_2])) + (((/* implicit */int) (short)-17972)))) : (((/* implicit */int) arr_11 [1] [i_2] [1] [i_4]))))) ? (((/* implicit */long long int) 2147483647)) : (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4] [i_4] [i_4 + 1] [i_4] [(_Bool)1]))) + (((long long int) arr_12 [i_0 + 1] [(unsigned short)11] [i_2] [i_3] [i_4]))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    arr_18 [i_5] = (-(-1135738856));
                    var_19 = ((/* implicit */unsigned char) ((((((((/* implicit */long long int) ((/* implicit */int) (signed char)-16))) - (-1141779836005564673LL))) + (((/* implicit */long long int) ((/* implicit */int) arr_12 [(unsigned char)10] [(unsigned char)10] [i_1 - 1] [5ULL] [i_5]))))) < (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1 - 2] [1U] [(signed char)1] [(signed char)1] [i_5])))));
                    var_20 &= ((/* implicit */unsigned long long int) arr_17 [i_0] [(short)2]);
                    var_21 = ((/* implicit */int) arr_4 [i_0] [i_1 - 2]);
                }
            }
        } 
    } 
}

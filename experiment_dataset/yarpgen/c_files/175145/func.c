/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175145
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
    var_13 = ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_3)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_14 += ((/* implicit */_Bool) max((((((/* implicit */long long int) arr_3 [i_2 + 1])) + (arr_10 [i_1] [i_0 + 2] [i_2 + 1]))), (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) (signed char)69)), (var_10)))) + (((/* implicit */int) var_10)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_15 [(short)8] [i_2] [i_0] [i_0] [14] [i_3] = ((/* implicit */long long int) min((((/* implicit */int) arr_12 [i_3] [i_3 - 2] [i_3 + 1] [i_3 - 2])), ((+(((/* implicit */int) (signed char)63))))));
                                var_15 = ((unsigned short) arr_13 [i_2 + 1] [i_4 + 2] [i_4 - 2] [i_4 - 1] [i_4] [i_4]);
                            }
                        } 
                    } 
                    arr_16 [14ULL] [14U] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_14 [4U] [i_2 + 1] [i_2 + 1] [i_2] [3ULL] [i_2] [i_0])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) + (arr_2 [i_0 - 2]))) : (((/* implicit */long long int) arr_3 [i_0])))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-44))) / (arr_3 [i_0 - 1]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        var_16 = ((/* implicit */short) ((((arr_6 [i_5]) >> (((((/* implicit */int) var_10)) - (16822))))) >> (((/* implicit */int) var_1))));
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_5 [i_5] [i_6])) : (((/* implicit */int) arr_19 [i_6] [i_5]))));
            arr_22 [(unsigned char)11] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 5097542194642565485LL)))) * ((+(var_8)))));
            var_18 = ((/* implicit */_Bool) (signed char)69);
        }
        for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 3) 
        {
            arr_25 [i_7] = (((-(var_2))) / (((/* implicit */long long int) ((((/* implicit */int) arr_4 [8U])) + (((/* implicit */int) (signed char)-70))))));
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_11))));
        }
    }
    for (long long int i_8 = 1; i_8 < 22; i_8 += 4) 
    {
        arr_30 [i_8 + 1] [i_8 + 1] = ((/* implicit */unsigned short) arr_26 [(unsigned short)22]);
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [i_8 - 1])) | (((/* implicit */int) min((((short) arr_29 [i_8])), (((/* implicit */short) arr_27 [(signed char)6])))))));
        arr_31 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_29 [i_8])) >> (((((/* implicit */int) arr_28 [i_8])) + (148))))), (((/* implicit */int) arr_28 [i_8 + 1]))))) ? (((unsigned long long int) (signed char)-58)) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_29 [i_8])) & (((/* implicit */int) var_9)))) & (((/* implicit */int) var_9)))))));
        var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_29 [i_8 + 1]))) >> ((((~(((/* implicit */int) (signed char)-69)))) - (55)))));
    }
}

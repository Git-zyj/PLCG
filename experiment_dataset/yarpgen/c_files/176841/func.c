/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176841
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
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(unsigned char)14] [(unsigned char)18] |= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)1)) % ((((-(((/* implicit */int) var_2)))) << (((((((/* implicit */_Bool) arr_2 [(short)16])) ? (-212366237) : (((/* implicit */int) arr_1 [18LL] [18LL])))) + (212366255)))))));
                var_16 = ((/* implicit */signed char) var_13);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            {
                                arr_24 [i_3] [i_3] [i_3] [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (short)-26642)) | (((/* implicit */int) (signed char)-41))))));
                                arr_25 [i_3] [i_5] [i_3] = ((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (arr_20 [i_2] [i_4] [i_2] [i_6])))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */_Bool) max((var_17), (((max((((/* implicit */unsigned long long int) arr_1 [i_2] [18])), (((arr_8 [i_3]) << (((((/* implicit */int) arr_2 [0U])) - (59))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [(unsigned char)8] [i_3] [(unsigned char)8] [(unsigned char)8])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) (short)-13578)) : (((/* implicit */int) var_13)))))))))))));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) min((arr_8 [i_2]), (((/* implicit */unsigned long long int) var_0))))) || (((((/* implicit */int) arr_2 [i_3])) <= (((/* implicit */int) arr_18 [i_2] [i_2] [i_3] [i_2]))))))) > (((/* implicit */int) ((((/* implicit */_Bool) ((8191323411154442920ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7360)))))) && (((/* implicit */_Bool) -212366216)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_7 = 2; i_7 < 9; i_7 += 1) 
    {
        for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                {
                    var_19 = ((/* implicit */short) ((((((/* implicit */int) var_11)) * (((/* implicit */int) ((short) (unsigned char)10))))) / (((/* implicit */int) ((signed char) var_12)))));
                    var_20 -= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -82857783)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_9]))))));
                    var_21 = ((/* implicit */short) var_2);
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 3; i_11 < 9; i_11 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_10])) ? (((/* implicit */int) arr_2 [i_10])) : (((/* implicit */int) var_13)))));
                                arr_40 [i_7] [i_8] [i_7] [i_10] [i_10] = ((/* implicit */int) ((arr_31 [i_7 + 1]) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_7 - 2])) && (((/* implicit */_Bool) arr_31 [i_7 - 1]))))))));
                                arr_41 [i_7] [i_7] [i_10] [i_7] [i_7] [(unsigned short)4] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_36 [i_7 - 1])) ? (arr_36 [i_7 - 2]) : (arr_36 [i_7 - 2]))), (((arr_36 [i_7 - 2]) - (arr_36 [i_7 + 1])))));
                                arr_42 [i_7] [i_8] [i_9] [i_10] [i_10] [i_10] [i_11] = max((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_7] [i_8] [i_9] [i_7] [i_11])) * (((/* implicit */int) (signed char)90))))) != ((-(arr_15 [i_7] [i_8] [i_9] [i_10])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_7] [i_9] [i_10] [i_10])) ? (arr_0 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */_Bool) arr_16 [i_9] [i_8] [i_9] [i_10] [i_11] [i_9])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) < (arr_20 [i_8] [i_9] [i_10] [i_11])))))));
                                arr_43 [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_7 - 1] [i_7 - 1] [i_7] [i_7 + 1] [i_11 + 1] [i_11 - 3])) + (((/* implicit */int) arr_2 [i_10]))))) ? (((var_3) | (((/* implicit */int) arr_16 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 2] [i_11 + 1] [i_11 - 3])))) : ((~(((/* implicit */int) (unsigned char)18))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 |= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (max((var_10), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
}

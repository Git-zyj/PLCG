/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148421
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
    var_15 = ((/* implicit */signed char) ((int) max((((/* implicit */long long int) (+(((/* implicit */int) var_13))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_0)) : (var_3))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_16 = ((long long int) ((unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) arr_1 [(unsigned short)12])))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((((/* implicit */_Bool) -2147483645)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34918))) : (6148053585790729961LL))) + (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (-1948990392)))))));
    }
    var_17 = ((/* implicit */unsigned char) ((long long int) var_14));
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) ((unsigned int) ((arr_4 [(unsigned char)5] [i_1]) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))))))) & (((long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_2])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_8 [i_3])))))));
                    var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) arr_8 [i_3])))) == ((~(((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))))));
                    arr_12 [7LL] [i_2] [i_1] = ((/* implicit */long long int) ((int) max((((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_3])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_3] [i_2] [8U])))), (((((/* implicit */int) arr_11 [1LL])) ^ (((/* implicit */int) arr_1 [i_2])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 2; i_5 < 9; i_5 += 1) 
                        {
                            {
                                arr_18 [6U] [i_1] [i_1] [(unsigned char)4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((signed char) arr_0 [i_1] [i_1])))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_17 [i_5 + 1])), ((~(((/* implicit */int) arr_14 [i_1] [7LL] [8]))))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) -7404216343044103989LL)) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) (unsigned char)204))))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_10 [i_1] [i_2] [i_1]) : (((/* implicit */long long int) arr_15 [i_1] [i_2] [i_3]))))))));
                                var_20 = ((/* implicit */signed char) (((+(((/* implicit */int) ((arr_4 [i_1] [i_2]) < (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5] [i_4] [i_3])))))))) > (max((((((/* implicit */int) arr_11 [i_1])) ^ (((/* implicit */int) arr_9 [i_5 + 2] [i_1] [i_1])))), ((~(((/* implicit */int) arr_0 [i_3] [i_1]))))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1]))) : (arr_10 [i_1] [i_1] [i_3])))) ? ((~(((/* implicit */int) arr_17 [i_3])))) : (((/* implicit */int) arr_13 [i_5 - 1] [i_1] [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 2]))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_8 [i_1])), (arr_3 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_5 - 1] [i_5 - 1]))) : (arr_4 [i_5 - 1] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) arr_6 [i_1])), (arr_10 [i_1] [i_2] [i_3]))))))));
                                arr_19 [i_1] = ((/* implicit */unsigned short) ((signed char) (unsigned char)124));
                                var_22 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_5 + 2])) < (((/* implicit */int) arr_1 [i_5 - 1])))) ? (((/* implicit */long long int) (~(arr_16 [i_1] [i_1] [i_3] [i_2] [i_2])))) : (((long long int) arr_1 [i_5 + 2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 += ((/* implicit */signed char) var_14);
}

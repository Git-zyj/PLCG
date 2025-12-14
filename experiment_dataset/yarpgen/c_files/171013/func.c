/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171013
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 10959116588432475034ULL)))))))) ? (((((/* implicit */_Bool) var_12)) ? (min((var_6), (1131736947U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((/* implicit */unsigned int) var_0)) : (var_7)))) ? (((/* implicit */int) (unsigned short)3542)) : (((/* implicit */int) arr_5 [i_1] [i_1])))))));
                    arr_6 [i_0] [i_1] [i_0] [i_0] |= ((/* implicit */unsigned short) var_10);
                    arr_7 [i_1] [i_1] [(signed char)10] [i_1] = ((/* implicit */unsigned int) (signed char)-2);
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((3163230366U), ((-(arr_9 [i_4] [i_3 - 2] [i_2 - 1] [i_1] [i_0])))));
                                var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned short) var_6))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_4]))))))) && ((!(((/* implicit */_Bool) (short)-22655))))));
                                arr_14 [(short)9] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_11 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0]);
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_4] = min(((~(arr_3 [i_0] [i_1]))), (((((/* implicit */int) var_15)) << (((((/* implicit */int) (unsigned short)3515)) - (3511))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_5] [i_5])) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5] [i_5]))) <= (var_10))))))) >= (((long long int) arr_12 [i_5] [i_5] [i_5] [i_5]))));
        var_19 = ((/* implicit */unsigned int) arr_2 [i_5]);
    }
    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((var_15) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_6] [i_6] [(unsigned short)24])))))) ? (((((arr_16 [i_6]) + (2147483647))) >> (((arr_10 [i_6] [i_6] [i_6] [i_6] [i_6]) - (1088705834764956847ULL))))) : (((((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)22655)))))), (((/* implicit */int) arr_0 [i_6] [i_6]))));
        arr_20 [i_6] [i_6] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6]))) & (0U)))) ? (((/* implicit */unsigned int) (~(arr_11 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))) : (arr_12 [i_6] [i_6] [i_6] [i_6])))));
        var_21 = ((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_6] [i_6] [i_6]);
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        var_22 = ((((arr_1 [i_7]) || (((/* implicit */_Bool) var_8)))) ? (var_14) : (arr_9 [i_7] [i_7] [i_7] [i_7 - 1] [i_7]));
        arr_24 [i_7] [i_7] |= ((/* implicit */_Bool) ((unsigned short) 134217728U));
        var_23 = ((/* implicit */unsigned short) max((min((2113929216), (-955859451))), ((((((_Bool)1) ? (((/* implicit */int) arr_23 [i_7])) : (((/* implicit */int) arr_0 [i_7] [i_7])))) << (((2113929216) - (2113929202)))))));
    }
    var_24 = ((/* implicit */unsigned int) max((((/* implicit */int) var_12)), ((-(((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) (short)5200)) : (((/* implicit */int) (short)-1))))))));
    var_25 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned char)3))))));
    var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1310
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) 4140893855598378999LL);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned char) -4140893855598378999LL);
            var_10 = ((((-4140893855598378999LL) + (9223372036854775807LL))) << (((((-4140893855598378999LL) + (4140893855598379012LL))) - (13LL))));
            var_11 = ((/* implicit */signed char) (+(4140893855598378999LL)));
            arr_6 [1U] = ((/* implicit */signed char) ((((/* implicit */long long int) arr_1 [i_1] [i_0])) | (4140893855598378972LL)));
            var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) var_9))));
        }
        arr_7 [(signed char)9] = var_4;
        var_13 *= ((/* implicit */unsigned char) var_8);
    }
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */signed char) ((min((min((4140893855598378981LL), (-4140893855598378963LL))), (max((4140893855598378999LL), (-4140893855598378977LL))))) - (((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_2])))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 23; i_3 += 1) 
        {
            for (int i_4 = 1; i_4 < 22; i_4 += 1) 
            {
                {
                    arr_15 [i_2] = ((/* implicit */unsigned int) max((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(arr_14 [i_2] [i_2] [i_2])))) > (max((4140893855598378950LL), (4140893855598378972LL))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_6 = 2; i_6 < 23; i_6 += 4) 
                        {
                            var_14 += ((/* implicit */signed char) 4140893855598378981LL);
                            var_15 |= ((/* implicit */unsigned int) (~(arr_14 [i_2] [(short)4] [i_5])));
                        }
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            arr_23 [i_2] [i_2] [i_4] [i_5] [i_7] [i_7] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) -4140893855598378970LL))))))))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_22 [i_2] [i_2] [i_4 + 1])) + (-4140893855598379000LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) ((arr_12 [(unsigned short)1]) + (((/* implicit */int) var_7))))) ? ((+(-4140893855598379000LL))) : (-4140893855598378961LL)))));
                            arr_24 [i_2] [i_2] [i_4 + 3] [i_2] [i_7] [i_3] [i_2] = ((/* implicit */signed char) 4140893855598379000LL);
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min((((((/* implicit */int) arr_11 [i_2] [i_3])) - (arr_8 [i_2] [i_3 - 1]))), (((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2])))))));
                        }
                        var_18 = ((/* implicit */unsigned char) -4140893855598379001LL);
                        var_19 = ((/* implicit */signed char) ((max((var_8), (((/* implicit */unsigned long long int) arr_8 [i_3 + 2] [i_4 + 2])))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_4 + 3] [i_3 - 1]) != (((/* implicit */int) arr_9 [i_3 + 2]))))))));
                    }
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        arr_27 [i_2] [i_3 - 1] [(unsigned char)11] [i_2] = arr_8 [(signed char)14] [(short)10];
                        arr_28 [i_3] [i_2] = ((/* implicit */int) ((((((4140893855598378982LL) | (((-4140893855598379000LL) + (-4140893855598378977LL))))) + (9223372036854775807LL))) << ((((-(arr_14 [i_2] [i_3 - 1] [i_4 - 1]))) + (1804574941)))));
                    }
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) -4140893855598378981LL)) && (((/* implicit */_Bool) -4140893855598378943LL))));
    }
}

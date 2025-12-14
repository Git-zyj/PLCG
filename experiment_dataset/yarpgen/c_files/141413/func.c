/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141413
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0 - 1] [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((int) 7249452222159814014ULL));
        var_21 = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_16))));
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) arr_4 [i_1]);
        arr_8 [i_1] = ((/* implicit */unsigned short) ((unsigned char) arr_0 [12ULL] [12ULL]));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_0 [i_1] [20ULL]))) ? ((~(((/* implicit */int) arr_0 [(unsigned short)18] [(unsigned char)18])))) : (((((/* implicit */_Bool) 268435440U)) ? (((/* implicit */int) arr_0 [i_1] [(_Bool)1])) : (((/* implicit */int) arr_0 [i_1] [(unsigned char)0]))))));
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((10006816542506833604ULL), (8439927531202718012ULL)))) ? (((/* implicit */int) var_15)) : ((+(((/* implicit */int) (unsigned char)220))))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 11; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            {
                arr_13 [i_3] [i_3] [(unsigned char)4] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_16))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_4 = 2; i_4 < 13; i_4 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned long long int) 268435440U);
                    arr_16 [i_4] [i_2] [i_2] [i_4] = ((((/* implicit */_Bool) ((signed char) arr_15 [i_4 - 2] [i_4]))) ? (arr_12 [i_4 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_2])))));
                }
                /* vectorizable */
                for (unsigned int i_5 = 2; i_5 < 13; i_5 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_5] [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */unsigned long long int) arr_20 [(unsigned short)9] [(signed char)10] [i_5 - 2] [i_5] [i_5 - 1] [i_5 - 2])) : (131071ULL)));
                                arr_24 [i_7] [i_6] [i_5 + 1] [i_5] [i_5] [(unsigned short)8] [i_2] = ((/* implicit */unsigned int) ((int) 4026531855U));
                                arr_25 [i_2] [8ULL] [i_2] [i_3] [i_5] [i_6] [i_6] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) arr_23 [(unsigned short)11] [i_3] [i_5] [i_6] [10LL] [7LL])))) : ((+(((/* implicit */int) (unsigned char)95))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 13; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            {
                                arr_32 [i_2] [i_8] [i_5] [i_2 - 2] [i_2 - 2] [i_2] |= ((/* implicit */_Bool) 268435440U);
                                arr_33 [i_8] [i_3] [i_3] [i_3] [i_3] [1LL] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)224))));
                                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [4ULL] [i_2] [i_3] [i_2] [i_2 + 2])) ? (((/* implicit */int) arr_30 [i_2 + 1] [i_2] [i_2] [i_2] [i_2 + 1])) : (((/* implicit */int) arr_30 [i_8] [i_9] [i_2 + 3] [i_9] [i_2 + 3])))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_10 = 2; i_10 < 13; i_10 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_35 [i_10 - 1] [i_3] [i_10 - 2]))))));
                    var_28 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_2]))))), (((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (var_6)))))));
                }
            }
        } 
    } 
    var_29 += ((/* implicit */unsigned short) var_13);
}

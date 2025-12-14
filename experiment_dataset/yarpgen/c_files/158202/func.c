/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158202
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
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */int) (!((!(((/* implicit */_Bool) var_10))))))), ((~(min((var_9), (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 + 2]))))) && (((((/* implicit */_Bool) arr_2 [i_0 - 3] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0 - 3]))))));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((unsigned char) arr_2 [i_0] [i_0]))), ((unsigned short)65535))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (unsigned int i_3 = 1; i_3 < 8; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0]);
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0 - 1] [i_3 + 2])) >= (((/* implicit */int) arr_1 [i_3 + 4])))))));
                    }
                } 
            } 
            arr_14 [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (signed char)22)) >> (((/* implicit */int) (unsigned char)0))))));
        }
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_0] [i_4] [i_4])))))));
                arr_20 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-113)) >= (((/* implicit */int) (unsigned short)65522))));
                var_20 = ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) arr_18 [i_0])), (min((arr_6 [i_0]), (arr_19 [i_4] [i_4])))))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 2; i_6 < 10; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        {
                            arr_26 [i_0] [i_6] [i_5] [i_4] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)9))) ? (((((/* implicit */unsigned long long int) max((arr_2 [i_5] [i_7]), (((/* implicit */long long int) (short)-22))))) & (min((arr_8 [i_0] [i_4] [i_0] [i_6]), (((/* implicit */unsigned long long int) 4294967295U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_23 [i_6] [i_6] [i_6] [i_6] [i_6]))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_22 [i_0] [i_4]) ? (((/* implicit */int) arr_22 [i_0] [i_4])) : (((/* implicit */int) arr_22 [i_0] [i_7]))))) ? (((arr_22 [i_0] [i_4]) ? (((/* implicit */int) arr_22 [i_0] [i_5])) : (((/* implicit */int) arr_22 [i_0] [i_4])))) : (((/* implicit */int) arr_22 [i_0] [i_6 - 2]))));
                        }
                    } 
                } 
            }
            arr_27 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0])) || ((!(((/* implicit */_Bool) arr_8 [i_0] [i_4] [i_0] [i_4])))))))));
            arr_28 [i_0] = ((/* implicit */unsigned char) min(((~(arr_8 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
        }
        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
        {
            arr_31 [i_0] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))))) ? ((+(max((arr_24 [i_8]), (((/* implicit */long long int) arr_16 [i_0] [i_8])))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_29 [i_0] [i_0] [i_0])))))));
            arr_32 [i_0] [i_8] = (short)31;
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (arr_25 [i_0] [i_8] [i_8])));
            arr_33 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) 896718594U)) < (min((arr_23 [i_0] [i_0 - 3] [i_0 + 1] [i_0] [i_0 - 2]), (arr_23 [i_0] [i_0 + 4] [i_0 - 1] [i_0] [i_0 - 3])))));
        }
        /* vectorizable */
        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 6447006851898607546ULL)) || (((/* implicit */_Bool) arr_0 [i_9])))) ? (((((/* implicit */int) (short)31)) ^ (((/* implicit */int) (short)21)))) : (((1211821534) >> (0U))))))));
            arr_38 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_36 [i_0 - 3]))));
            var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_0] [i_0 + 2]))));
            var_26 = ((/* implicit */_Bool) ((long long int) ((long long int) arr_2 [i_0] [i_0])));
        }
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163302
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))))), ((~(2681393100475599961ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((unsigned long long int) (unsigned char)238))));
    var_13 = ((/* implicit */short) ((((((/* implicit */int) var_5)) + (2147483647))) << (((((/* implicit */int) var_6)) - (1)))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)17)))))))) ? (((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))) : (((long long int) (unsigned short)34914)))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_15 = ((((/* implicit */int) arr_0 [i_0] [4ULL])) << (((/* implicit */int) (_Bool)0)));
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)13))));
        var_16 = ((/* implicit */short) arr_2 [i_0] [i_0]);
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned char)18);
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) (((((-(((/* implicit */int) arr_11 [i_2] [i_1])))) + (2147483647))) >> (((((var_11) ? (((/* implicit */int) arr_11 [i_1] [i_1])) : (((/* implicit */int) var_6)))) - (208)))));
                    arr_14 [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)224)), (arr_1 [i_1] [i_2])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) >= (5669257597018340204ULL)))) : (((/* implicit */int) (signed char)37))))) ? (((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))) : (1048575ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_9 [i_1] [i_2])), (((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */unsigned int) 2147483643)) : (2426989927U))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            {
                                arr_21 [i_1] [i_1] [i_1] [i_4] [i_5] = ((/* implicit */_Bool) arr_2 [i_1] [i_1]);
                                arr_22 [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)48933)) ? (18446744073708503009ULL) : (((/* implicit */unsigned long long int) 16777216)))) == (((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_1] [(short)1])) ? (min((((/* implicit */unsigned long long int) arr_5 [i_4])), (arr_16 [i_1] [i_1] [i_1] [i_3] [i_1] [i_5]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1867977352U)) ? (arr_10 [(short)8] [i_2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(short)5] [(short)5] [i_3] [(short)5]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_23 [i_1] = ((/* implicit */int) 1048577ULL);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            arr_30 [i_6] [i_6] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */long long int) (unsigned char)250)), (7212399631131203369LL))))), (((((/* implicit */_Bool) 2211270214U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31))) : (16352ULL)))));
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                for (short i_9 = 0; i_9 < 10; i_9 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) arr_4 [i_7] [i_9]);
                        arr_38 [(unsigned short)1] [i_7] [i_8] [i_9] [i_7] [i_6] = ((/* implicit */unsigned int) (short)3);
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6] [i_9]))) : (((((/* implicit */_Bool) arr_16 [i_7] [10ULL] [i_8] [i_7] [(signed char)0] [(_Bool)0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_34 [1U] [i_6] [i_6] [i_7] [i_6]))))) : (max((16379ULL), (((/* implicit */unsigned long long int) var_0))))))));
                    }
                } 
            } 
        }
        arr_39 [(unsigned char)0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)102)) ? (1094737439) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) arr_16 [(unsigned short)8] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_7 [6ULL])) : (((/* implicit */int) var_2)))))))));
    }
}

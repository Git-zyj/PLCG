/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167350
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15))) == (arr_0 [i_0])))));
        arr_3 [i_0] = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((17454128172880611172ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (var_1))));
        arr_4 [2U] [(unsigned char)5] = ((/* implicit */unsigned short) 7305809739143857357ULL);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) (-(((max((1705865185U), (((/* implicit */unsigned int) var_9)))) & (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
        arr_9 [i_1] = ((/* implicit */short) 4032759509U);
        arr_10 [(unsigned short)23] = ((/* implicit */_Bool) arr_7 [i_1]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            arr_13 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) var_4);
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                arr_16 [i_1] [i_2] [(unsigned short)13] = ((/* implicit */int) arr_6 [i_3]);
                arr_17 [i_2] = ((/* implicit */int) (+(262207787U)));
                /* LoopSeq 2 */
                for (int i_4 = 2; i_4 < 21; i_4 += 2) 
                {
                    arr_20 [i_1] [22ULL] [22ULL] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_1] [i_4] [i_3] [i_2 + 3] [i_4] [i_1])) ? (var_1) : (((/* implicit */unsigned long long int) arr_19 [i_1] [i_4] [i_1] [i_2 + 1] [16] [16]))));
                    arr_21 [(unsigned char)1] [i_2 + 1] [i_3] [i_2] [i_2 + 3] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 1973423526)) ? (arr_12 [i_2] [14U] [i_4]) : (((/* implicit */unsigned long long int) -6484080517859294513LL))))));
                    arr_22 [i_2] [i_3] [2U] [i_2] = ((/* implicit */unsigned char) arr_5 [12] [2ULL]);
                }
                for (int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    arr_25 [i_3] &= ((/* implicit */unsigned short) (-2147483647 - 1));
                    arr_26 [i_2 + 1] [i_2] [i_3] = ((/* implicit */int) var_2);
                }
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_29 [20U] [(unsigned short)2] [(unsigned short)8] = arr_5 [i_1] [i_6];
                arr_30 [i_2] = ((/* implicit */unsigned char) arr_14 [i_1] [i_2 + 3] [i_6]);
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
                {
                    arr_35 [i_7] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) var_2);
                    arr_36 [i_2] [23] [15U] [i_7] = ((/* implicit */unsigned char) (-(var_13)));
                }
                for (int i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
                {
                    arr_40 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) arr_37 [i_1] [i_2 + 1] [i_2] [i_6] [i_8]));
                    arr_41 [1U] [i_2 - 1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) arr_33 [(unsigned char)9] [i_2 + 1] [i_6] [i_6] [i_8] [i_2 + 1]);
                    arr_42 [i_2] [i_6] [(_Bool)1] [9U] [i_8] [10U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_39 [i_2] [i_2 + 3])) : (((/* implicit */int) arr_39 [i_2] [i_2 + 1]))));
                }
                arr_43 [(unsigned char)9] [i_2 + 2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_2 + 3] [i_2 + 1] [i_2] [i_2 + 3])) ? (((/* implicit */int) arr_32 [i_2 - 1] [20] [i_2] [i_2 + 2])) : (((/* implicit */int) arr_32 [i_2 + 3] [(unsigned short)23] [i_2] [i_2 + 2]))));
            }
            arr_44 [i_2] [i_2] = ((((/* implicit */_Bool) 262207787U)) ? ((+(arr_38 [i_1] [(unsigned char)2] [i_2 + 3] [19] [19]))) : (arr_34 [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2]));
            arr_45 [i_2] [i_1] [i_2] = (-(((/* implicit */int) ((unsigned short) var_1))));
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 11; i_9 += 1) 
    {
        arr_49 [i_9] = ((/* implicit */_Bool) var_4);
        arr_50 [i_9] = ((/* implicit */unsigned long long int) arr_1 [i_9]);
        arr_51 [7U] = ((((/* implicit */_Bool) arr_38 [i_9] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) var_7)) : (arr_31 [i_9] [i_9] [i_9] [i_9] [(unsigned short)22] [i_9]));
    }
    var_14 = ((/* implicit */unsigned char) max((max((min((var_1), (((/* implicit */unsigned long long int) 4032759508U)))), (((/* implicit */unsigned long long int) max((4032759508U), (((/* implicit */unsigned int) var_12))))))), (((/* implicit */unsigned long long int) 1653394289))));
    var_15 = ((/* implicit */long long int) var_6);
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))))) & (var_3)));
}

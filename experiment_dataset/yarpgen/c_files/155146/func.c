/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155146
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
    for (signed char i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 2] [i_0 - 3] [i_0 - 2])) : (((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 2] [i_0 - 3] [i_0 + 2]))))) ? (var_8) : (((/* implicit */long long int) ((arr_9 [i_0 - 3] [i_0 - 1] [i_0 + 1] [i_0 - 1]) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 - 3])) : (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 3] [i_0 - 2] [i_0 + 1])))))));
                                arr_14 [(unsigned short)5] [i_3] [i_1] [i_1] [i_0] = (+(arr_2 [(unsigned char)9] [i_2]));
                                var_17 = ((/* implicit */long long int) arr_3 [i_0] [i_0 - 3] [i_0]);
                                arr_15 [i_1] [i_4] = ((/* implicit */unsigned short) (~(min((arr_13 [1U] [i_0] [(signed char)7] [i_0] [i_0] [i_0 + 1]), (arr_13 [i_0] [i_0] [9] [i_0] [i_0] [i_0 - 3])))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_2 [6LL] [i_0 - 3]), (arr_2 [2] [i_0 + 1])))) ? (((/* implicit */long long int) var_11)) : (arr_8 [i_1] [i_1])));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [(_Bool)1] [i_0] = ((/* implicit */long long int) arr_0 [i_1]);
                    var_19 = ((/* implicit */short) arr_2 [(short)5] [(unsigned char)3]);
                }
            } 
        } 
    } 
    var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 2) 
    {
        for (unsigned char i_6 = 2; i_6 < 18; i_6 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    for (short i_8 = 4; i_8 < 18; i_8 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_19 [i_6]))));
                            arr_28 [(unsigned short)11] [(unsigned short)11] [(unsigned short)11] [i_7] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_19 [i_5])), ((+((-(var_7)))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
                {
                    arr_32 [12U] [i_6 - 1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_5 + 1] [18])) ? (arr_27 [(unsigned short)15] [i_6] [i_9] [18U]) : (((/* implicit */unsigned long long int) var_1))));
                    arr_33 [i_5 + 2] [(unsigned char)8] [i_6] [i_9] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_31 [i_5] [i_5 + 2] [13ULL])) ? (var_11) : (((/* implicit */int) arr_31 [i_5] [i_5 - 2] [3LL])))), (((((/* implicit */int) var_9)) | (((/* implicit */int) arr_31 [13LL] [i_5 - 2] [i_6 + 1]))))));
                }
                for (signed char i_10 = 0; i_10 < 19; i_10 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        for (short i_12 = 3; i_12 < 15; i_12 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_23 [i_5] [i_5 + 2] [i_5 + 2] [i_11]))));
                                var_23 -= ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                    arr_40 [i_5] [i_6] [i_10] [i_5] = ((/* implicit */unsigned long long int) arr_23 [i_6 + 1] [(_Bool)1] [i_6 + 1] [i_5 + 1]);
                    arr_41 [18LL] [18LL] [(short)1] [i_5 - 1] = ((/* implicit */signed char) arr_20 [(signed char)6] [(unsigned char)15] [i_10]);
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 1; i_13 < 18; i_13 += 4) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 19; i_14 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (_Bool)1)), ((((!(((/* implicit */_Bool) arr_24 [i_6 - 1] [i_13] [i_6 - 1])))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_13]))) : (3020322466U))) : (((/* implicit */unsigned int) var_1))))));
                                arr_46 [i_13] [i_13] [i_13] = ((/* implicit */unsigned long long int) arr_36 [i_13 + 1] [i_10] [i_6 - 2]);
                                arr_47 [i_5] [i_6] [(signed char)0] [i_5] [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_5 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (1035848166U))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}

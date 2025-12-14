/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173318
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
    for (int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_4 [i_1 + 2] [i_0 + 1] [i_2 - 1] [i_2]))))));
                    var_12 &= ((/* implicit */unsigned char) (((-(var_5))) * (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)27830)) ? (((/* implicit */int) var_6)) : (8380416))) ^ (((/* implicit */int) arr_5 [i_1 - 2] [i_2 + 2] [i_2 - 2])))))));
                    arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0 + 2] [i_1]))) || (((/* implicit */_Bool) var_9))));
                    arr_7 [i_0 - 2] [i_1 + 2] [(unsigned char)20] [i_0] = ((/* implicit */int) arr_5 [i_1 + 1] [i_1] [i_2]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        for (unsigned char i_4 = 4; i_4 < 10; i_4 += 3) 
        {
            {
                var_13 += ((/* implicit */unsigned int) var_5);
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    var_14 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_10 [i_5] [(unsigned char)3])) ? (1632006946318915157ULL) : (((/* implicit */unsigned long long int) arr_4 [(short)18] [i_4] [i_4 + 1] [i_4 - 3]))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 2; i_6 < 11; i_6 += 4) 
                    {
                        var_15 = ((/* implicit */long long int) var_0);
                        var_16 = ((/* implicit */int) (+(arr_4 [9U] [i_5] [i_6 - 1] [i_6])));
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_4 + 2])) ? (((/* implicit */int) arr_13 [i_4 - 1])) : (((/* implicit */int) arr_13 [i_4 - 4]))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_19 [(unsigned short)8] [i_4]))) ? (arr_17 [i_5] [i_4] [i_4]) : (((/* implicit */long long int) arr_21 [i_3] [i_4 - 1] [2ULL] [i_4 - 1] [i_4]))));
                            arr_23 [i_3] [(short)1] [i_4 - 3] [7U] [(unsigned char)9] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_4 - 1] [13LL]));
                            arr_24 [i_3] [(unsigned char)6] [(unsigned short)2] [i_5] [(short)2] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_5] [i_4 - 3] [i_4 - 4])) || (((/* implicit */_Bool) ((int) arr_12 [5LL] [i_7] [(_Bool)1])))));
                            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((arr_18 [i_3] [i_4 - 1] [(short)7] [i_9]) >> (((arr_0 [i_4] [i_4 - 2]) + (8951059996703198195LL)))));
                            arr_28 [i_4 - 3] [(signed char)10] [7U] [i_9] &= ((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_7] [(signed char)5] [i_4 + 1] [i_3])) <= (((/* implicit */int) arr_1 [i_4 + 1] [i_3]))));
                            var_21 = var_3;
                        }
                        var_22 |= ((/* implicit */unsigned short) var_7);
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_26 [i_7] [i_7] [i_4 - 3] [(_Bool)1] [i_7] [(unsigned short)8]))));
                        var_24 = (~(arr_10 [i_4 - 1] [i_4 + 2]));
                    }
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
                    {
                        arr_32 [11LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_4 + 2] [15ULL])) : (((/* implicit */int) arr_1 [i_4 - 1] [i_4 - 1]))));
                        arr_33 [i_3] [i_4] [i_4 + 2] [i_4 + 2] [0] [i_10] = ((/* implicit */unsigned short) (~(((int) arr_0 [i_3] [i_5]))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */int) (short)255)) | (((/* implicit */int) arr_15 [i_4 - 1] [i_4] [(unsigned char)9] [i_4]))));
                    }
                    arr_34 [i_3] [3U] [6] [i_5] = ((/* implicit */unsigned long long int) arr_26 [i_4] [2] [i_4 - 3] [i_4] [i_4 + 1] [i_4]);
                    arr_35 [i_5] [9ULL] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) arr_25 [i_3] [i_4 + 1] [i_5] [i_4])))));
                }
            }
        } 
    } 
    var_26 += ((/* implicit */int) ((var_9) * (((/* implicit */unsigned long long int) var_4))));
    var_27 = ((/* implicit */unsigned char) var_2);
}

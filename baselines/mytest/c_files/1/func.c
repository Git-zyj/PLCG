/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/1
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
    var_14 = ((/* implicit */unsigned char) (-(-407612426)));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) % (((((/* implicit */_Bool) ((-1320130936) * (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) min((var_11), (((/* implicit */short) var_10))))) : (((/* implicit */int) min((var_11), (((/* implicit */short) var_9)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = max(((unsigned char)99), ((unsigned char)157));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                arr_8 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0 + 3])) + (((/* implicit */int) (unsigned char)99))));
                arr_9 [i_1] [i_2] = ((/* implicit */unsigned char) ((long long int) (unsigned char)166));
                arr_10 [16] [i_1] [i_1] [(unsigned char)21] = ((/* implicit */int) (unsigned char)175);
                arr_11 [i_2] [i_1] |= ((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) (unsigned char)166)));
                arr_12 [i_2] [i_1] [i_0] [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) << (((((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) var_9)))) - (85))));
            }
            arr_13 [i_1] [i_0 - 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 3] [i_1]))));
            arr_14 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_0 + 3] [i_0 - 2] [i_0 - 1])) < (((/* implicit */int) arr_3 [i_0 - 2]))));
        }
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            arr_17 [i_3] = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) arr_7 [(unsigned char)19])) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) arr_4 [i_0 - 2])))), (((/* implicit */int) arr_1 [i_0] [i_0 + 3])))), (((((/* implicit */int) (unsigned char)197)) - (((/* implicit */int) (unsigned char)58))))));
            arr_18 [i_0 + 2] [i_0 + 2] = ((((/* implicit */_Bool) min(((unsigned char)99), ((unsigned char)197)))) ? (((/* implicit */int) min((arr_1 [i_0 - 1] [i_3]), (((/* implicit */short) arr_15 [i_0 + 1]))))) : ((~(((/* implicit */int) (unsigned char)57)))));
        }
        arr_19 [i_0] = (unsigned char)95;
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            arr_22 [i_4] = ((/* implicit */long long int) ((arr_21 [4LL] [i_0 + 1] [i_0 - 2]) <= (arr_21 [(short)18] [i_0 + 1] [i_0 - 2])));
            arr_23 [(unsigned char)12] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_13)) + (((/* implicit */int) var_11))));
        }
        for (unsigned char i_5 = 2; i_5 < 22; i_5 += 1) 
        {
            arr_28 [(unsigned char)0] [i_5 - 2] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)171)), (var_4))))));
            arr_29 [i_0] [i_0 + 3] [i_5] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) (unsigned char)201))))) ? (((/* implicit */int) min(((unsigned char)175), ((unsigned char)197)))) : (((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) var_0)))))), ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)198)) : (var_6)))))));
            arr_30 [i_0 + 1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)198))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)184))) : (((var_3) / (((/* implicit */long long int) var_5)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)71)))))));
        }
        for (short i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            arr_33 [i_0] [i_6] [i_6] = ((/* implicit */int) var_3);
            arr_34 [i_0] [i_6] [(unsigned char)6] = ((/* implicit */unsigned char) ((int) min((arr_31 [i_0 + 1] [i_0] [i_6]), (arr_31 [i_0] [i_6] [i_6]))));
            arr_35 [(unsigned char)16] [7LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_2) * (((((/* implicit */int) (unsigned char)145)) / (var_6)))))) ? (((((/* implicit */_Bool) ((var_5) / (((/* implicit */int) (unsigned char)86))))) ? (((((/* implicit */int) (unsigned char)81)) * (((/* implicit */int) (unsigned char)198)))) : ((-(var_2))))) : (((/* implicit */int) min(((unsigned char)156), ((unsigned char)54))))));
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                arr_38 [i_0] = ((((/* implicit */int) (unsigned char)169)) - (((/* implicit */int) (unsigned char)72)));
                /* LoopSeq 2 */
                for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    arr_42 [(short)2] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_31 [i_8] [(short)3] [21]))) || (((((/* implicit */int) (unsigned char)198)) <= (((/* implicit */int) var_9))))))) != (((((/* implicit */int) ((((/* implicit */int) (unsigned char)57)) != (((/* implicit */int) (unsigned char)209))))) + (((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) (unsigned char)180)) : (((/* implicit */int) (unsigned char)141))))))));
                    arr_43 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((((long long int) (unsigned char)183)) << (((((/* implicit */int) (unsigned char)90)) - (60))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned char)144)) || (((/* implicit */_Bool) (unsigned char)80))))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 2; i_9 < 23; i_9 += 4) 
                    {
                        arr_48 [18] [i_6] [18] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)74)) != ((-(((/* implicit */int) (unsigned char)72))))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)80)) < (((/* implicit */int) (unsigned char)183)))))));
                        arr_49 [i_0] [i_7] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)81)) > (((/* implicit */int) (unsigned char)79))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        arr_52 [i_0 + 1] [i_6] [i_7] [i_8] = min(((unsigned char)197), ((unsigned char)81));
                        arr_53 [i_10] [i_8] [i_0 - 1] [i_6] [i_0 - 1] = ((((/* implicit */_Bool) (unsigned char)174)) ? (((/* implicit */int) (unsigned char)94)) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)81))))) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) (unsigned char)81)))));
                    }
                }
                for (unsigned char i_11 = 1; i_11 < 22; i_11 += 1) 
                {
                    arr_56 [i_6] [i_7] [i_11] &= ((/* implicit */int) ((min((arr_27 [i_11] [i_11 + 2] [i_11]), (((/* implicit */long long int) (unsigned char)182)))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned char)80), ((unsigned char)198)))) ? (((((/* implicit */int) (unsigned char)94)) | (((/* implicit */int) (unsigned char)40)))) : (((/* implicit */int) (unsigned char)81)))))));
                    arr_57 [i_7] [i_6] [i_7] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) (unsigned char)176)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)175))))) ? (((/* implicit */int) arr_45 [i_0 + 2] [i_0] [i_0] [i_0] [i_0 - 2])) : (((var_12) % (arr_39 [i_11] [(unsigned char)10] [i_6] [i_6] [(unsigned char)10])))))));
                }
            }
        }
        arr_58 [i_0 - 1] [(short)11] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)175)) / (((/* implicit */int) (unsigned char)81))))), (((long long int) (unsigned char)196))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177595
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
    var_14 = ((/* implicit */short) var_8);
    var_15 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_10))))), (min((2571985902U), (((/* implicit */unsigned int) var_2)))))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_12))))) < (var_4))))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) max(((unsigned char)255), (min((((/* implicit */unsigned char) var_13)), ((unsigned char)160)))))) <= (((/* implicit */int) (signed char)-64))));
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */int) var_10)), (((var_7) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) min(((unsigned char)72), (((/* implicit */unsigned char) var_1)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 13; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_1] [(unsigned char)5] [i_0 - 1] = ((/* implicit */short) ((((((/* implicit */int) max(((unsigned char)216), ((unsigned char)12)))) & (((/* implicit */int) max((arr_5 [i_2] [i_3]), (((/* implicit */unsigned short) (short)-2842))))))) - ((~(((((/* implicit */int) arr_2 [i_0 - 2])) % (((/* implicit */int) var_5))))))));
                            arr_10 [(short)6] = ((/* implicit */long long int) (-((-(4294967292U)))));
                            arr_11 [14LL] [i_1] [(_Bool)1] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) min((max((arr_8 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]), (arr_8 [i_3 + 1] [i_3 + 2] [i_3 - 1] [i_3]))), (((/* implicit */long long int) ((int) var_6)))));
                            arr_12 [i_0 - 2] [i_1] [i_1] [i_3] = ((((/* implicit */long long int) max((((/* implicit */int) arr_7 [i_3] [i_2] [i_1 - 2] [i_0])), (((((/* implicit */_Bool) (unsigned short)45831)) ? (arr_4 [i_0 - 3] [i_0 - 3] [i_2]) : (((/* implicit */int) arr_5 [i_0] [i_0]))))))) / (arr_6 [i_3 - 1] [i_3 - 1]));
                        }
                    } 
                } 
                arr_13 [i_0] [12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0 - 3] [i_1 + 1])) + (2147483647))) << (((((((/* implicit */int) arr_1 [i_0 - 3] [i_1 - 2])) + (18466))) - (6)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 3] [i_1 + 2]))) >= (0U)))) : (((/* implicit */int) (signed char)17))));
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 15; i_4 += 3) 
                {
                    for (unsigned char i_5 = 2; i_5 < 14; i_5 += 4) 
                    {
                        {
                            arr_19 [i_1] = ((/* implicit */short) ((arr_4 [(unsigned short)11] [(unsigned short)11] [(unsigned short)11]) == (((/* implicit */int) var_5))));
                            /* LoopSeq 1 */
                            for (short i_6 = 1; i_6 < 15; i_6 += 4) 
                            {
                                arr_23 [i_1] = ((/* implicit */signed char) ((unsigned int) 10898242348315151594ULL));
                                arr_24 [i_5] |= ((/* implicit */short) (((((_Bool)1) ? (arr_17 [i_1 - 2] [i_1 - 2] [i_6 + 1] [i_5 - 2]) : (arr_17 [i_1 - 3] [i_1 + 1] [i_6 - 1] [i_5 + 2]))) * (((arr_17 [i_1 - 3] [i_1] [i_6 - 1] [i_5 + 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                            }
                            arr_25 [i_0] [(short)0] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned int) arr_6 [i_0] [i_0]);
                        }
                    } 
                } 
                arr_26 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 1] [i_0])) % (((/* implicit */int) (short)9075))))) || (((/* implicit */_Bool) min((arr_16 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_18 [i_1] [i_1] [i_1] [i_1])))))))), ((+(((((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_0])) & (((/* implicit */int) arr_21 [i_1 + 2] [i_1 - 3] [8ULL] [i_1 - 3] [i_1]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_7 = 1; i_7 < 13; i_7 += 4) 
                {
                    arr_29 [i_0] [i_1] [(unsigned short)9] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1]))) <= (-2845825149165831704LL)));
                    arr_30 [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
                }
            }
        } 
    } 
}

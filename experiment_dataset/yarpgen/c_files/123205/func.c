/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123205
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
    var_17 = ((/* implicit */unsigned short) ((_Bool) ((((var_3) / (((/* implicit */unsigned long long int) 1974127469U)))) / (((/* implicit */unsigned long long int) max((437775406), (-437775410)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) (signed char)14);
        var_19 &= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -437775406)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_0] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))))))));
        var_20 = ((/* implicit */long long int) (~(2147483648U)));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((max((arr_5 [i_1]), (((/* implicit */unsigned long long int) var_10)))) <= (((/* implicit */unsigned long long int) 4294836224U)))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_4 [i_1] [i_1]))) : ((-(arr_4 [i_1] [i_1]))))) * (min((arr_4 [i_1] [i_1]), (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_4 [i_1] [i_1])))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_3 = 2; i_3 < 21; i_3 += 3) 
            {
                arr_14 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */long long int) (((-(((int) var_14)))) & (((((/* implicit */_Bool) ((unsigned int) (short)1486))) ? (((/* implicit */int) ((437775406) < (((/* implicit */int) arr_12 [(signed char)6] [(signed char)6] [(signed char)6]))))) : (((/* implicit */int) ((arr_4 [i_2] [i_2]) < (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                arr_15 [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) max((var_8), (((signed char) (unsigned short)3)))))));
            }
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                arr_19 [i_1] [i_1] [i_1] [i_1] = (!(((/* implicit */_Bool) min((arr_12 [22LL] [i_2] [i_1]), (arr_12 [4U] [i_2] [i_2])))));
                arr_20 [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) var_8);
            }
            for (int i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (short)32740)))) || (((/* implicit */_Bool) -437775406)))))));
                arr_23 [3ULL] [i_2] [i_5] = ((/* implicit */unsigned int) (+(arr_17 [i_2])));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    var_22 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_7]))));
                    arr_30 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((unsigned short) 437775406));
                }
                for (int i_8 = 4; i_8 < 20; i_8 += 1) 
                {
                    arr_33 [i_1] [i_1] [(unsigned short)10] [(unsigned short)10] [i_8] &= ((/* implicit */long long int) ((unsigned int) arr_12 [i_8 + 3] [(signed char)0] [i_8 + 3]));
                    arr_34 [i_8] [i_6] [i_2] [i_1] = (!(((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_16)))));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        arr_38 [i_1] [i_1] = ((/* implicit */_Bool) var_16);
                        arr_39 [i_9] [(signed char)1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) -1719686453407932003LL)) && (((/* implicit */_Bool) -437775403)))) && (((/* implicit */_Bool) arr_17 [i_8 + 1]))));
                        arr_40 [i_9] [i_8] [i_1] [i_1] [i_1] = arr_12 [i_1] [i_2] [i_6];
                        arr_41 [i_1] [i_1] [i_6] = ((((/* implicit */_Bool) 14653458271568847110ULL)) ? (arr_29 [i_6] [i_6] [i_6] [i_2] [i_1]) : (((/* implicit */long long int) -1542517714)));
                        var_23 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)5))) : (-568968963783385936LL))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        arr_44 [i_1] [i_2] [i_6] [i_8 - 2] [i_2] = ((/* implicit */_Bool) var_16);
                        arr_45 [i_1] [i_10] [i_1] [i_1] [i_1] [i_10] [i_6] = ((/* implicit */unsigned short) var_2);
                    }
                    arr_46 [i_8] [(signed char)20] [(signed char)20] [i_6] [i_1] [i_1] = (short)-15842;
                }
                for (int i_11 = 1; i_11 < 19; i_11 += 2) 
                {
                    arr_49 [i_1] [i_2] = ((unsigned short) (~(((/* implicit */int) var_4))));
                    arr_50 [i_1] [i_6] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((437775406) <= (var_2))))) <= (arr_42 [i_11 + 3] [i_11] [i_11 + 2] [i_11 - 1] [i_11 + 3] [i_11 + 3] [i_11])));
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 1; i_12 < 22; i_12 += 2) /* same iter space */
                    {
                        var_24 -= ((/* implicit */unsigned int) arr_13 [i_6]);
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_5))));
                    }
                    for (unsigned short i_13 = 1; i_13 < 22; i_13 += 2) /* same iter space */
                    {
                        arr_57 [i_13] [i_13] [i_6] [(short)5] [i_13] [i_13] = ((/* implicit */unsigned long long int) arr_18 [i_1] [i_1] [i_1] [i_1]);
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_13] [i_13 - 1] [i_13 - 1])) & (((/* implicit */int) arr_12 [i_11] [i_13 - 1] [i_13 - 1]))));
                    }
                }
                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((long long int) var_5)))));
            }
        }
    }
}

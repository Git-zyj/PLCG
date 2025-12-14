/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158722
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)127)) * (((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((int) ((arr_1 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))));
        var_11 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)17])))))));
        var_12 = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) max(((unsigned char)99), (((/* implicit */unsigned char) arr_2 [i_0]))))) : (((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0]))))));
    }
    var_15 = ((/* implicit */short) var_6);
    /* LoopNest 3 */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        for (unsigned short i_2 = 3; i_2 < 20; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        var_16 |= ((/* implicit */unsigned short) (short)-9348);
                        var_17 = ((/* implicit */short) ((arr_3 [i_1] [i_1]) << (((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1] [i_2]))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_12 [i_4] [i_1] [10ULL] [i_2] [i_3] [i_4])), (arr_8 [i_4] [i_3] [i_1]))))))) - (1)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_5 = 1; i_5 < 21; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) (unsigned char)127);
                            var_19 = ((/* implicit */unsigned long long int) arr_8 [i_2 - 3] [i_5 + 2] [i_5 + 2]);
                            var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [i_5 - 1] [i_5] [i_4] [i_3] [i_2 - 3] [i_1] [i_1]))));
                            var_21 = (~(var_0));
                            var_22 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 2475007140U)))) ? (((((/* implicit */_Bool) (short)9348)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)663)))));
                        }
                        var_23 = ((/* implicit */unsigned char) (-((-(arr_9 [i_1] [i_4])))));
                    }
                    for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        var_24 ^= ((/* implicit */long long int) (~((~(((/* implicit */int) arr_4 [i_2 - 3] [i_2 - 3]))))));
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) var_6))));
                        var_26 += ((/* implicit */unsigned short) arr_10 [i_1] [i_2] [i_3]);
                    }
                    for (unsigned short i_7 = 2; i_7 < 21; i_7 += 1) 
                    {
                        var_27 = ((/* implicit */_Bool) arr_10 [i_1] [i_3] [i_3]);
                        var_28 = (-(min((var_5), (arr_6 [i_7 - 1] [i_7] [i_2 - 1]))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_8 - 1] [11] [11])) ? (arr_9 [i_2 + 1] [i_8 + 2]) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_23 [i_1] [i_3] [i_1])), (var_0))))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_11 [i_8] [i_8] [i_8] [i_8 - 2] [i_8] [i_8 + 2]) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_2 - 3] [i_2 + 1] [i_2 + 2]))))))));
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [(unsigned char)3] [i_2] [i_3] [i_3] [i_1] [i_3])) ? (((/* implicit */int) arr_22 [i_3])) : ((+(((/* implicit */int) arr_20 [i_8 + 1] [i_2] [i_8 + 1] [i_2 + 2] [i_3]))))));
                        var_31 |= ((/* implicit */unsigned int) arr_10 [i_8] [i_8 - 1] [i_2 + 3]);
                        var_32 = ((/* implicit */short) arr_7 [i_2] [i_2 + 1] [i_8 + 1] [i_8]);
                    }
                    /* vectorizable */
                    for (short i_9 = 3; i_9 < 21; i_9 += 4) 
                    {
                        var_33 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_2] [(short)7] [i_2] [(_Bool)1] [i_2 - 1] [i_2])) ? (var_4) : (arr_3 [i_2 + 2] [i_9 + 2])));
                        var_34 = arr_5 [i_9] [i_2 + 2] [i_2];
                    }
                    var_35 = ((/* implicit */signed char) arr_15 [i_1] [i_1] [i_1] [i_1] [i_3]);
                    /* LoopSeq 3 */
                    for (long long int i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        var_36 -= ((/* implicit */unsigned int) arr_11 [i_3] [i_2 - 1] [i_2 + 3] [i_2] [i_2] [i_2]);
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_23 [i_1] [i_1] [i_1])), (17U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_22 [i_1])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_27 [i_2] [7ULL] [i_2 - 1] [i_2] [i_2] [i_2 - 2])), (arr_12 [i_1] [i_1] [i_2 - 3] [i_1] [i_2] [i_2 + 3]))))) : (var_5)));
                        var_38 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_25 [i_2 - 1] [i_2]), (((/* implicit */unsigned short) (_Bool)1)))))) == (((arr_19 [i_2 + 2]) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_2 + 1] [i_1])))))));
                        var_39 = ((/* implicit */signed char) arr_4 [i_2 + 2] [i_2 + 2]);
                    }
                    for (unsigned short i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        var_40 = ((/* implicit */unsigned long long int) (signed char)113);
                        var_41 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1] [(short)15] [(unsigned char)13] [i_11]))))))))) == (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))), (max((arr_11 [i_1] [i_1] [i_1] [i_11] [i_11] [i_11]), (((/* implicit */unsigned long long int) arr_27 [i_1] [i_2 - 1] [i_1] [i_1] [i_1] [i_11])))))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        var_42 = 15732115481139429875ULL;
                        var_43 |= ((/* implicit */signed char) arr_17 [i_1] [i_1] [i_3] [i_1] [i_1] [i_12]);
                        var_44 = ((/* implicit */unsigned short) var_1);
                    }
                }
            } 
        } 
    } 
    var_45 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (short i_13 = 0; i_13 < 10; i_13 += 4) 
    {
        for (short i_14 = 0; i_14 < 10; i_14 += 4) 
        {
            for (unsigned char i_15 = 1; i_15 < 9; i_15 += 2) 
            {
                {
                    var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_13] [i_14] [i_15] [i_15 - 1])) && (((/* implicit */_Bool) arr_31 [i_15] [(unsigned short)0] [i_14] [i_13] [i_13]))));
                    var_47 += ((/* implicit */signed char) (-(arr_36 [i_13] [(short)4])));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139123
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
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)23395)) / (((/* implicit */int) var_11)))), ((~(((/* implicit */int) (unsigned short)42141))))))) && (((/* implicit */_Bool) (+(((/* implicit */int) min((arr_2 [i_3]), (arr_9 [i_0] [i_1] [i_2] [i_1] [i_4])))))))));
                                var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1306904312005731692LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_9 [i_3] [i_1] [i_2] [i_1] [i_2]))))) & (((unsigned long long int) arr_9 [i_0] [(short)3] [i_2] [i_1] [i_4]))));
                                arr_14 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)23389)) ? (((/* implicit */int) (unsigned short)23394)) : (((/* implicit */int) (unsigned short)42147))));
                                var_18 = ((/* implicit */unsigned char) 928500184);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) var_13);
                }
                for (short i_5 = 2; i_5 < 8; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_7])) > (((/* implicit */int) (short)8097))));
                                arr_22 [i_0] [(unsigned char)7] [0U] [i_1] [i_7] [i_7] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_1] [6ULL] [i_6] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23377))) : (9223372036854775787LL)))));
                            }
                        } 
                    } 
                    arr_23 [9ULL] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -9223372036854775788LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [9LL]))))) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned char)1] [(unsigned char)1]))) == (16U)))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_5])) % (((/* implicit */int) arr_19 [i_0]))))) + ((~(18401356590229637676ULL)))))));
                    arr_24 [i_0] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)182))))) ? ((-9223372036854775807LL - 1LL)) : ((~(var_9))))));
                }
                /* vectorizable */
                for (unsigned char i_8 = 1; i_8 < 7; i_8 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_9 = 4; i_9 < 7; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            {
                                var_21 = ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)26))))) | (var_9));
                                var_22 *= ((/* implicit */unsigned char) (unsigned short)448);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) arr_5 [8U] [(unsigned char)9]);
                    arr_32 [i_1] [i_1] [i_8] = ((/* implicit */unsigned short) (+(arr_13 [i_0] [i_1] [0ULL] [i_1] [i_1] [i_8 + 2])));
                }
                arr_33 [i_0] [i_1] = ((/* implicit */unsigned char) ((((long long int) arr_0 [i_1])) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [1])) && (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_0]))))))));
                var_24 = ((/* implicit */unsigned char) var_12);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) 
    {
        for (long long int i_12 = 0; i_12 < 13; i_12 += 4) 
        {
            for (unsigned char i_13 = 0; i_13 < 13; i_13 += 3) 
            {
                {
                    var_25 = arr_41 [i_11] [i_11];
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        for (unsigned int i_15 = 2; i_15 < 10; i_15 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */long long int) var_11)), (arr_35 [7LL]))) : (max((((/* implicit */long long int) var_7)), (var_3)))))) ? (((/* implicit */int) arr_38 [i_15 + 3] [i_12])) : ((+(((((/* implicit */int) (unsigned short)42148)) + (((/* implicit */int) arr_41 [i_12] [i_12]))))))));
                                arr_47 [i_11] [i_12] [i_13] [10] [i_15] = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) 4294967295U)), (9223372036854775784LL))) != (arr_40 [i_12] [i_12] [i_15])));
                                var_27 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23382))) : ((~(var_3)))))));
                            }
                        } 
                    } 
                    var_28 = ((6210075496891821117LL) - (4317470025284708401LL));
                    arr_48 [i_11] [i_11] [i_13] [i_13] = ((unsigned char) ((((/* implicit */_Bool) 3201825347U)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -6210075496891821117LL)))))) : (9223372036854775790LL)));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)1693))) : (-2646751943650234774LL)))) ? (((/* implicit */int) ((0LL) != ((-(var_2)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 123990306157800261LL)) ? (((/* implicit */int) (unsigned short)42156)) : (1752229567)))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) var_7))))));
}

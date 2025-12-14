/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138552
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1 - 2] = ((/* implicit */_Bool) (~((+((-(((/* implicit */int) arr_0 [i_0] [i_0]))))))));
                var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_2 [0LL]), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)110)) - (99))))))))) ? (((long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 2] [i_0 - 1]))))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0 - 1] [i_1] [i_2] [i_3 - 1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_9 [i_0])) * (((/* implicit */int) arr_9 [i_0])))) & (((/* implicit */int) ((unsigned char) var_3)))));
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((int) var_6)))));
                                arr_16 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_1] [i_2] [i_1]))) : (((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))));
                                var_16 = ((/* implicit */long long int) max((var_16), (arr_11 [i_4 + 2])));
                            }
                        } 
                    } 
                    arr_17 [i_0 + 2] [i_2] |= ((/* implicit */unsigned int) arr_12 [i_0] [i_1 + 1] [i_2] [i_1] [i_0 - 1] [i_1 - 1] [5]);
                    var_17 |= ((/* implicit */short) ((max((((/* implicit */unsigned long long int) arr_1 [i_1 - 3])), (var_6))) != (var_6)));
                }
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    var_18 = ((/* implicit */short) (((+(arr_3 [i_0 + 1] [i_0]))) / (((((/* implicit */_Bool) 3016626018U)) ? (1462880566280159705ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65527)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        for (signed char i_7 = 3; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) ((short) arr_20 [i_7 - 2] [i_5] [i_5] [(signed char)10])))));
                                arr_26 [i_0] [i_6] [i_0 + 2] [i_5] [i_1] [i_0 + 2] [i_0] = ((/* implicit */signed char) arr_9 [i_0]);
                                arr_27 [i_0] = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0 + 1] [(unsigned char)6] [i_0] [i_0 + 2]))) * (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_3 [i_1 - 3] [i_0])))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_8 = 2; i_8 < 9; i_8 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned long long int) (!((!(((_Bool) var_9))))));
                    arr_31 [i_0] [2ULL] [i_0] &= ((/* implicit */long long int) (!(arr_9 [(unsigned char)12])));
                }
                for (unsigned long long int i_9 = 2; i_9 < 9; i_9 += 1) /* same iter space */
                {
                    arr_34 [i_0] [(_Bool)1] [i_9] [i_0] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) (unsigned short)65527)) ? (-4849027815169740982LL) : (arr_2 [i_0]))));
                    arr_35 [i_9 + 3] [i_9 + 3] [(_Bool)0] [(unsigned char)0] |= ((/* implicit */short) ((min((min((arr_29 [i_0] [(signed char)8]), (((/* implicit */unsigned long long int) arr_21 [(_Bool)1] [(signed char)10])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_9 [10LL])) : (((/* implicit */int) arr_9 [10U]))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [12LL] [i_1] [8ULL] [i_9 + 4] [i_9] [12LL])))));
                }
                var_21 = ((/* implicit */unsigned int) ((long long int) (+(arr_8 [i_1 + 3] [i_1 - 3]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_10 = 0; i_10 < 15; i_10 += 1) 
    {
        arr_40 [i_10] [(short)0] = ((/* implicit */unsigned short) arr_39 [i_10]);
        arr_41 [i_10] = ((_Bool) ((_Bool) (!(((/* implicit */_Bool) var_9)))));
    }
}

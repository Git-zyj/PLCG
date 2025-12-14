/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132878
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (var_3)));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 1])) - (((/* implicit */int) arr_1 [i_0 - 1]))))));
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0 - 2])))))));
    }
    for (short i_1 = 2; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned short) arr_2 [i_1])), ((unsigned short)22129))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_1]), (min((((/* implicit */unsigned short) var_6)), (arr_0 [i_1]))))))) : (943679602U)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 9; i_5 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) 1839625276);
                                var_14 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_17 [i_3] [i_3] [i_3] [i_3] [i_3]) <= (var_3))))) > (arr_17 [i_1 + 1] [11LL] [(unsigned char)0] [i_5 + 1] [i_5 - 1]))));
                                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (+(max((((/* implicit */int) arr_14 [i_5] [i_4] [i_3] [i_1])), (2097151))))))));
                            }
                        } 
                    } 
                    arr_18 [(signed char)9] [9U] [i_1] |= ((/* implicit */unsigned short) arr_14 [(_Bool)1] [9U] [i_3] [i_1]);
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        arr_21 [i_2] [i_6] [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) (-((+(((/* implicit */int) arr_16 [i_6] [i_3] [(signed char)10])))))));
                        var_16 = ((/* implicit */signed char) (~(15967756576418683788ULL)));
                    }
                    for (unsigned short i_7 = 1; i_7 < 11; i_7 += 2) 
                    {
                        arr_26 [i_1 - 1] [i_1] [i_3] [(signed char)2] [1ULL] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_1] [i_3] [i_1] [i_7])) ? (((/* implicit */unsigned long long int) -1159673041)) : (arr_13 [i_7] [i_3] [2LL] [(short)8] [i_2] [i_1]))) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_3]))))))))) < ((((-(548016117U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_17 [i_2] [i_2] [10] [7ULL] [i_2]))))))));
                        arr_27 [i_7] [i_7 + 1] [i_1 + 1] [i_2] [i_1 + 1] [i_1 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_17 [i_7] [i_2] [i_2] [i_1] [i_1]), (((/* implicit */unsigned int) arr_1 [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_10 [i_1] [i_1] [i_1]))))) : (max((-7513917180385606658LL), (((/* implicit */long long int) arr_1 [i_3]))))))) ? (arr_17 [i_1 - 2] [i_1] [7ULL] [(signed char)2] [i_1]) : (((/* implicit */unsigned int) ((int) (!(arr_9 [i_1] [i_3])))))));
                        var_17 |= ((/* implicit */long long int) ((short) ((unsigned short) max((2478987497290867828ULL), (((/* implicit */unsigned long long int) var_4))))));
                        arr_28 [i_1 - 1] [i_1 - 1] [i_2] [i_1 - 1] [i_7] [i_1 - 1] |= ((/* implicit */signed char) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)177)));
                        var_18 -= ((/* implicit */unsigned short) (-((~(((((-256) + (2147483647))) >> (((/* implicit */int) arr_9 [i_3] [i_1]))))))));
                    }
                    arr_29 [i_3] = ((/* implicit */long long int) min((max((arr_17 [i_1 - 1] [i_1 + 1] [i_1] [5U] [i_1]), (arr_17 [i_1 - 1] [i_1 + 1] [i_1] [i_1] [i_1]))), (min((arr_17 [i_1 - 1] [i_1 + 1] [i_1] [1] [i_1]), (arr_17 [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 2] [i_1 - 2])))));
                }
            } 
        } 
    }
    for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
    {
        var_19 = ((/* implicit */_Bool) arr_31 [i_8] [i_8]);
        var_20 = ((/* implicit */long long int) arr_30 [i_8]);
        var_21 = ((/* implicit */short) (~(((/* implicit */int) arr_30 [i_8]))));
        var_22 = ((/* implicit */long long int) max((var_22), ((-(min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) var_1))))), (-8089882351381514516LL)))))));
    }
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_3))));
    var_24 = ((/* implicit */unsigned char) var_5);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148532
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) var_4))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_13 = ((/* implicit */_Bool) (unsigned char)46);
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((int) arr_7 [i_4] [i_0]))) ? (max((((/* implicit */unsigned long long int) arr_11 [(signed char)10])), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_3])))))));
                                arr_12 [(unsigned char)2] [i_1 + 3] [i_1] [i_3] [(unsigned char)2] [i_4] = ((/* implicit */int) 16690058528575781239ULL);
                                var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((min((var_7), (((/* implicit */unsigned long long int) var_2)))) >= (((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_0] [i_0]) >> (((((/* implicit */int) arr_6 [i_0] [i_2] [i_3] [i_4])) - (4925))))))))), ((~(((((/* implicit */_Bool) var_4)) ? (4167040439U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) (+(((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_1] [i_2] [i_2 + 1]))));
                    var_17 &= ((((/* implicit */_Bool) var_1)) ? (((arr_9 [i_0] [i_1 + 2] [i_0] [i_2] [i_2]) ? (((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)125)) + (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0]))))), (((((/* implicit */int) (signed char)124)) >> (((((/* implicit */int) var_6)) - (15885)))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            for (signed char i_6 = 1; i_6 < 22; i_6 += 2) 
            {
                for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    {
                        arr_21 [i_6] [i_5] [i_5] [i_7] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)124))))), (((((/* implicit */_Bool) arr_17 [(signed char)18] [i_6 - 1] [i_6] [(signed char)18])) ? (arr_17 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1]) : (arr_17 [i_6 - 1] [i_6 - 1] [i_6] [i_6])))));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_14 [i_0] [i_6 + 1] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((min((var_1), (((/* implicit */long long int) (signed char)-98)))) <= (((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)120))) : (-1LL))))))) : ((~(3125824845U))))))));
                        var_19 = ((/* implicit */long long int) ((int) (+(4109293926U))));
                        arr_22 [i_0] [i_0] [i_0] [i_5] [(unsigned short)21] [i_0] = ((/* implicit */long long int) arr_7 [i_6 - 1] [7U]);
                        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)254)) ? (-8219092771342834538LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65522)))));
                    }
                } 
            } 
        } 
        arr_23 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    for (int i_8 = 0; i_8 < 16; i_8 += 1) 
    {
        arr_27 [i_8] = (((~(((/* implicit */int) var_8)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_8] [i_8]))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) arr_26 [(unsigned short)8])) - (202)))))) ? ((-(((/* implicit */int) min((var_3), (((/* implicit */short) (signed char)-9))))))) : ((~(((/* implicit */int) arr_6 [i_8] [(unsigned short)17] [i_8] [i_8]))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) 
    {
        for (long long int i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 10; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        for (long long int i_13 = 0; i_13 < 10; i_13 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((_Bool) arr_6 [i_12] [i_11] [i_10] [i_9]));
                                arr_46 [i_9] [i_10] [i_9] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15952)) ? (((/* implicit */int) arr_26 [i_12])) : (((/* implicit */int) var_0)))))));
                                arr_47 [i_9] [i_10] [i_11] [i_12] [i_13] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_25 [i_11] [i_12])) ? (((/* implicit */int) arr_25 [(signed char)8] [(signed char)8])) : (((/* implicit */int) arr_25 [i_9] [i_10])))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        arr_51 [i_11] [i_11] [9LL] [i_14] [i_10] = ((/* implicit */unsigned short) var_3);
                        var_23 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59247))) == (1627280711U));
                        var_24 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_41 [0] [i_10] [i_11] [i_11]))));
                        arr_52 [i_10] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)27857)) ? (arr_48 [i_9] [i_10] [i_11] [i_10]) : (((/* implicit */int) var_9)))) + (((/* implicit */int) var_9))));
                        var_25 ^= ((/* implicit */unsigned int) var_5);
                    }
                    /* LoopSeq 1 */
                    for (short i_15 = 0; i_15 < 10; i_15 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2442914869U))))), (var_4)));
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_15] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_30 [i_9] [i_9])))) ? (((((/* implicit */_Bool) arr_30 [i_9] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_9] [i_9] [(unsigned char)6] [i_10]))) : (arr_30 [i_9] [i_10]))) : (1203266263U)));
                    }
                }
            } 
        } 
    } 
    var_28 = var_1;
}

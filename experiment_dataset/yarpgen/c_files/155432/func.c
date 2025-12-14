/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155432
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) ((_Bool) (unsigned short)51874));
        var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)145)) || (((/* implicit */_Bool) 8386560U))));
        var_17 = ((/* implicit */unsigned short) ((arr_1 [i_0]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1])));
        var_18 &= ((/* implicit */unsigned long long int) ((unsigned short) var_5));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                var_19 *= ((/* implicit */unsigned char) var_12);
                arr_12 [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_1] [(_Bool)1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 8386572U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61308))) : (var_8)))))))));
            }
            var_20 = ((/* implicit */unsigned short) 8386583U);
            var_21 = ((/* implicit */unsigned int) min((((/* implicit */int) var_0)), (max((var_10), (((/* implicit */int) arr_9 [i_2 - 1] [i_2] [i_2]))))));
            var_22 *= ((/* implicit */unsigned short) (((~(4286580735U))) > (((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_2 + 2] [i_2 + 2])))))));
        }
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_5 = 1; i_5 < 21; i_5 += 4) 
            {
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-9)), (arr_11 [i_1] [(signed char)10])))), (((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (-1153945832)))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) 4286580739U)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (unsigned char)102)))))))))));
                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_4))));
                var_25 = ((/* implicit */signed char) (-((+(arr_14 [i_5 + 1] [i_4] [i_1])))));
            }
            /* LoopSeq 2 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                var_26 = ((/* implicit */unsigned short) arr_9 [i_6] [i_6] [i_6]);
                var_27 = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) arr_4 [i_6 - 1])), (var_6))), (((/* implicit */long long int) ((unsigned short) arr_9 [i_6] [i_6 - 1] [i_6 - 1])))));
                var_28 ^= ((/* implicit */signed char) arr_11 [i_1] [i_1]);
                var_29 = ((/* implicit */unsigned char) arr_3 [i_1]);
                var_30 = ((/* implicit */_Bool) var_7);
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_25 [i_7] [i_7] [i_7] [i_1] = ((/* implicit */int) ((signed char) max((((/* implicit */unsigned int) var_2)), (max((var_11), (((/* implicit */unsigned int) arr_24 [i_7] [8LL] [i_1])))))));
                var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (_Bool)1))));
                var_32 = arr_3 [i_1];
                var_33 = ((/* implicit */int) arr_16 [(_Bool)1] [i_7]);
                var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_4] [i_4] [i_1] [i_7]))) : (min((((/* implicit */unsigned int) (_Bool)1)), (arr_6 [i_1] [i_4] [i_7]))))))));
            }
            var_35 = ((/* implicit */signed char) min(((+(((/* implicit */int) arr_2 [i_1])))), (max((((/* implicit */int) arr_23 [i_4] [i_4] [i_1] [i_1])), (1153945831)))));
        }
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        var_36 = ((/* implicit */int) max((var_36), ((~(((/* implicit */int) ((unsigned short) arr_5 [i_9] [i_10])))))));
                        var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)54043))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        var_38 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32401))) & (var_1)));
                        var_39 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_9] [i_9])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))));
                        var_40 |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_9] [i_8] [i_1] [i_1]))));
                        /* LoopSeq 1 */
                        for (signed char i_12 = 4; i_12 < 22; i_12 += 4) 
                        {
                            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_8])))));
                            var_42 = ((/* implicit */unsigned int) -1153945832);
                            var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_5 [i_1] [i_1]) ? (348973959U) : (((/* implicit */unsigned int) arr_22 [i_11] [i_8]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -1557877908214785309LL)))) : (8386603U))))));
                        }
                        var_44 = ((/* implicit */int) ((arr_14 [i_1] [i_8] [i_9]) << (((var_8) - (3142619051U)))));
                    }
                    for (long long int i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_14 [i_8] [i_8] [i_13])))) ? (arr_14 [i_1] [7U] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_46 = ((/* implicit */unsigned int) min((((int) max((((/* implicit */long long int) arr_35 [i_1] [i_8] [i_9] [i_13])), (var_1)))), ((~(((/* implicit */int) arr_18 [i_13] [i_8] [i_1] [i_13]))))));
                    }
                    var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_39 [i_9] [i_9] [i_9] [i_8] [i_8] [(unsigned short)8] [i_1]))));
                }
            } 
        } 
        var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) arr_35 [i_1] [i_1] [i_1] [i_1]))));
    }
    for (signed char i_14 = 4; i_14 < 21; i_14 += 4) 
    {
        /* LoopNest 2 */
        for (int i_15 = 3; i_15 < 19; i_15 += 4) 
        {
            for (unsigned char i_16 = 0; i_16 < 23; i_16 += 4) 
            {
                {
                    var_49 -= ((/* implicit */signed char) var_5);
                    arr_52 [i_15] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_12)), (arr_49 [i_15] [i_15]))))))));
                }
            } 
        } 
        var_50 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max(((~(((/* implicit */int) arr_42 [i_14] [(_Bool)1] [i_14] [i_14])))), ((+(((/* implicit */int) (short)-9242))))))), (min((arr_47 [i_14 - 2] [i_14] [i_14]), (((/* implicit */long long int) arr_43 [i_14] [i_14 - 1]))))));
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_51 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) (signed char)18)) ? (741193056064719049ULL) : (((/* implicit */unsigned long long int) 4286580735U)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */unsigned short) arr_39 [i_17] [(_Bool)1] [i_17] [i_17] [i_17] [(_Bool)1] [i_17])), (arr_17 [12LL] [i_17] [i_17] [i_17])))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_30 [i_17] [i_17] [i_17]))))))));
        var_52 = ((/* implicit */unsigned long long int) max((var_52), (((/* implicit */unsigned long long int) min((min((arr_19 [i_17] [(unsigned char)14] [i_17] [i_17]), (((/* implicit */unsigned short) arr_5 [i_17] [i_17])))), (((/* implicit */unsigned short) var_0)))))));
    }
    var_53 &= ((/* implicit */_Bool) min((((/* implicit */int) var_3)), (var_14)));
}

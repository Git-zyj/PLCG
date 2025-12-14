/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134087
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((var_15) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2552575708U)) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0])) : (((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) 1480766177U)) ? (((/* implicit */long long int) var_11)) : (4611686018427387392LL)))));
        var_20 ^= ((/* implicit */_Bool) (~((+(-8314185717754758726LL)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1997184098505814379LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))));
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-78))))) && ((!(((/* implicit */_Bool) (signed char)112)))))))) == (min((arr_4 [i_1] [i_1]), (((/* implicit */unsigned long long int) 8314185717754758726LL))))));
        var_21 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_4)), (max((arr_4 [i_1] [(signed char)1]), (((arr_4 [i_1] [i_1]) | (((/* implicit */unsigned long long int) var_11))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_13))));
        var_23 = ((/* implicit */unsigned char) ((3069270265066278750ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 4 */
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            arr_12 [i_3] [14U] = ((/* implicit */signed char) max((((((((/* implicit */unsigned int) var_7)) != (var_10))) ? ((-(arr_9 [i_2] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -8314185717754758727LL)))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_9 [i_3] [i_2])))))))));
            arr_13 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) var_18)))))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) <= (min((((/* implicit */int) (_Bool)1)), (var_13)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)17700)), (2059727430U)))) ? (969434465) : (((/* implicit */int) (unsigned char)210))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_20 [i_4] [i_4] [i_4] [i_4] [i_6] [i_6] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_9 [i_5 - 1] [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))), (((min((arr_19 [i_2] [i_2] [i_4] [i_4] [i_5] [i_6]), (15377473808643272865ULL))) >> (((max((arr_19 [i_4] [i_4] [i_4] [i_4] [i_2] [i_2]), (((/* implicit */unsigned long long int) var_8)))) - (18446744073709551473ULL)))))));
                        var_24 ^= ((/* implicit */int) max((((/* implicit */long long int) var_11)), (max((((/* implicit */long long int) arr_10 [i_2] [i_2])), (var_5)))));
                        var_25 ^= ((/* implicit */signed char) 4148720204U);
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((var_14) ? (((/* implicit */long long int) (+(max((((/* implicit */unsigned int) var_14)), (146247065U)))))) : (var_5))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((unsigned int) arr_19 [(short)1] [i_5 - 1] [i_5 - 1] [i_6] [i_5 - 1] [i_2]));
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */int) arr_14 [i_5])) - (((/* implicit */int) arr_21 [i_2] [14LL] [i_5 - 1] [i_6] [i_7])))))));
                            arr_25 [i_2] [i_4] [i_2] [i_4] [i_2] = arr_15 [i_4] [i_4];
                        }
                        for (short i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            var_29 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) var_7))))) ? (var_6) : (((/* implicit */int) arr_21 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_6])))), (((/* implicit */int) ((15377473808643272866ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_5] [i_8] [i_5] [i_5 - 1] [i_6]))))))));
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 3069270265066278750ULL)) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))) : (min((var_2), (((/* implicit */long long int) 409648639U)))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (!(arr_10 [i_5] [i_5])))), (0U)))))))));
                            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(arr_23 [i_5 - 1])))) <= (((((/* implicit */_Bool) 3U)) ? (arr_27 [(_Bool)1] [i_4] [i_4] [i_5 - 1] [i_5] [10U] [i_8]) : (((/* implicit */unsigned long long int) arr_23 [i_5 - 1])))))))));
                        }
                        for (long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            var_32 = ((/* implicit */short) arr_17 [i_4] [i_4] [i_6] [i_4]);
                            arr_30 [i_2] [(_Bool)1] [i_4] [i_2] [(_Bool)1] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)32806)) : (((/* implicit */int) (unsigned char)157))))) ? (arr_9 [i_5 - 1] [i_9]) : (max((arr_9 [i_4] [i_4]), (arr_9 [i_2] [i_4])))));
                            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_17 [i_5] [(unsigned char)2] [(unsigned char)2] [i_4])) || ((!(((/* implicit */_Bool) var_6)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_28 [i_2] [i_4] [i_5] [i_6] [i_5]))))) : (((arr_19 [i_2] [i_4] [i_5 - 1] [i_9] [i_5 - 1] [i_5 - 1]) / (var_9))))))));
                            var_34 ^= ((/* implicit */unsigned int) arr_8 [i_2]);
                            arr_31 [i_2] [0] [i_5] [i_4] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)32728), (((/* implicit */unsigned short) max((var_1), (((/* implicit */signed char) var_3)))))))) ? (((((arr_10 [i_2] [i_4]) ? (((/* implicit */int) arr_24 [(unsigned char)17] [i_4] [i_6] [i_6] [5])) : (((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */int) arr_10 [i_6] [i_4])) - (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))))) : (arr_16 [i_4])));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                for (unsigned int i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    {
                        var_35 ^= ((/* implicit */unsigned int) min((var_2), (((((/* implicit */_Bool) (signed char)102)) ? (-2735612236528325451LL) : (((/* implicit */long long int) arr_37 [i_2] [i_11]))))));
                        arr_39 [i_4] [i_2] [i_4] [i_4] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((unsigned int) -1890539425)))))));
                    }
                } 
            } 
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (+(max((8788124568886357264ULL), (arr_27 [i_2] [i_12] [i_12] [i_12] [i_2] [i_2] [(unsigned char)6]))))))));
            var_37 ^= ((/* implicit */_Bool) min(((+((-(((/* implicit */int) arr_10 [i_12] [i_12])))))), (((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_12))))))));
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                {
                    {
                        var_38 ^= ((/* implicit */long long int) (((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_44 [i_14] [i_13] [i_2])))))) ^ ((~((-(((/* implicit */int) var_17))))))));
                        arr_49 [i_14] [i_14] [17ULL] [i_14] = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)30720))))), (max((arr_43 [i_2] [i_2] [i_13] [i_13]), (((/* implicit */unsigned int) arr_33 [i_14] [(short)3] [i_13] [i_14]))))))));
                        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) (((-(var_11))) <= (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_27 [i_2] [i_12] [i_2] [(_Bool)1] [i_2] [14U] [(_Bool)1])) ? (var_13) : (7))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_2] [i_2] [i_12] [i_2] [(unsigned char)4] [i_14] [6])))))))))))));
                    }
                } 
            } 
            var_40 ^= ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)86)) ? (8314185717754758754LL) : (((/* implicit */long long int) ((4294967289U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)25)))))))) * (((/* implicit */long long int) max((((((/* implicit */int) var_3)) + (((/* implicit */int) arr_41 [i_2] [i_12] [i_12])))), (((/* implicit */int) arr_33 [2ULL] [i_12] [i_12] [i_12])))))));
        }
        for (unsigned int i_15 = 0; i_15 < 18; i_15 += 4) 
        {
            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)26106)) || (((/* implicit */_Bool) 4294967295U))));
            /* LoopNest 2 */
            for (short i_16 = 0; i_16 < 18; i_16 += 4) 
            {
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    {
                        var_42 ^= ((/* implicit */int) 4567756U);
                        arr_59 [i_2] [i_2] [i_16] [i_17 - 1] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_3))))));
                        arr_60 [(_Bool)1] [i_2] [i_2] = ((/* implicit */_Bool) ((min((0ULL), (((/* implicit */unsigned long long int) (signed char)0)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_51 [i_17 - 1] [i_15] [i_16]), (arr_51 [i_17 - 1] [i_17 - 1] [i_17 - 1])))))));
                    }
                } 
            } 
            var_43 ^= ((/* implicit */_Bool) (-((-(((unsigned int) var_1))))));
            var_44 ^= ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (short)-29927))) | (1671263410203711355LL))) <= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((553759056U), (((/* implicit */unsigned int) var_12)))))))));
        }
        var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)30728)) ? (var_7) : (((/* implicit */int) var_14)))), (((((/* implicit */_Bool) 25657627)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)29498))))))), (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_54 [i_2] [i_2] [i_2])) : (arr_45 [(signed char)2] [i_2] [i_2] [i_2] [(signed char)2] [i_2]))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))))))))));
    }
    var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((200320996U), (((/* implicit */unsigned int) max((var_6), (((/* implicit */int) var_15)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (max((((/* implicit */unsigned long long int) (-(var_7)))), ((-(var_9)))))));
    var_47 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_6) >= (((/* implicit */int) var_4)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (max((((/* implicit */long long int) ((unsigned int) var_7))), (((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_2)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 1) 
    {
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            for (int i_20 = 0; i_20 < 15; i_20 += 4) 
            {
                {
                    var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_63 [i_20]), (arr_63 [i_18])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-30717))) : (0U)))))))));
                    var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) (((_Bool)1) ? (7796619693744100522ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 3)))))))));
                }
            } 
        } 
    } 
    var_50 ^= ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_19))))) > (max((((/* implicit */unsigned long long int) 8314185717754758728LL)), (min((((/* implicit */unsigned long long int) var_4)), (var_9))))));
}

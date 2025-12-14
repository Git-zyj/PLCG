/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151991
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
    var_10 = ((/* implicit */short) max((((/* implicit */long long int) ((_Bool) (_Bool)1))), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (((var_7) + (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
    var_12 = ((/* implicit */signed char) max((var_4), (((/* implicit */long long int) var_6))));
    var_13 += ((/* implicit */signed char) (((((-(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_1)))))) + (2147483647))) >> (((var_4) - (6540928728649594577LL)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_9 [i_2] [11LL] [11LL] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)92)))))));
                        var_14 += ((/* implicit */signed char) arr_3 [i_2 + 1] [0LL] [0LL]);
                    }
                    var_15 += ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_5 [i_0] [i_0]), (((/* implicit */short) var_3)))))));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 1; i_4 < 21; i_4 += 2) 
                    {
                        arr_12 [i_2] [i_2] = ((((/* implicit */_Bool) ((arr_11 [i_2] [i_1] [(_Bool)1]) ^ (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (arr_4 [i_0] [(signed char)0] [i_2] [(_Bool)1]) : (var_7));
                        arr_13 [i_2] [i_1] [i_1] [i_2] [i_1] = (((!(((/* implicit */_Bool) ((var_9) << (((/* implicit */int) var_5))))))) ? (((long long int) ((unsigned char) var_2))) : (((/* implicit */long long int) ((/* implicit */int) var_1))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_11 [i_2] [i_1] [i_4 + 1]), (arr_11 [i_2] [i_1] [i_4 + 1])))) ? (((arr_11 [i_2] [i_2] [i_4 + 1]) / (arr_11 [i_2] [i_2] [i_4 + 1]))) : (arr_11 [i_2] [i_4] [i_4 + 1])));
                        var_17 += ((/* implicit */long long int) (_Bool)1);
                        var_18 = ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2] [i_4])) ? (var_4) : (arr_1 [i_0] [i_1])))) ? (arr_11 [i_2] [i_1 - 2] [i_2 + 3]) : (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1 - 2] [i_2])) - (((/* implicit */int) (signed char)-85))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_21 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)80)) ^ (((/* implicit */int) (signed char)84))));
                                arr_22 [i_0] [i_0] [i_1] [(_Bool)0] [i_2] [i_5] [(_Bool)0] &= ((/* implicit */unsigned long long int) arr_2 [i_1] [14LL] [17ULL]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)69)) + (((/* implicit */int) (unsigned char)92))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)84))) : (((unsigned long long int) 3924650427245996074ULL))));
                                var_20 = ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0 - 1] [i_0 - 1] [i_2] [i_1 + 1] [0LL]))) + (arr_6 [i_0 - 3] [i_2] [i_2 + 3] [i_1 + 1] [i_8])));
                                var_21 = ((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1 - 1] [i_0 - 2]);
                                var_22 ^= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)86))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_27 [i_0 - 3] [i_0] = ((/* implicit */unsigned long long int) ((signed char) (+(((/* implicit */int) var_5)))));
        var_23 = ((/* implicit */long long int) 5630393264931917722ULL);
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 1) 
            {
                {
                    arr_34 [i_10] [i_9] [17LL] [i_0 + 1] = ((/* implicit */signed char) max((((/* implicit */long long int) ((signed char) 14522093646463555533ULL))), (((long long int) arr_33 [i_0 + 1] [i_0 + 1] [i_0 + 1] [(signed char)12]))));
                    var_24 += ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_16 [i_0] [i_0 - 2] [10LL] [i_10])) ? (((/* implicit */int) arr_16 [i_0] [i_0 - 3] [(_Bool)0] [i_10])) : (((/* implicit */int) arr_16 [(unsigned char)12] [i_0 - 1] [6ULL] [0LL])))));
                }
            } 
        } 
    }
    for (signed char i_11 = 3; i_11 < 22; i_11 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (signed char i_13 = 3; i_13 < 22; i_13 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_14 = 3; i_14 < 20; i_14 += 1) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 23; i_15 += 2) 
                        {
                            {
                                arr_46 [i_11] [i_12] [i_13] [i_12] [i_11] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) min((var_4), (var_4)))) || (((/* implicit */_Bool) min((((/* implicit */long long int) arr_19 [(signed char)5] [i_14] [i_13] [i_14] [i_15] [(unsigned char)8] [i_15])), (arr_3 [i_15] [(_Bool)1] [i_12])))))))));
                                arr_47 [i_11 - 3] [i_11] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_29 [i_11]))))), (max((3924650427245996076ULL), (((/* implicit */unsigned long long int) var_1))))));
                                var_25 = ((/* implicit */long long int) ((signed char) (signed char)83));
                            }
                        } 
                    } 
                    var_26 += ((/* implicit */_Bool) ((signed char) (~(arr_25 [i_11] [(_Bool)1] [i_11] [10ULL]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 3) 
                    {
                        arr_51 [i_11] [i_11] [i_13] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (_Bool)1))) ^ ((~(((/* implicit */int) arr_19 [i_11] [i_11] [i_11] [i_16] [i_13] [(unsigned char)15] [i_11]))))));
                        var_27 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1))))))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_44 [i_17] [i_13])) || (((/* implicit */_Bool) (unsigned char)80)))))) ? (((((/* implicit */int) arr_35 [i_13 - 2])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_11] [i_11] [(signed char)10] [i_17] [i_13 + 1]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) var_3))))) && (((/* implicit */_Bool) var_6))))))))));
                        var_29 = ((/* implicit */long long int) max((((var_5) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) ((_Bool) (_Bool)1))))), ((-(((/* implicit */int) arr_48 [i_11 - 2] [i_11] [i_11 - 1] [i_11]))))));
                        arr_55 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_11] [i_12] [i_13 - 1] [(signed char)1])) + (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (1126824325408534904LL))))));
                    }
                    var_30 &= ((/* implicit */unsigned char) arr_29 [(signed char)16]);
                }
            } 
        } 
        arr_56 [i_11] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_2 [i_11 - 1] [9ULL] [(_Bool)1])), (((((/* implicit */_Bool) arr_14 [i_11] [i_11 + 1] [i_11] [i_11 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)95))) : (arr_29 [i_11])))));
        /* LoopNest 2 */
        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
        {
            for (unsigned long long int i_19 = 0; i_19 < 23; i_19 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 2; i_20 < 21; i_20 += 4) 
                    {
                        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                        {
                            {
                                arr_68 [i_11] [i_19] [i_20] [i_20] [i_21 - 1] [i_21 - 1] [i_18] &= ((/* implicit */long long int) (-(((/* implicit */int) arr_35 [i_18 + 1]))));
                                var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) max((((((/* implicit */int) arr_42 [i_11] [i_18 + 1] [i_18] [i_20 + 2])) - (((/* implicit */int) arr_42 [i_11] [i_18 + 1] [i_19] [i_20 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_18 + 1] [i_18 + 1] [i_20] [i_20 - 2]))))))))));
                                arr_69 [i_21 - 1] [i_20] [i_11] [i_11] [i_18] [i_11] = ((/* implicit */unsigned char) ((signed char) ((arr_7 [i_11 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_11 + 1]))) : (arr_63 [7ULL] [i_21 - 1] [i_11] [i_11] [i_11 - 2] [i_11 - 2]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_22 = 0; i_22 < 23; i_22 += 2) 
                    {
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */signed char) max((arr_75 [i_11] [i_18] [i_11] [(short)6] [(short)6]), (((/* implicit */long long int) min(((((_Bool)1) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_43 [i_11] [i_18 + 1] [i_11 - 1] [i_22] [i_11 - 1])))))));
                                var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) var_1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_24 = 1; i_24 < 19; i_24 += 2) 
                    {
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            {
                                arr_80 [i_11] [i_11] [i_18] [i_19] [i_11] [i_25] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((unsigned char) (signed char)-96))) || (((/* implicit */_Bool) max((0ULL), (var_9)))))), (((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)85)))) < ((-(((/* implicit */int) (signed char)84))))))));
                                arr_81 [i_11] [i_11] [i_11] [i_11] [i_24] [i_25] = ((/* implicit */signed char) arr_5 [i_24] [i_24]);
                                var_34 = ((/* implicit */unsigned char) 14522093646463555541ULL);
                                arr_82 [i_11] [i_11] [i_19] [i_11] [(_Bool)1] = (!(((/* implicit */_Bool) ((long long int) 4ULL))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)175)))))));
    }
}

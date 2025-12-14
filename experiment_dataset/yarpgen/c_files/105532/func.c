/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105532
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
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_1 - 4]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_12)) : ((~(((/* implicit */int) arr_3 [i_1]))))))) : (max((((/* implicit */unsigned int) ((short) arr_1 [i_1]))), (arr_5 [i_0 - 2])))));
                arr_8 [i_1] |= ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [8ULL])) ? (((/* implicit */int) arr_6 [i_0] [(_Bool)1] [i_0])) : (((/* implicit */int) arr_3 [i_1]))))))));
                arr_9 [(short)17] [(short)17] |= var_3;
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (min((7046379449482351804LL), (((/* implicit */long long int) arr_2 [i_0 + 2])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 7046379449482351804LL))))));
                            arr_14 [i_3] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_9)) > ((~(((/* implicit */int) arr_3 [i_0]))))))), ((+((((_Bool)1) ? (((/* implicit */int) var_9)) : (arr_0 [i_0])))))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0 - 2]))) ? (min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (max((7046379449482351804LL), (((/* implicit */long long int) (unsigned char)177)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (max((((/* implicit */unsigned int) (unsigned char)177)), (522240U)))))))));
                            var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_11 [i_0])), ((+(arr_0 [i_0 - 2])))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) -1770224031);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            {
                var_22 = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) / ((((((-(((/* implicit */int) (unsigned short)24908)))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)102))) < (7046379449482351804LL)))) - (1)))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 1023046846)), (arr_5 [(unsigned char)11])))) ? (((((/* implicit */_Bool) var_7)) ? (arr_13 [i_7] [i_7] [i_7] [i_7] [i_5]) : (((/* implicit */int) var_12)))) : (max((((/* implicit */int) arr_2 [(signed char)12])), (1023046846))))));
                        var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_10 [(unsigned char)19] [(unsigned char)19] [(unsigned char)19])) && (((/* implicit */_Bool) arr_17 [(unsigned short)0])))))))) : (7046379449482351780LL)));
                        arr_26 [i_4] [i_4] [9U] [(unsigned char)19] [(signed char)10] [9U] = ((/* implicit */_Bool) (unsigned char)154);
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        arr_29 [18LL] [(signed char)9] [i_8] [i_8] [i_8] [18LL] = ((/* implicit */unsigned long long int) min((((unsigned int) (-2147483647 - 1))), (((/* implicit */unsigned int) max((arr_18 [i_4] [i_5]), (arr_18 [i_6] [i_8]))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 3; i_9 < 20; i_9 += 4) 
                        {
                            var_25 ^= ((/* implicit */int) (unsigned short)55913);
                            var_26 += ((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))), (((unsigned int) (unsigned short)40634))));
                        }
                    }
                    var_27 = ((/* implicit */long long int) min(((~(((((/* implicit */_Bool) arr_16 [(signed char)4])) ? (((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_4] [9LL])) : (((/* implicit */int) (unsigned char)4)))))), (max((arr_13 [12LL] [i_5] [i_5] [i_6] [i_5]), (arr_0 [i_4])))));
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [10U])) ? (min((((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) + (-7046379449482351781LL))), (((/* implicit */long long int) arr_15 [i_4] [i_4])))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((_Bool) -1240094485429769599LL))))))))));
                }
                /* vectorizable */
                for (unsigned int i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_4] [(short)9] [i_4] [i_4])) < (((/* implicit */int) arr_20 [i_4] [(unsigned short)8] [(unsigned short)8] [i_10]))));
                    arr_34 [i_4] [i_5] [(signed char)7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_5] [i_4])) ? (arr_33 [i_5] [i_5]) : (arr_33 [i_4] [i_5])));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_11 = 2; i_11 < 20; i_11 += 1) /* same iter space */
                {
                    arr_39 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) arr_15 [i_5] [8ULL])))))) != (((((/* implicit */_Bool) arr_10 [(signed char)17] [(unsigned char)10] [(short)11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [10LL] [10LL] [i_11] [i_11] [10LL]))) : (4226350476U)))));
                    var_30 ^= ((((/* implicit */_Bool) (unsigned short)24908)) ? (((/* implicit */int) ((unsigned char) arr_10 [19U] [i_5] [(short)0]))) : ((-(arr_33 [i_4] [i_5]))));
                    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((arr_28 [i_11 - 1] [i_11 - 2] [i_11 - 1] [i_11 - 1]) && (arr_28 [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 2]))))));
                }
                for (long long int i_12 = 2; i_12 < 20; i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (short i_14 = 0; i_14 < 22; i_14 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) arr_28 [i_4] [6U] [i_12] [i_4]))));
                                var_33 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) <= (0U)));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */_Bool) ((signed char) 4034274585U));
                }
                var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (~(var_3))))) ? (((/* implicit */int) ((signed char) (_Bool)0))) : (((((/* implicit */_Bool) arr_47 [i_4] [(signed char)18] [12LL] [(signed char)18] [2LL] [i_4])) ? (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) (signed char)71))))) : ((-(((/* implicit */int) arr_28 [i_4] [i_4] [i_5] [i_4]))))))));
            }
        } 
    } 
}

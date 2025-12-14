/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12360
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) (_Bool)1)), (arr_3 [i_1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) ? (7881222775516837898LL) : (((/* implicit */long long int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)94)))), (((/* implicit */int) arr_1 [i_0])))))));
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) (unsigned char)100))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (arr_0 [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        for (unsigned int i_3 = 1; i_3 < 23; i_3 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    for (signed char i_5 = 4; i_5 < 24; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                var_14 -= ((/* implicit */unsigned int) arr_17 [(signed char)12]);
                                var_15 = ((/* implicit */unsigned long long int) (+((-(((((/* implicit */_Bool) arr_15 [i_2] [i_4] [i_5 - 2] [i_6])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)100))))))));
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (-(min(((-(arr_6 [(unsigned char)2]))), (((/* implicit */long long int) var_10)))))))));
                                var_17 -= ((/* implicit */unsigned char) (((_Bool)1) ? ((~(((/* implicit */int) arr_20 [i_3 - 1] [i_3 + 1] [i_5 - 3] [i_5 + 1] [i_5 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)100)) % (((/* implicit */int) (unsigned char)151))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            {
                                var_18 = ((((/* implicit */_Bool) arr_18 [20ULL] [(signed char)5] [(signed char)5] [23ULL])) ? (((/* implicit */int) arr_20 [8LL] [i_8] [i_7] [i_3 + 2] [i_2])) : (max(((-(((/* implicit */int) var_5)))), (((/* implicit */int) (unsigned char)162)))));
                                var_19 ^= ((/* implicit */long long int) var_7);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    for (unsigned short i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) var_2);
                            var_21 = ((/* implicit */_Bool) (unsigned char)105);
                            var_22 -= ((/* implicit */int) min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((unsigned long long int) (unsigned char)255)) : (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) var_5))))))), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)94)))))))));
                            var_23 = min((arr_13 [1LL] [i_10] [i_11]), (arr_23 [i_2] [i_3] [i_11]));
                            var_24 = ((/* implicit */long long int) var_7);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_12 = 2; i_12 < 24; i_12 += 3) 
                {
                    for (unsigned char i_13 = 0; i_13 < 25; i_13 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) arr_15 [i_3 + 2] [i_12 - 2] [i_12] [i_3 + 2])))));
                            /* LoopSeq 1 */
                            for (int i_14 = 1; i_14 < 24; i_14 += 3) 
                            {
                                var_26 = ((/* implicit */unsigned long long int) var_3);
                                var_27 = ((((/* implicit */_Bool) (unsigned char)156)) ? (min((((/* implicit */unsigned long long int) min((arr_25 [1ULL] [i_2]), ((_Bool)1)))), (((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */unsigned long long int) 262143U)) : (var_0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_21 [i_2] [i_2] [(_Bool)1] [i_14]) : (((/* implicit */long long int) 4002987843U))))) ? ((+(arr_43 [i_2] [(unsigned char)11] [(unsigned char)11] [i_14]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_3 - 1])))))));
                            }
                            /* LoopSeq 2 */
                            for (long long int i_15 = 2; i_15 < 24; i_15 += 3) /* same iter space */
                            {
                                var_28 = ((/* implicit */unsigned long long int) ((int) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_10)), (var_7)))));
                                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_27 [i_2] [(signed char)19] [i_13] [i_12 + 1] [i_12] [i_3] [i_2])) ? ((~(arr_16 [22] [i_3 + 2] [i_12]))) : (((/* implicit */unsigned long long int) arr_17 [(unsigned short)12]))))))));
                                arr_47 [(signed char)9] [i_2] [i_2] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_38 [i_3 + 1] [i_3 + 2] [i_3 + 1]))))));
                                arr_48 [i_15] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (((+(((/* implicit */int) min((arr_29 [i_2] [i_3] [i_12 - 2] [i_2]), ((unsigned char)62)))))) << (((min((arr_27 [i_15 - 2] [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_15 - 2] [i_15 + 1] [i_15 - 1]), (((/* implicit */unsigned long long int) var_8)))) - (62ULL)))));
                            }
                            for (long long int i_16 = 2; i_16 < 24; i_16 += 3) /* same iter space */
                            {
                                var_30 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) 274877906943LL)) / (var_1))), (((/* implicit */unsigned long long int) var_10)))))));
                                var_31 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_16 [i_2] [i_12] [i_13])))) <= (min((arr_32 [i_2] [i_3] [19U] [(unsigned char)9] [i_2] [(unsigned char)9]), (var_9))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_2] [i_3 - 1] [i_12] [i_13] [i_16]))) : (arr_17 [i_2])))) >= (arr_44 [i_2] [i_2] [i_12] [i_2] [i_12 - 2] [i_3])))));
                                var_32 = ((/* implicit */unsigned int) var_4);
                                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((var_11), (9223372036854775807LL))), (((long long int) arr_31 [i_2] [(signed char)4] [i_12] [i_13]))))) || (((/* implicit */_Bool) (~(max((var_6), (18446744073709551615ULL))))))));
                            }
                            var_34 = ((/* implicit */int) max((var_34), ((((_Bool)1) ? (((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [14ULL])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

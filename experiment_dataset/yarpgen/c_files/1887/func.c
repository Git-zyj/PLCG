/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1887
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 = (+(((((/* implicit */_Bool) arr_2 [i_1 + 3])) ? (7274345877970435832LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 2]))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) arr_8 [i_0] [i_1 - 2] [i_2 + 2] [14LL]))));
                            var_15 = ((/* implicit */signed char) ((int) (-(((arr_3 [i_4]) - (18LL))))));
                            var_16 = ((/* implicit */short) arr_10 [i_2] [(unsigned char)13] [i_2]);
                            var_17 = 18LL;
                        }
                        for (unsigned int i_5 = 1; i_5 < 14; i_5 += 4) 
                        {
                            var_18 ^= ((/* implicit */long long int) ((unsigned long long int) 2598553387946783204LL));
                            arr_18 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) min((arr_14 [i_2] [i_1 - 1] [i_2] [i_3] [i_2 + 2]), (arr_14 [i_2] [i_1 - 2] [(_Bool)1] [(short)4] [i_2 + 2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_4 [i_0])))) <= (((((/* implicit */_Bool) var_6)) ? (arr_13 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_3] [i_5]) : (((/* implicit */unsigned long long int) var_11)))))))) : (((((arr_1 [i_3]) & (((/* implicit */long long int) arr_12 [i_2] [i_3] [i_1] [i_2])))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)75))))));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 2) 
                        {
                            arr_21 [i_0] [i_2] [i_0] [i_3] [i_2] [i_2] [6LL] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_8 [(_Bool)1] [i_3] [i_2 + 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_7 [i_1 + 1]))) > (((/* implicit */long long int) ((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) arr_10 [i_2] [i_2] [i_3])) : (((((/* implicit */_Bool) ((signed char) arr_10 [i_2] [i_2] [i_2]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)110))) + (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))))));
                            var_19 = ((/* implicit */short) ((((/* implicit */int) arr_19 [i_1] [8ULL] [i_1 - 1] [i_1 + 3] [i_1] [i_1])) | (((arr_19 [i_1] [4] [i_1 + 3] [i_1 - 2] [i_1] [13LL]) ? (((/* implicit */int) arr_19 [i_1] [i_1] [i_1 - 1] [i_1 + 2] [(unsigned char)13] [i_1])) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_1 - 2] [i_1 - 1] [4LL]))))));
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_8 [i_1 - 2] [i_1 + 3] [i_2 + 3] [i_7 + 1]), (arr_8 [i_1 + 1] [i_1 + 2] [i_2 - 1] [i_7 + 2])))))))));
                            var_21 = ((/* implicit */long long int) (_Bool)1);
                        }
                        arr_24 [i_2] [(_Bool)1] [i_1 + 3] [i_0] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_1 - 2] [i_2 + 3] [i_2] [i_2] [i_3] [i_3]))));
                        /* LoopSeq 3 */
                        for (int i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
                        {
                            var_22 *= ((/* implicit */signed char) ((max((arr_9 [i_2] [i_2 + 3] [i_2 + 2] [(short)11]), (arr_9 [3LL] [i_2 + 3] [i_2 - 1] [i_2]))) ? (arr_23 [i_2 + 1] [5LL] [i_2 + 1] [i_2 + 3]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)127)))))));
                            arr_27 [i_0] [i_2] [(_Bool)1] [i_8] [i_3] = ((/* implicit */signed char) min((((int) arr_20 [i_0])), (((/* implicit */int) arr_14 [i_2] [8] [i_1 - 2] [10LL] [i_8]))));
                            arr_28 [i_0] [i_0] [(unsigned char)5] [9ULL] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((long long int) max((arr_17 [i_2] [i_1 + 3] [i_1 - 2]), (((/* implicit */long long int) arr_9 [i_1] [i_1] [(_Bool)1] [i_8])))));
                            var_23 ^= ((/* implicit */unsigned long long int) arr_1 [i_3]);
                            arr_29 [i_2] [i_2] [i_2 - 1] [i_1] [i_2] = (+(((long long int) 204037109740423388ULL)));
                        }
                        for (int i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
                        {
                            var_24 += ((/* implicit */unsigned char) ((15707847373781187235ULL) & (((/* implicit */unsigned long long int) arr_3 [(unsigned char)8]))));
                            var_25 = ((var_10) - (((/* implicit */unsigned long long int) (+(arr_26 [i_9])))));
                            arr_33 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */signed char) arr_23 [i_1] [i_1 - 2] [i_9] [i_1]);
                            var_26 = ((/* implicit */signed char) arr_12 [i_2] [7U] [i_3] [i_9]);
                        }
                        for (int i_10 = 0; i_10 < 15; i_10 += 3) /* same iter space */
                        {
                            arr_36 [i_0] [i_2] [i_2] [i_3] [i_0] = ((/* implicit */short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [3ULL])))))) & (max((((/* implicit */unsigned long long int) arr_19 [(signed char)5] [i_1] [i_2] [(signed char)5] [(unsigned char)14] [i_1])), (arr_23 [i_1] [i_1] [0U] [i_1])))))));
                            var_27 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_10])))))) : (((((/* implicit */_Bool) arr_10 [i_2] [(_Bool)1] [i_2])) ? (arr_8 [i_3] [i_0] [i_0] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                        }
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) 
                        {
                            var_28 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned char)75)), (18242706963969128239ULL)));
                            var_29 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)104))))), (((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 + 1])) == (arr_23 [i_0] [i_1 + 2] [i_1 + 3] [i_11])))) & (((/* implicit */int) arr_19 [i_1 - 2] [i_1 + 1] [i_1 + 3] [12LL] [i_1 - 1] [i_1 + 3]))))));
                            arr_41 [i_0] [i_1] [10U] [i_2] [0ULL] [i_12] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_12 [i_2] [i_1 + 1] [i_2 - 1] [5])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_3 [i_0]))), (((/* implicit */long long int) (~(((arr_37 [(short)7]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_0]))) : (arr_8 [i_0] [12LL] [13LL] [(signed char)0]))))))));
                            arr_42 [i_12] [i_1] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */_Bool) ((unsigned int) arr_25 [i_0] [i_0] [i_2] [i_2] [6U]));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 4) 
                        {
                            var_30 = ((/* implicit */long long int) (+(arr_12 [i_2] [i_2 + 1] [i_11] [i_1 + 2])));
                            var_31 = ((/* implicit */_Bool) (~(arr_10 [i_2] [i_0] [i_0])));
                        }
                        arr_47 [i_0] [i_1] [i_2 + 3] [6LL] [i_2] [i_11] = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_25 [i_1 - 2] [i_1] [i_1] [i_1] [i_1 + 1])))), (((var_4) ? (((/* implicit */int) arr_25 [i_1 + 2] [i_1] [i_1] [i_1] [i_1 - 2])) : (((/* implicit */int) (unsigned char)106))))));
                    }
                    arr_48 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                }
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((unsigned long long int) var_4)))));
}

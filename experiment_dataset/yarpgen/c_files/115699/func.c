/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115699
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
    var_19 &= ((/* implicit */short) (signed char)-37);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = (!(((/* implicit */_Bool) max((((/* implicit */int) (short)-21212)), ((-(arr_1 [(_Bool)1] [i_1])))))));
                arr_4 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_1 [i_0] [9ULL])), ((~(((6937586327552667269ULL) | (((/* implicit */unsigned long long int) 5925551070554309272LL))))))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [(short)9] [i_3 - 1] [i_0] [1LL] [i_2 - 1] [i_0])) != (((/* implicit */int) arr_2 [i_0] [i_2 - 2] [i_2 - 2]))));
                            arr_10 [1ULL] [i_1] [1ULL] [i_3] [(signed char)7] [i_0] = ((/* implicit */_Bool) (((~(((/* implicit */int) (short)-32757)))) >> (((max((arr_9 [i_3 - 1] [i_3] [i_3 - 1] [i_3]), (((/* implicit */unsigned long long int) 7718473485975477351LL)))) - (11828839315538456690ULL)))));
                            var_22 = ((/* implicit */_Bool) arr_2 [i_3] [i_3] [i_3]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    var_23 += ((/* implicit */_Bool) 11509157746156884347ULL);
                    var_24 = ((/* implicit */long long int) arr_7 [i_0]);
                    var_25 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((9300465406830596221ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-60))))))));
                    arr_13 [i_0] [i_0] [(short)13] = ((/* implicit */_Bool) arr_5 [i_1]);
                }
                for (short i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    var_26 = max((((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((signed char)-25), ((signed char)-25))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)8191))) | (9300465406830596242ULL))));
                    /* LoopSeq 3 */
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) arr_1 [(short)3] [(signed char)5]))));
                        var_28 *= ((/* implicit */short) (-(((arr_1 [i_5] [i_1]) - (arr_1 [i_5] [i_6])))));
                        arr_19 [(signed char)2] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) (unsigned char)215)), (11509157746156884347ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 9146278666878955395ULL))))));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((short) arr_1 [i_0] [i_5])))));
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) arr_21 [(signed char)2] [4LL] [4LL] [4LL] [(_Bool)1]))));
                        var_31 |= ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_1])) ^ (((/* implicit */int) arr_5 [(_Bool)1]))));
                        /* LoopSeq 2 */
                        for (signed char i_8 = 3; i_8 < 14; i_8 += 3) /* same iter space */
                        {
                            var_32 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [i_8] [i_8] [i_8] [(unsigned char)6] [i_8 - 1]))));
                            var_33 += ((/* implicit */_Bool) arr_8 [14] [(signed char)12] [13ULL] [i_5] [14] [i_8]);
                        }
                        for (signed char i_9 = 3; i_9 < 14; i_9 += 3) /* same iter space */
                        {
                            arr_29 [11ULL] [(unsigned char)12] [i_5] [i_7] [i_9] = ((/* implicit */unsigned long long int) ((arr_27 [i_9] [i_9] [i_9 - 2] [i_9 - 2] [i_9 - 2]) + (arr_27 [(signed char)7] [(signed char)7] [i_9 - 3] [i_9 - 3] [i_9 - 3])));
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_9 + 1])) * (((/* implicit */int) arr_22 [i_0] [i_0] [i_7] [1LL] [i_9 - 1])))))));
                        }
                        var_35 = ((/* implicit */_Bool) (~(arr_6 [i_0] [(short)5] [i_5])));
                    }
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        var_36 &= ((/* implicit */short) ((signed char) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_5] [i_1])) + (((/* implicit */int) arr_18 [i_1])))));
                        var_37 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [6ULL] [i_0] [i_0]))) < (arr_9 [i_0] [i_1] [i_0] [i_10])));
                        var_38 = arr_23 [i_0] [i_1];
                    }
                }
            }
        } 
    } 
    var_39 = ((/* implicit */short) ((unsigned char) var_18));
}

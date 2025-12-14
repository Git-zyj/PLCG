/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142763
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
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((short) (~(((/* implicit */int) var_5))))))));
    var_17 = ((/* implicit */long long int) ((var_11) > (var_10)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) >> (((arr_0 [i_0] [i_0]) + (6846672230991782964LL)))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) >> (((((arr_0 [i_0] [i_0]) - (6846672230991782964LL))) + (2085422596248218002LL))))));
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [(signed char)13] [(signed char)0] [i_3 - 1] [i_3 - 1] [i_3 - 1] = ((/* implicit */unsigned char) ((((1434529467U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_3 - 1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [i_1] [i_3 - 1])) != (((/* implicit */int) arr_12 [i_0] [i_3 - 1]))))) : (((/* implicit */int) max((arr_12 [i_0] [i_1]), (arr_12 [i_0] [i_1]))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] &= ((/* implicit */_Bool) var_1);
                    }
                } 
            } 
            arr_15 [i_0] = max((((/* implicit */long long int) ((unsigned short) 9346283725448768170ULL))), ((+(arr_0 [i_0] [i_0]))));
        }
        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            arr_18 [i_4] [i_4] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_8 [i_0]), (arr_8 [i_0])))) <= (((/* implicit */int) (unsigned char)12))));
            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_16 [i_0]);
        }
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                arr_26 [(unsigned char)5] [i_0] [i_6] = ((/* implicit */unsigned long long int) ((long long int) arr_21 [i_0]));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_0] [i_0])) <= (((/* implicit */int) arr_17 [i_0] [i_0]))));
                arr_27 [i_0] [i_5] [i_0] = ((/* implicit */unsigned short) 1434529467U);
                arr_28 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)197))));
            }
            arr_29 [(signed char)13] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_5]))) / (1434529483U)));
            var_19 += ((/* implicit */int) ((((/* implicit */_Bool) (+(785424469)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5]))) : (1434529467U)));
        }
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            arr_33 [i_0] [(unsigned char)8] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_7])) ? (arr_32 [i_7] [i_0]) : (((/* implicit */long long int) var_11))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)10)) && (((/* implicit */_Bool) 1434529483U))))) : ((~(((/* implicit */int) (signed char)112))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 1; i_9 < 21; i_9 += 1) 
                {
                    for (signed char i_10 = 2; i_10 < 19; i_10 += 3) 
                    {
                        {
                            arr_43 [i_0] [i_0] [i_8] [i_0] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_8] [i_8] [i_9 + 2] [i_10])) ? (((/* implicit */int) arr_40 [i_9] [i_9] [i_9 + 2] [i_10] [i_10])) : (((/* implicit */int) arr_42 [(unsigned char)6] [i_8] [i_9 + 2] [i_0] [i_9] [i_10 - 2]))));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_10] [i_10 - 1] [i_10] [i_8] [i_10] [i_10]))) + (10773838370358511558ULL))))));
                            var_21 = ((/* implicit */signed char) arr_1 [i_0] [i_7]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_47 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)243)) ? (8115798834195385101LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243)))));
                    arr_48 [i_0] = ((/* implicit */unsigned short) (unsigned char)13);
                }
            }
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 5895805146095773384ULL))) << (((((((/* implicit */int) (signed char)-104)) + (134))) - (14))))))));
            arr_49 [(_Bool)1] [i_0] = ((unsigned short) ((((/* implicit */unsigned int) var_2)) <= (arr_39 [i_0] [i_7] [i_0] [i_7] [i_0])));
            arr_50 [i_0] [16] = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0])) ^ (((/* implicit */int) arr_8 [i_0]))));
        }
        arr_51 [i_0] = ((/* implicit */int) ((arr_31 [i_0]) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_31 [i_0])) : (-46166834))))));
    }
}

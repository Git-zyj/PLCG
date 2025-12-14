/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167477
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((int) arr_0 [i_0]));
        var_19 -= ((unsigned int) arr_1 [i_0]);
    }
    for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                for (short i_4 = 3; i_4 < 15; i_4 += 4) 
                {
                    {
                        arr_16 [i_1] [i_2] [i_3] [i_4] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_1] [i_2] [i_3] [i_3] [i_1])) && (((/* implicit */_Bool) min((max((((/* implicit */int) arr_8 [i_2] [i_3] [i_3])), (arr_13 [i_3] [i_3] [i_3] [i_3] [i_3]))), (((/* implicit */int) min((((/* implicit */short) arr_15 [i_1 + 1] [i_2] [i_3] [i_4] [(unsigned short)6])), ((short)32309)))))))));
                        var_20 += ((/* implicit */long long int) (signed char)-1);
                        arr_17 [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */long long int) arr_12 [2] [i_2] [i_3] [i_3] [i_4 - 3]);
                        var_21 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)233)) < (max((((/* implicit */int) arr_7 [i_1])), (max((((/* implicit */int) arr_6 [i_1])), ((-2147483647 - 1))))))));
                    }
                } 
            } 
        } 
        arr_18 [(unsigned short)12] |= arr_15 [i_1] [i_1] [0LL] [i_1] [i_1];
        var_22 = ((/* implicit */unsigned char) ((min(((-2147483647 - 1)), (((/* implicit */int) (signed char)0)))) ^ (((/* implicit */int) ((((unsigned int) (unsigned char)100)) < (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1]))))))));
    }
    for (unsigned int i_5 = 1; i_5 < 17; i_5 += 1) /* same iter space */
    {
        var_23 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5 + 1] [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 1]))) != (arr_5 [i_5 + 1])));
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    {
                        arr_29 [i_5] [i_5] = ((/* implicit */unsigned int) arr_8 [i_6] [i_7] [i_8]);
                        arr_30 [i_7] [i_8] = min((arr_13 [i_5] [i_7] [i_7] [i_5] [i_8]), (((((/* implicit */_Bool) ((2147483625) / (2147483647)))) ? (((/* implicit */int) ((-1183839668) < (((/* implicit */int) arr_6 [i_5]))))) : (-1141365760))));
                        arr_31 [(unsigned char)6] [i_6] [i_6] [i_6] [i_6] [i_8] = ((/* implicit */unsigned short) arr_21 [i_6] [i_7]);
                        var_24 = ((/* implicit */_Bool) ((int) arr_9 [i_6]));
                    }
                } 
            } 
        } 
        var_25 ^= ((unsigned int) arr_26 [i_5] [i_5]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            arr_35 [i_5] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)29477)) ? (((((/* implicit */_Bool) arr_7 [(unsigned char)6])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_23 [i_5] [i_5] [i_5])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_33 [i_5] [i_9] [i_9])) < (arr_5 [i_9]))))));
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        {
                            arr_44 [5U] [i_11] [i_12] &= ((/* implicit */unsigned int) ((((arr_39 [(signed char)9] [i_9] [(short)13] [i_11]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */int) arr_10 [i_10] [i_11])) ^ (2147483647))) : (((int) arr_6 [i_12]))));
                            var_26 |= ((/* implicit */short) 1078869183U);
                            var_27 = arr_12 [i_5] [8ULL] [i_5 - 1] [i_5 + 1] [i_5 + 1];
                        }
                    } 
                } 
            } 
        }
        arr_45 [i_5] = ((/* implicit */unsigned char) arr_8 [i_5] [i_5] [i_5 + 1]);
    }
    var_28 = ((/* implicit */unsigned int) var_8);
}

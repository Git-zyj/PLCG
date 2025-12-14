/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186983
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
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        arr_4 [(unsigned char)12] [i_0] &= ((/* implicit */unsigned long long int) ((((_Bool) (_Bool)1)) ? (((int) arr_2 [13] [13])) : (((/* implicit */int) ((unsigned short) arr_1 [8LL])))));
        arr_5 [i_0] = ((/* implicit */long long int) arr_2 [i_0 - 3] [4ULL]);
        var_20 += ((short) arr_2 [i_0 + 1] [i_0 - 3]);
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                {
                    var_21 += max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_2 [i_1] [i_2]) >= (((/* implicit */unsigned long long int) arr_6 [i_2]))))) <= (max((arr_7 [i_1] [i_1]), (((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))))))), (max(((-(arr_2 [i_1] [i_2]))), (((unsigned long long int) arr_6 [i_1])))));
                    arr_14 [i_3] [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_1] [i_2] [i_1] [i_1]))) ? (((int) arr_0 [i_1] [i_1])) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_2])), (arr_11 [i_1] [i_2] [i_3])))))) * (max((min((((/* implicit */int) arr_9 [i_3] [i_3])), (arr_10 [i_1]))), (((((/* implicit */_Bool) arr_10 [9U])) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (arr_10 [i_2])))))));
                }
            } 
        } 
        var_22 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_11 [i_1] [i_1] [i_1]), (arr_13 [i_1] [i_1] [i_1] [i_1])))) ? ((+(((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) ((short) arr_7 [i_1] [i_1])))))), (((long long int) ((((/* implicit */unsigned long long int) arr_7 [i_1] [i_1])) == (arr_2 [i_1] [i_1]))))));
        var_23 = ((/* implicit */unsigned char) min((((/* implicit */short) arr_11 [i_1] [i_1] [i_1])), (arr_3 [i_1])));
        var_24 &= ((/* implicit */unsigned short) min((((15338080357728646344ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((_Bool) max((((/* implicit */long long int) arr_11 [i_1] [(signed char)3] [i_1])), (arr_8 [i_1] [i_1]))))));
    }
    for (short i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_5 = 1; i_5 < 11; i_5 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)18859)) + (((/* implicit */int) (signed char)100))));
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */short) (unsigned char)143)), ((short)-21327))))) ? (max((min((arr_2 [i_4] [9U]), (((/* implicit */unsigned long long int) arr_19 [i_4] [(unsigned char)10])))), (((/* implicit */unsigned long long int) arr_7 [i_4] [i_5 - 1])))) : (((/* implicit */unsigned long long int) arr_6 [i_4]))));
        }
        /* vectorizable */
        for (unsigned char i_6 = 1; i_6 < 11; i_6 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */signed char) arr_6 [i_4]);
            arr_24 [i_4] [i_6] &= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_2 [(short)2] [i_6])) ? (((/* implicit */int) arr_12 [(signed char)0] [i_6 - 1] [i_6] [i_4])) : (arr_7 [i_6 + 1] [(_Bool)1]))));
            arr_25 [(unsigned short)0] [i_6] [(signed char)7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_7 [i_4] [i_4]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_10 [i_4])))) : (((unsigned int) arr_12 [i_4] [i_4] [(unsigned char)6] [i_4]))));
            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) arr_11 [i_6] [i_6] [i_4]))));
        }
        /* vectorizable */
        for (unsigned char i_7 = 1; i_7 < 11; i_7 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_8 = 1; i_8 < 8; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_40 [i_4] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_31 [i_4] [i_4] [i_4]))));
                            var_29 = ((/* implicit */long long int) arr_35 [i_4] [i_7] [i_4] [i_9]);
                        }
                    } 
                } 
                arr_41 [i_4] [i_7] = ((((/* implicit */_Bool) ((signed char) arr_11 [i_8] [i_8] [8U]))) ? (arr_2 [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((int) 1474313864))));
            }
            for (unsigned int i_11 = 1; i_11 < 11; i_11 += 1) 
            {
                arr_45 [i_7] [7LL] [i_7] = ((/* implicit */unsigned short) ((unsigned long long int) arr_30 [i_7 + 1] [i_7 + 1] [i_11 + 1] [i_7 + 1]));
                var_30 -= arr_18 [i_4] [i_7];
            }
            arr_46 [i_7] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [7ULL] [i_4] [(short)8]))) <= (arr_27 [i_4] [i_4] [i_4]))));
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_7] [3ULL] [i_7 - 1] [i_7])) || (((/* implicit */_Bool) arr_29 [i_7] [i_7 - 1]))));
            var_32 = ((/* implicit */signed char) arr_38 [i_4] [i_7] [i_7] [i_7] [10] [(_Bool)0] [i_7]);
        }
        var_33 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_0 [i_4] [i_4]))))))) : (arr_37 [i_4] [i_4] [(unsigned short)7])));
    }
    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? ((~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_11)))))) : (((((var_15) ^ (((/* implicit */int) var_6)))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (var_2)))))))))));
    var_35 |= var_5;
    var_36 += ((/* implicit */unsigned char) (~(var_8)));
    /* LoopNest 2 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        for (int i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            {
                var_37 = ((/* implicit */short) min((((/* implicit */unsigned char) arr_47 [i_13])), (arr_52 [1U])));
                arr_53 [i_12] [i_12] = min((((/* implicit */int) max(((!(((/* implicit */_Bool) arr_52 [16])))), (min((arr_49 [i_12]), (arr_49 [i_12])))))), (min((((/* implicit */int) min((arr_47 [i_12]), (arr_47 [i_12])))), (((arr_47 [i_13]) ? (((/* implicit */int) arr_50 [i_12])) : (((/* implicit */int) arr_50 [i_12])))))));
            }
        } 
    } 
}

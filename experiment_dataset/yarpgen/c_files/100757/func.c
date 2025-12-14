/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100757
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((var_16) >> (((((/* implicit */int) var_0)) - (114))))) : ((+(((/* implicit */int) arr_1 [i_0])))));
        var_19 = ((/* implicit */short) arr_1 [i_0]);
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_6))) % (((long long int) var_1))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_1 [i_0]))));
        var_20 = ((/* implicit */short) ((arr_2 [i_0]) > (((/* implicit */unsigned long long int) var_16))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
        arr_9 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((((/* implicit */int) var_8)) - (79)))))) ? ((-(arr_6 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((11908933664476053571ULL) < (11908933664476053575ULL)))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (short i_3 = 2; i_3 < 7; i_3 += 3) 
            {
                {
                    var_21 = ((/* implicit */signed char) max((var_21), (arr_13 [i_1] [i_1])));
                    arr_16 [i_1] [i_1] [i_2] [i_3 + 1] &= ((/* implicit */short) ((var_3) / ((+(var_5)))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_5 = 2; i_5 < 6; i_5 += 4) 
            {
                arr_21 [i_1] [i_5] [i_5] [i_4] = ((/* implicit */unsigned long long int) -2147483637);
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        {
                            arr_27 [i_7] [i_4] [i_6] [i_6] [(short)0] = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_18 [i_4])) : (((/* implicit */int) arr_13 [4] [i_4])))) : (arr_11 [i_1] [i_1] [i_5 + 2]));
                            var_22 *= ((/* implicit */short) ((arr_25 [i_5 + 2] [3LL] [i_5] [i_6] [i_7] [i_5] [i_5 - 1]) < (arr_25 [i_5 + 1] [i_4] [i_4] [6] [7] [i_6] [i_5])));
                            var_23 -= ((/* implicit */int) arr_20 [i_1] [i_4] [i_1] [i_6]);
                        }
                    } 
                } 
                arr_28 [i_4] = ((/* implicit */signed char) (+((-(((/* implicit */int) var_2))))));
                var_24 = ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) arr_0 [i_1])))));
            }
            /* LoopSeq 3 */
            for (int i_8 = 2; i_8 < 9; i_8 += 2) 
            {
                var_25 = ((/* implicit */int) (+(arr_19 [i_4] [i_4])));
                arr_33 [i_8] [i_8] [2LL] [i_8] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11908933664476053578ULL)) ? (((/* implicit */long long int) var_14)) : (arr_7 [(unsigned char)9])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_13 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)63))))) : (6537810409233498040ULL)));
            }
            for (int i_9 = 2; i_9 < 9; i_9 += 1) 
            {
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_18) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_9] [i_9] [(short)4] [i_4] [i_1] [i_1])))))) ? (((/* implicit */int) arr_34 [i_4] [i_4] [i_9])) : (var_17))))));
                arr_36 [i_9] [i_9] [i_9] = (signed char)-4;
            }
            for (unsigned char i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    for (int i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        {
                            arr_47 [i_12] [i_12] [i_11] [(unsigned char)5] [i_4] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
                            var_27 ^= ((/* implicit */long long int) (+(((/* implicit */int) arr_41 [i_1] [i_10] [i_1] [0LL]))));
                        }
                    } 
                } 
                arr_48 [i_1] [i_4] [i_4] &= ((/* implicit */short) ((((-548293991) <= (var_3))) ? (arr_0 [i_10]) : (((/* implicit */int) arr_46 [i_4]))));
            }
            var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_16))))));
            var_29 ^= ((/* implicit */unsigned char) arr_46 [i_4]);
        }
        for (int i_13 = 2; i_13 < 6; i_13 += 3) 
        {
            arr_52 [i_13] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_14 [i_1]))) < (((/* implicit */long long int) var_17))));
            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_13 - 2] [i_13] [9] [0LL])) ? (((/* implicit */unsigned long long int) (-(var_17)))) : (arr_23 [3ULL] [i_1] [i_1] [i_13 + 1]))))));
        }
    }
    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_12)))) ? (((((/* implicit */int) (short)-1526)) * (((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) : ((~((~(((/* implicit */int) var_2))))))));
    var_32 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (var_5))) : (((((/* implicit */_Bool) var_8)) ? (var_14) : (var_3)))))));
}

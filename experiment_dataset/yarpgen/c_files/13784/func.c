/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13784
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 - 1]))));
        arr_3 [i_0] [i_0 + 2] = ((/* implicit */int) -10883963305696045LL);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2255934097U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_9))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)96))))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 2; i_2 < 16; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 2; i_3 < 19; i_3 += 4) 
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((2098525763138817086ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1 + 1])))));
                arr_13 [i_2] [i_2] [i_2] [i_2 - 1] = ((/* implicit */short) (-(((/* implicit */int) var_7))));
                arr_14 [(short)11] [8ULL] [i_1] = ((/* implicit */short) arr_5 [i_1] [i_1]);
            }
            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) arr_10 [i_2 + 1])) : (((/* implicit */int) arr_10 [i_2 - 2]))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_4 = 2; i_4 < 16; i_4 += 4) 
        {
            var_15 = ((/* implicit */long long int) arr_2 [i_1 + 1]);
            /* LoopSeq 3 */
            for (short i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_15 [i_1 + 1] [i_4 + 3]))));
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_1 - 1] [i_1 + 1])) ? (arr_18 [i_4 + 4] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1 - 1] [i_1 + 1]))))))));
                var_18 = (-(((arr_6 [i_4] [i_4]) * (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5]))))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 2; i_6 < 17; i_6 += 1) 
                {
                    for (unsigned char i_7 = 2; i_7 < 19; i_7 += 4) 
                    {
                        {
                            arr_24 [(short)17] = ((/* implicit */unsigned long long int) (-(arr_16 [i_1 - 1] [i_6 + 1] [i_7 - 2])));
                            var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) 6378490064353809741ULL)) ? (4294967295U) : (arr_22 [i_1 + 1] [i_1 + 1] [i_5] [2U])));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9)))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_8 = 3; i_8 < 19; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) arr_26 [i_1] [i_1] [i_1]);
                            var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-4093))));
                            var_23 = ((/* implicit */int) arr_18 [i_1 - 1] [i_9] [i_9]);
                            var_24 = ((/* implicit */long long int) arr_8 [i_1 + 1] [i_4 + 3]);
                        }
                    } 
                } 
                arr_35 [(unsigned short)8] [(unsigned short)8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_1] [i_8 + 1] [i_8])) || (((/* implicit */_Bool) arr_27 [i_1] [i_8 - 2] [i_8]))));
                arr_36 [i_1] [i_1] [i_4] [i_8 - 2] &= ((/* implicit */int) arr_0 [i_1 - 1]);
                var_25 = ((/* implicit */int) var_11);
            }
            for (unsigned char i_11 = 0; i_11 < 20; i_11 += 1) 
            {
                var_26 = ((/* implicit */unsigned long long int) arr_32 [i_1 + 1] [i_1 + 1] [i_4] [i_4 + 3]);
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    for (long long int i_13 = 3; i_13 < 18; i_13 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (short)-1))));
                            arr_43 [i_1] [i_1 - 1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7234494683070071193ULL)) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 + 1]))));
                            arr_44 [i_1] [i_1] [i_11] [i_12] [i_13 - 1] = ((/* implicit */unsigned char) arr_27 [i_1] [i_1] [i_1]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 2) 
                {
                    for (unsigned int i_15 = 3; i_15 < 19; i_15 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), ((((_Bool)1) ? (2305843009213691904ULL) : (0ULL)))));
                            var_29 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 766026368)))) ? (((/* implicit */unsigned long long int) arr_45 [(unsigned short)10] [(unsigned char)19] [i_15 - 2] [i_15 - 2] [i_15])) : (71776119061217280ULL)));
                            arr_49 [i_15] [i_14] [i_14] = ((/* implicit */unsigned int) var_3);
                        }
                    } 
                } 
            }
        }
        var_30 = ((/* implicit */unsigned int) ((arr_11 [i_1 - 1] [i_1 + 1] [i_1 - 1]) ? (((/* implicit */long long int) 4279432590U)) : (arr_29 [i_1 - 1] [10U])));
    }
    var_31 |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) == (((unsigned int) (unsigned char)90))));
    var_32 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 3 */
    for (unsigned char i_16 = 2; i_16 < 8; i_16 += 3) 
    {
        for (short i_17 = 0; i_17 < 10; i_17 += 2) 
        {
            for (short i_18 = 0; i_18 < 10; i_18 += 2) 
            {
                {
                    var_33 &= ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) (unsigned char)51)), (((((/* implicit */_Bool) arr_39 [i_16] [i_17] [i_16] [i_16])) ? (arr_5 [i_17] [i_16]) : (((/* implicit */unsigned long long int) arr_29 [i_16] [i_18]))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_19 = 0; i_19 < 10; i_19 += 3) 
                    {
                        arr_62 [i_16] [i_18] [i_18] [i_18] [i_17] &= ((/* implicit */unsigned char) arr_9 [i_16 - 1] [i_16 + 1]);
                        var_34 = ((/* implicit */unsigned long long int) max((var_34), (arr_39 [i_16] [i_17] [i_17] [i_19])));
                    }
                    var_35 = ((/* implicit */short) 2896792866U);
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) var_11))));
}

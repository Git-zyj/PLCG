/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123226
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) max((4294967278U), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (17U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) var_4))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            arr_11 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) ((signed char) (+(((/* implicit */int) (short)26575)))));
                            var_15 ^= ((/* implicit */unsigned int) ((-3672069232051578493LL) * (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_5 [i_4])), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [10] [10] [i_3] [i_4] [i_4]))) : (48U))))))));
                        }
                        for (short i_5 = 2; i_5 < 14; i_5 += 3) 
                        {
                            var_16 = ((/* implicit */int) max((((/* implicit */long long int) min(((signed char)-11), (((signed char) var_11))))), (((long long int) ((arr_9 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_2])) : (((/* implicit */int) (short)(-32767 - 1))))))));
                            var_17 = ((/* implicit */int) (((-(((/* implicit */int) arr_9 [i_0] [i_5 + 1] [i_0] [i_5 + 1] [(short)12] [i_5])))) < (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)63350))))));
                            arr_16 [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [(unsigned char)4] [i_5] [i_5 - 2] [i_1])) : ((+(((/* implicit */int) ((signed char) var_7)))))));
                        }
                        for (short i_6 = 1; i_6 < 11; i_6 += 1) 
                        {
                            arr_19 [i_0 - 2] [i_0 - 1] [i_0] [i_0] [12U] = ((/* implicit */unsigned short) (((~(4294967295U))) < (((/* implicit */unsigned int) ((/* implicit */int) ((629736061) > (((/* implicit */int) arr_4 [i_6 + 1] [i_0 + 1] [i_2]))))))));
                            var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((arr_2 [i_3] [i_0 - 1] [i_0 - 2]), (min((0U), (22U)))))), (((min((arr_0 [i_0 - 2] [i_3]), (((/* implicit */unsigned long long int) arr_1 [i_2])))) - (arr_17 [i_3] [i_1] [i_1])))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_10))));
                            var_20 = ((((21U) >= (3U))) ? (0LL) : (((/* implicit */long long int) 626728007U)));
                        }
                        var_21 &= ((/* implicit */signed char) 0U);
                    }
                } 
            } 
            var_22 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_14 [i_0] [i_0] [(signed char)10])) ? (arr_18 [i_1] [i_0] [i_0] [i_0] [i_0 + 1] [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))))))))));
        }
        for (long long int i_8 = 1; i_8 < 13; i_8 += 2) 
        {
            arr_25 [i_0] [10] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2770981097U)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16376)))));
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_8] [(_Bool)1] [i_8 + 1] [i_8 + 1] [6] [i_8 + 2] [14U]))))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 2147483634))))) : (((/* implicit */int) arr_5 [i_0]))))) ^ (((arr_12 [i_0 - 1] [14LL] [11ULL] [i_8 + 1] [i_8]) / (min((var_9), (((/* implicit */long long int) arr_2 [0U] [i_8] [i_8])))))))))));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                for (signed char i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    for (unsigned long long int i_11 = 2; i_11 < 11; i_11 += 1) 
                    {
                        {
                            arr_36 [i_0] [i_0] [0LL] [i_0] [0LL] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [(unsigned short)9] [i_8 + 2] [(unsigned short)9])), (((unsigned int) -7132078411172073136LL))))) ? (((/* implicit */unsigned long long int) min((min((var_9), (arr_26 [i_0] [i_0] [i_9] [i_10]))), (((arr_30 [i_8] [14] [i_11]) - (((/* implicit */long long int) arr_27 [i_0] [i_0] [i_0] [i_10]))))))) : (var_11)));
                            var_24 = ((((/* implicit */_Bool) ((long long int) 4294967267U))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) max((arr_30 [i_0] [i_0] [i_0]), (var_0)))))) : (var_1));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_24 [i_0] [i_0] [i_0 - 1])))) : (var_2)));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned short) var_7);
            arr_37 [i_0 - 2] [i_8] [i_0] = ((/* implicit */unsigned short) max((((signed char) ((unsigned short) 4294967295U))), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 + 1] [i_0] [1ULL] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [9]))) : (var_5)))))))));
        }
        for (unsigned short i_12 = 0; i_12 < 15; i_12 += 3) 
        {
            arr_40 [i_0] [6LL] [i_0] &= ((/* implicit */long long int) ((unsigned int) min((((/* implicit */long long int) (unsigned short)54626)), (var_1))));
            arr_41 [i_0] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [(unsigned short)4] [(unsigned short)4] [i_12])) ? (arr_17 [i_0] [12] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) -1311302244))))))))) ? (((((/* implicit */_Bool) ((signed char) arr_33 [i_0] [i_0] [i_0] [13] [i_0]))) ? (min((((/* implicit */long long int) arr_2 [i_0] [i_0] [i_12])), (arr_30 [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_9 [i_0] [i_0 - 2] [5LL] [i_12] [i_12] [i_12])), (var_12))))))) : (((/* implicit */long long int) (-(((int) arr_39 [i_0] [i_12])))))));
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 15; i_13 += 4) 
            {
                for (unsigned short i_14 = 1; i_14 < 11; i_14 += 3) 
                {
                    {
                        arr_47 [i_12] [i_0] = ((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_12] [i_13] [i_14]);
                        /* LoopSeq 2 */
                        for (unsigned char i_15 = 0; i_15 < 15; i_15 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((var_0), (arr_42 [7ULL] [i_0])))))) ? (((/* implicit */long long int) ((2838573095U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15739)))))) : (((long long int) arr_28 [i_14 + 1] [i_0 + 1] [i_13] [0LL]))));
                            var_28 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */long long int) (+(var_8)))) / ((-(arr_35 [i_0] [i_0] [i_13] [i_0] [i_0]))))));
                            var_29 = ((/* implicit */unsigned char) min((((((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 2] [i_12] [i_13]))))) << (((((((/* implicit */_Bool) -9045708063621820078LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)123))) : (1277931534U))) - (120U))))), (((/* implicit */unsigned long long int) min((arr_45 [i_14] [i_14 + 2] [i_14 + 1] [i_0]), (arr_45 [i_14] [i_14 + 4] [i_14 - 1] [i_0]))))));
                            var_30 |= ((/* implicit */unsigned int) ((short) var_3));
                        }
                        for (long long int i_16 = 0; i_16 < 15; i_16 += 3) 
                        {
                            arr_52 [i_0 + 1] [i_0 + 1] [(short)2] [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (var_4)))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_13] [i_14 + 3] [i_0])) : (((/* implicit */int) arr_32 [i_0 + 1] [i_0 - 2]))))));
                            arr_53 [i_0] [i_0] [3] [3] [i_0] = ((/* implicit */int) arr_9 [i_0] [i_0] [i_14] [(signed char)12] [i_12] [i_0]);
                            arr_54 [i_0] [i_0] [i_0] [i_14 + 1] [i_14 + 1] [i_14 + 1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_12])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))) ? (((-1311302244) % (((/* implicit */int) arr_10 [(unsigned char)14] [i_0] [i_12] [i_0] [i_14] [i_14] [i_16])))) : (((/* implicit */int) min((arr_45 [i_0] [i_13] [i_0 - 1] [i_0]), (((/* implicit */unsigned short) arr_33 [i_0] [i_0] [i_0 + 1] [i_0] [i_0])))))))));
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16))) < (max((4294967287U), (1456394196U))))))) ^ (((long long int) 4294967294U))));
                        }
                    }
                } 
            } 
        }
        var_32 = ((/* implicit */long long int) var_3);
    }
}

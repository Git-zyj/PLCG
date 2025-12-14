/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100461
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(5652734991740212999ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_13))))));
                arr_6 [(signed char)15] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (!(var_4)))) | (((/* implicit */int) ((var_4) && (((/* implicit */_Bool) arr_1 [13U])))))));
            }
            for (int i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_8 [i_3] [i_0]), (arr_8 [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */unsigned long long int) min((arr_4 [i_0] [i_1] [i_0 - 1] [i_0 + 1]), (arr_4 [(short)6] [i_1] [i_1] [i_0])))) : (5652734991740212999ULL)));
                arr_9 [i_0] [5] [13] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_16)), (arr_3 [i_0 + 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (arr_4 [i_0] [i_1] [i_0] [i_0 - 1]) : (arr_4 [i_0] [i_1] [i_3] [i_0 - 1]))))));
            }
            var_19 = ((/* implicit */int) var_9);
            var_20 = ((/* implicit */int) max((6947568448487450445LL), (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_5 [i_0])), ((short)-934))))) | (max((((/* implicit */long long int) var_2)), (6947568448487450445LL)))))));
            arr_10 [i_0] [(unsigned char)12] [i_0] = arr_0 [i_0];
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 1) 
            {
                var_21 = (!((!(((/* implicit */_Bool) (-(var_13)))))));
                var_22 ^= ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_7 [(unsigned char)2]), (((/* implicit */short) var_8)))))));
            }
        }
        arr_15 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_14 [i_0] [i_0] [i_0])), (((int) arr_7 [i_0 + 1]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            arr_19 [16U] [(_Bool)1] = ((/* implicit */unsigned long long int) var_10);
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min((((int) var_14)), (((/* implicit */int) arr_7 [i_0 + 1]))))) ? (((/* implicit */int) arr_0 [6U])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) - (42)))))) >= (max((((/* implicit */unsigned long long int) var_1)), (12794009081969338598ULL))))))));
        }
        var_24 = ((/* implicit */int) ((((arr_18 [(unsigned char)2]) <= (arr_18 [i_0 + 1]))) ? (min((var_5), (((/* implicit */unsigned int) arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1])))));
    }
    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        var_25 = ((/* implicit */_Bool) min((min((min((2687357316259220024ULL), (((/* implicit */unsigned long long int) arr_21 [i_6])))), (arr_20 [i_6] [i_6]))), (min((min((arr_20 [i_6] [i_6]), (((/* implicit */unsigned long long int) arr_21 [i_6])))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)-934)), (arr_21 [i_6]))))))));
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_9 = 2; i_9 < 17; i_9 += 4) 
                    {
                        arr_30 [i_9] [i_9] [i_7] [i_7] [(short)16] [(short)16] = ((/* implicit */signed char) ((((/* implicit */long long int) var_5)) < (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_6] [i_6])) && (((/* implicit */_Bool) (short)925))))), (((var_4) ? (((/* implicit */long long int) var_6)) : (var_7)))))));
                        var_26 = ((/* implicit */signed char) ((long long int) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (2687357316259220024ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7] [i_7] [i_7])))))));
                    }
                    for (unsigned char i_10 = 1; i_10 < 18; i_10 += 4) 
                    {
                        arr_33 [i_7] [i_10] = min((var_13), (max((arr_26 [i_7] [i_10] [i_10] [i_7]), (((/* implicit */long long int) var_4)))));
                        arr_34 [(signed char)11] [i_7] [(short)17] [i_7] [i_8] [i_7] = ((/* implicit */short) var_8);
                        arr_35 [16LL] [16LL] [i_8] [(unsigned char)8] [4LL] &= ((/* implicit */unsigned short) min((((/* implicit */long long int) var_8)), (207938194766312100LL)));
                    }
                    for (int i_11 = 2; i_11 < 17; i_11 += 2) 
                    {
                        arr_39 [i_7] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_16)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_11 - 1] [i_11 + 2] [i_11] [i_8])))))));
                        arr_40 [i_7] [i_8] [i_7] [i_7] = ((/* implicit */int) 5652734991740212999ULL);
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 5652734991740213018ULL)) ? (((/* implicit */int) var_16)) : (((((((/* implicit */_Bool) arr_29 [16] [i_7])) ? (((/* implicit */int) arr_32 [i_7])) : (1506956277))) + (((/* implicit */int) (short)-904))))));
                        var_28 &= ((/* implicit */int) min((((long long int) (~(9912999301732367027ULL)))), (((/* implicit */long long int) arr_23 [(short)6] [(signed char)18]))));
                    }
                    var_29 = var_3;
                    arr_41 [i_7] = ((/* implicit */int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 6947568448487450454LL)) : (arr_37 [i_7] [i_7] [12LL] [i_8] [i_7])))));
                    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) var_0))));
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_21 [(unsigned short)4]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)-904)))) : (((((/* implicit */_Bool) arr_20 [i_6] [i_6])) ? (arr_38 [(short)14] [i_7] [(unsigned char)0]) : (15759386757450331592ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)891)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_13)))) ? ((-(arr_27 [i_6] [i_7] [i_8]))) : (((((/* implicit */_Bool) var_5)) ? (7266209560331072809ULL) : (((/* implicit */unsigned long long int) arr_28 [i_7]))))))));
                }
            } 
        } 
        var_32 *= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) (signed char)70))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)31428))) <= (6947568448487450438LL))))) : (arr_27 [i_6] [(unsigned short)16] [i_6]))));
        arr_42 [i_6] = ((/* implicit */_Bool) min((((/* implicit */short) arr_25 [i_6] [0ULL] [(signed char)0])), (((short) ((var_16) ? (arr_21 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [(short)17] [i_6]))))))));
        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))) ? (min((var_13), (((/* implicit */long long int) ((signed char) arr_31 [i_6] [i_6] [i_6] [(short)2] [17] [17U]))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_25 [(unsigned short)0] [i_6] [(unsigned short)0]))))), ((short)-9538)))))));
    }
    for (int i_12 = 1; i_12 < 16; i_12 += 3) 
    {
        var_34 = (-(((((/* implicit */_Bool) 9912999301732367028ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [1U] [1U]))))))));
        /* LoopSeq 2 */
        for (short i_13 = 0; i_13 < 17; i_13 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_14 = 1; i_14 < 15; i_14 += 3) 
            {
                arr_50 [i_12] [(unsigned char)16] |= ((/* implicit */signed char) var_14);
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 17; i_15 += 4) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_55 [i_16] [(signed char)9] [i_14] [i_15] [14LL] [5ULL] = ((/* implicit */unsigned char) ((int) (unsigned char)139));
                            var_35 *= ((/* implicit */short) var_15);
                            arr_56 [4] [i_13] [i_16] [i_15] [0U] = ((/* implicit */short) ((unsigned int) arr_1 [i_13]));
                        }
                    } 
                } 
                var_36 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_13])) << (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) min((-1314353579), (((/* implicit */int) arr_29 [11] [i_13]))))) : (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned long long int) arr_13 [(unsigned char)15] [i_13] [i_12] [i_12])) : (arr_8 [i_13] [i_12]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))));
            }
            var_37 = ((/* implicit */short) (+((-(((/* implicit */int) ((arr_20 [17U] [i_12]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_13]))))))))));
            arr_57 [(short)4] [(short)4] = ((/* implicit */long long int) arr_46 [i_13] [i_13] [i_12]);
        }
        for (unsigned char i_17 = 3; i_17 < 13; i_17 += 4) 
        {
            var_38 *= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_23 [i_12] [i_12])), (4294967280U)))) ? (arr_28 [(unsigned char)4]) : (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_12] [i_17])))))));
            var_39 += max((((((arr_20 [i_12] [i_17]) % (((/* implicit */unsigned long long int) arr_52 [i_12] [(unsigned char)2])))) + (((/* implicit */unsigned long long int) arr_21 [(unsigned char)11])))), (((/* implicit */unsigned long long int) 0U)));
        }
        arr_60 [i_12] = ((/* implicit */long long int) min((4294967290U), ((-(min((arr_44 [i_12] [i_12]), (arr_52 [i_12] [8LL])))))));
    }
    var_40 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-21130)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) (short)930))));
}

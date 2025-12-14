/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178977
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
    var_12 = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-19))) + (47085333265760608LL))))), (var_5)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((1630242601U), (((/* implicit */unsigned int) (unsigned short)55374))))) <= (((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) var_5))))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                arr_7 [i_2] [i_2] [i_1] [(unsigned short)9] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) var_8)))));
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((unsigned int) 1913173540U)))));
                var_15 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) + ((-(2664724695U)))));
            }
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                var_16 = ((/* implicit */unsigned char) arr_5 [i_3] [i_1] [i_0]);
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) != (arr_8 [i_0] [i_0] [i_0]))))) : (((((/* implicit */long long int) var_8)) + (arr_2 [6])))))) || (((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [12ULL] [i_0])), (arr_1 [i_0] [i_0]))))))));
            }
            for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 3) 
            {
                arr_13 [i_4] = ((/* implicit */short) ((unsigned long long int) ((((arr_3 [i_0] [(_Bool)1] [i_4 + 1]) ? (2381793740U) : (((/* implicit */unsigned int) -254321272)))) + (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))))));
                arr_14 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_4 + 1] [i_1] [8LL])) ? (((max((var_8), (((/* implicit */int) var_4)))) / (((((/* implicit */int) (signed char)90)) << (((3297555106U) - (3297555104U))))))) : (((((((/* implicit */int) (unsigned char)243)) & (((/* implicit */int) var_10)))) << (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_0 [i_1]))))))));
            }
            /* LoopSeq 3 */
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
            {
                var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))) <= (1550130282110292851ULL)));
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2294023357U)) ? (254321262) : (((/* implicit */int) ((signed char) 1630242614U)))));
                /* LoopSeq 2 */
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max(((-(((/* implicit */int) (unsigned short)12718)))), (((/* implicit */int) arr_3 [i_1] [i_5] [13U])))))));
                    arr_19 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_6 [i_6] [i_5] [i_1] [i_0])) ? (arr_16 [i_0] [i_1] [i_6]) : (((/* implicit */int) (short)32744)))));
                }
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) (((-((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)16526))) : (5318569704332896092LL))))) * (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && ((_Bool)1)))) - (((/* implicit */int) (_Bool)1)))))));
                    var_22 = ((((/* implicit */_Bool) ((min((var_1), (((/* implicit */long long int) arr_16 [i_7] [i_0] [i_0])))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) arr_9 [i_0] [i_5] [i_5])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 1550130282110292842ULL)) ? (arr_17 [i_1] [i_1] [i_0] [i_7] [i_1] [i_5]) : (((/* implicit */int) (short)-32764))))) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-47085333265760609LL)))))) : (((unsigned long long int) 7251639951135035388LL)));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) <= (((((/* implicit */int) (_Bool)1)) << (((7168U) - (7163U)))))));
                }
            }
            for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
            {
                var_24 = ((/* implicit */signed char) ((((arr_8 [i_0] [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_8] [i_1]))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1])) ? (((/* implicit */int) arr_15 [i_0] [i_1])) : (((/* implicit */int) arr_15 [i_1] [i_1])))))));
                var_25 += ((/* implicit */unsigned char) var_5);
                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((1624502259205415089ULL) <= (((/* implicit */unsigned long long int) 2513868946U)))))));
            }
            for (unsigned short i_9 = 0; i_9 < 18; i_9 += 2) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) (short)-8192)) || (((/* implicit */_Bool) (-2147483647 - 1)))))), (-1908228574))))));
                var_28 = ((/* implicit */unsigned int) ((_Bool) ((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_9] [i_0]))))));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (short i_12 = 2; i_12 < 15; i_12 += 2) 
                {
                    for (long long int i_13 = 1; i_13 < 17; i_13 += 3) 
                    {
                        {
                            arr_38 [i_0] [i_0] [i_0] [i_0] [7LL] = ((unsigned int) arr_2 [i_13 - 1]);
                            var_29 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-121))))));
                            var_30 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) ^ (arr_5 [i_11] [i_12] [i_13 + 1])));
                        }
                    } 
                } 
            } 
            var_31 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) -1908228574)) < (((unsigned int) arr_37 [i_10] [i_10] [i_10] [i_10] [i_10]))));
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 3) 
            {
                for (unsigned char i_15 = 0; i_15 < 18; i_15 += 3) 
                {
                    {
                        var_32 ^= ((/* implicit */signed char) (~(1913173569U)));
                        var_33 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (short)-6679)) : (((/* implicit */int) arr_23 [i_0] [i_10]))));
                        var_34 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 1239863297)) : (595883625939889460ULL))) ^ (((/* implicit */unsigned long long int) ((var_8) << (((1908228573) - (1908228572))))))));
                    }
                } 
            } 
            var_35 -= ((/* implicit */_Bool) (-(((((/* implicit */int) arr_32 [i_0])) << (((((/* implicit */int) (short)-22668)) + (22687)))))));
        }
        var_36 -= (unsigned char)150;
        arr_43 [i_0] = (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-41)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))));
        var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))) | (min((var_3), (((/* implicit */int) var_0))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)15392))) : (((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0])) ? (var_1) : (arr_21 [i_0] [(signed char)17] [i_0] [i_0]))))))));
        arr_44 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) (~(arr_26 [i_0] [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned char i_16 = 3; i_16 < 24; i_16 += 2) 
    {
        var_38 -= ((/* implicit */short) ((((/* implicit */int) arr_45 [i_16 - 2] [i_16 - 3])) >> (((arr_46 [i_16]) - (723300634)))));
        arr_47 [i_16 - 2] |= ((/* implicit */unsigned int) var_4);
        arr_48 [i_16] = ((/* implicit */long long int) (~(((/* implicit */int) ((3236959326478334899LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
        var_39 = ((/* implicit */unsigned char) ((arr_46 [i_16 - 2]) - (((var_8) - (((/* implicit */int) (signed char)-120))))));
        arr_49 [(short)8] [(short)8] = ((/* implicit */short) var_2);
    }
}

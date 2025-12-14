/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144710
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
    var_10 = ((/* implicit */unsigned char) var_9);
    var_11 |= ((/* implicit */unsigned char) (~(((var_4) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)228)) >> (((var_4) - (10240745602931990095ULL))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((arr_4 [i_0 + 1] [i_1]) ? (((/* implicit */int) (short)-3473)) : (((/* implicit */int) (signed char)2))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (460505372) : (((/* implicit */int) var_8)))))))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_1);
                var_13 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) max((arr_1 [i_1]), (((/* implicit */unsigned short) arr_3 [i_0 + 1] [i_1] [i_1])))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_1 [i_0 + 1]))))) : (((((/* implicit */_Bool) (unsigned short)10171)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)10163))))));
                arr_7 [i_0 - 1] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_3 [6ULL] [i_0 - 1] [i_1])))) / (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 1; i_4 < 16; i_4 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_4 - 1] [i_3] [13LL] [i_5])) >> (((((/* implicit */int) var_3)) - (59675)))));
                        arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((var_5) % (var_5)));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (int i_7 = 2; i_7 < 15; i_7 += 4) 
                        {
                            var_15 = ((/* implicit */long long int) min((min((var_9), (((/* implicit */unsigned long long int) 8838558542080855387LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_8 [i_2]) : (arr_16 [i_7 + 1] [i_2] [i_2] [i_2])))) ? (((/* implicit */int) ((arr_10 [7LL]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2])))))) : (((/* implicit */int) arr_21 [i_7 + 1] [i_7] [i_7 - 1] [i_7] [i_7 + 1] [i_2] [i_2])))))));
                            var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)55380))))), (arr_15 [i_7] [i_3] [i_7])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_7] [i_7] [i_7 + 1] [i_4 + 1] [i_4 + 1] [i_7] [i_4 + 1]))))) : (((/* implicit */int) var_3))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) arr_20 [i_2] [i_6] [i_4] [i_2] [i_2]);
                            var_18 = ((/* implicit */unsigned int) var_9);
                            arr_28 [i_2] [i_3] [i_4 - 1] [(unsigned char)9] [i_3] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-7383538671531830575LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) (unsigned short)4060)) : (((/* implicit */int) ((((/* implicit */int) arr_27 [i_2] [i_3] [i_4] [i_6] [i_8])) >= (((/* implicit */int) (unsigned short)55373)))))))) ? (((((var_5) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)56))))) % (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) arr_11 [i_2])) ? (min((var_5), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_23 [i_2] [i_2] [i_3])) : (((/* implicit */int) arr_13 [(unsigned char)14] [i_2] [i_4] [i_2]))))))));
                        }
                        for (short i_9 = 1; i_9 < 16; i_9 += 1) 
                        {
                            var_19 = ((unsigned long long int) arr_18 [i_2] [i_2] [i_6] [i_9 + 1]);
                            var_20 = ((/* implicit */unsigned char) var_1);
                        }
                        arr_31 [i_2] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_12 [i_2] [i_3] [i_2] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4 + 1] [i_4 - 1] [i_2]))) : (((7383538671531830590LL) % (arr_14 [i_2] [i_3] [i_3] [i_6])))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_9 [i_2] [i_2])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) > (var_4))))))));
                    }
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4] [i_3] [i_2]))) : (arr_16 [i_4] [6LL] [6LL] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) < (5998165802002210394LL))))) : (((((/* implicit */_Bool) arr_8 [8ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65526)) ? (18446744073709551593ULL) : (891926213404637616ULL)))) ? (((/* implicit */int) ((-1LL) >= (8665456773306071616LL)))) : ((~(((/* implicit */int) var_0))))))) : (((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned short)55372)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_8)))))) : (var_5))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55365)) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) (_Bool)1))))) ? (min((min((-6734581867840166118LL), (((/* implicit */long long int) (unsigned short)0)))), (((((/* implicit */_Bool) -5535984146342271647LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_12 [(unsigned short)4] [i_2] [i_2] [(unsigned short)4]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [(signed char)4] [(short)14] [(short)14] [(signed char)4])) || (((/* implicit */_Bool) var_9)))))) <= (arr_12 [(unsigned short)4] [6ULL] [i_2] [(unsigned short)4]))))))))));
        var_23 = (unsigned char)201;
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned char) (signed char)-119))))) ? (((/* implicit */int) arr_34 [8ULL] [8ULL])) : (((((/* implicit */int) var_2)) / (arr_36 [i_2] [(unsigned char)0] [i_11])))))));
                    var_25 &= ((/* implicit */unsigned char) (+(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)70)), (((unsigned short) var_5)))))));
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) == (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_20 [i_2] [i_2] [i_10] [i_2] [i_2])) : (arr_36 [i_11] [i_2] [i_2])))), ((-(-5785565899677012412LL)))))));
                    var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1045174995U))));
                    arr_38 [(unsigned char)4] [(_Bool)1] [(_Bool)1] [i_2] |= ((/* implicit */unsigned long long int) arr_12 [2] [i_10] [i_10] [2]);
                }
            } 
        } 
    }
}

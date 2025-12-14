/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147014
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (~(((int) 15630795541813141870ULL)))))));
        var_21 = ((/* implicit */int) ((((arr_0 [i_0] [i_0]) == (arr_0 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15630795541813141876ULL)))))) : (arr_0 [i_0 - 1] [i_0])));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_22 = (-((+(((/* implicit */int) arr_5 [(unsigned short)12])))));
            arr_7 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (1073479680) : (1073741824)))) ? (arr_4 [(short)9] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
        }
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
        {
            var_23 = max((((var_15) >> (((((/* implicit */int) arr_9 [i_3] [i_1])) - (49829))))), (((((/* implicit */_Bool) arr_8 [i_1] [i_3] [i_1])) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : (((/* implicit */int) (unsigned short)31820)))));
            var_24 = 2530499041U;
            var_25 &= ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (unsigned char)232)))))))), (((int) min((((/* implicit */short) var_11)), (var_10))))));
            var_26 = ((/* implicit */unsigned int) arr_10 [i_1] [i_3] [i_3]);
        }
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_4 [i_4] [i_4])) || (((/* implicit */_Bool) arr_14 [i_1] [i_1]))))))) + ((+(3ULL)))));
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 22; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    for (unsigned int i_7 = 3; i_7 < 22; i_7 += 3) 
                    {
                        {
                            var_28 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_1] [20] [3] [(unsigned char)14] [i_7]))))) ? (((unsigned int) var_15)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5 - 1] [i_5 - 1] [i_5] [i_7 - 1])))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_6])) ? (12609535715104303676ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1]))))))));
                            var_29 = ((/* implicit */int) var_13);
                            var_30 = min((max((1123644658), (((/* implicit */int) var_5)))), (((/* implicit */int) ((unsigned short) 2815948531896409739ULL))));
                            var_31 = ((/* implicit */unsigned short) max((3047227922464238849ULL), (((/* implicit */unsigned long long int) -1073741820))));
                            arr_25 [i_7] [i_1] [i_5] [4] [i_7 + 1] |= ((/* implicit */int) ((((((/* implicit */_Bool) (~(9223372036854775799LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65519)) && (((/* implicit */_Bool) var_3)))))) : (((((/* implicit */unsigned long long int) var_9)) / (arr_21 [i_1] [i_4] [(unsigned short)10] [i_6]))))) >= ((~(((((/* implicit */_Bool) -1073741822)) ? (884960906125444924ULL) : (arr_10 [i_1] [i_1] [i_1])))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (+(((/* implicit */int) (short)(-32767 - 1))))))));
                arr_30 [i_8] [i_8] [i_4] [(unsigned short)17] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */long long int) 1005163339U)) == (36027697507336192LL))))));
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_10 = 4; i_10 < 20; i_10 += 1) 
                {
                    for (int i_11 = 1; i_11 < 22; i_11 += 4) 
                    {
                        {
                            arr_42 [(signed char)1] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_11 + 1])) ? (((((/* implicit */_Bool) -395294827)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)2048)))) : (((-23) & (((/* implicit */int) (unsigned short)45545))))));
                            arr_43 [i_1] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-30734))));
                            var_33 = ((((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_9] [17ULL])) ? (((/* implicit */unsigned int) arr_20 [i_11] [14U] [i_11] [i_1] [i_11 + 1])) : ((~(1073741823U))));
                        }
                    } 
                } 
                arr_44 [i_4] [i_4] [i_1] = (-(9866773590733586762ULL));
            }
            for (unsigned char i_12 = 2; i_12 < 21; i_12 += 2) 
            {
                arr_47 [i_1] [i_4] = ((/* implicit */unsigned int) arr_18 [3ULL] [i_4] [i_12] [i_12 - 2]);
                var_34 = ((/* implicit */signed char) max((((unsigned int) arr_3 [(short)22] [i_4])), (((/* implicit */unsigned int) ((((/* implicit */int) max((arr_19 [i_1] [(unsigned char)4] [i_4] [i_12]), (arr_8 [i_1] [i_1] [(short)22])))) >= (((((/* implicit */int) var_4)) - (((/* implicit */int) arr_8 [i_1] [13LL] [i_12 + 2])))))))));
                arr_48 [(short)7] [(short)7] |= ((/* implicit */unsigned int) var_19);
            }
        }
        var_35 = ((/* implicit */int) min((var_35), ((-(((/* implicit */int) (!(((((/* implicit */int) var_6)) > (((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [i_1])))))))))));
        var_36 *= ((/* implicit */short) -1073479680);
    }
    var_37 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */long long int) 523776)), (36027697507336217LL))) : (((/* implicit */long long int) (-(var_15)))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_18) : ((+(var_1))))))));
}

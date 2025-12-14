/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121136
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
    var_15 *= ((/* implicit */unsigned short) var_10);
    var_16 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))), (((((/* implicit */_Bool) var_13)) ? ((+(var_13))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)188)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_17 = ((/* implicit */short) (-(max((arr_0 [i_0 + 1] [i_0 - 2]), (((/* implicit */int) var_2))))));
            var_18 -= ((/* implicit */unsigned short) max(((+(((/* implicit */int) ((unsigned short) arr_3 [i_0] [0ULL] [i_0]))))), (((/* implicit */int) (unsigned char)169))));
            arr_5 [i_1] = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 2])))));
            var_19 += ((/* implicit */_Bool) (unsigned char)151);
        }
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) 1152921367167893504ULL))) ? (min((arr_4 [(short)6] [(short)6]), (arr_1 [i_0 - 2]))) : (((/* implicit */unsigned int) arr_3 [i_0] [(unsigned char)12] [i_0]))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 1; i_2 < 14; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 1; i_4 < 16; i_4 += 3) 
                {
                    var_21 = ((/* implicit */int) (signed char)19);
                    arr_13 [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) arr_0 [i_0 - 1] [i_2 + 2]);
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        var_22 *= ((/* implicit */unsigned int) var_8);
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)179))))), (arr_4 [i_0 - 1] [i_2]))))));
                        var_24 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) | ((+(-7956251375318521531LL)))));
                        var_25 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)75))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        arr_18 [i_0 - 2] [i_3] [i_3] [i_0 - 2] [i_0 - 2] [i_6] &= ((/* implicit */_Bool) (+(arr_4 [i_0 - 2] [i_2 + 4])));
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) var_3))));
                        var_27 = ((/* implicit */unsigned short) var_2);
                    }
                    for (short i_7 = 3; i_7 < 16; i_7 += 4) 
                    {
                        var_28 -= ((/* implicit */unsigned int) (unsigned char)192);
                        var_29 += ((/* implicit */unsigned long long int) (-(((int) (unsigned char)160))));
                        var_30 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)78)), ((short)-3043)))) : (((((/* implicit */_Bool) max(((unsigned char)70), (((/* implicit */unsigned char) var_14))))) ? (max((((/* implicit */int) arr_19 [i_0] [i_2] [i_2] [i_3] [i_4] [i_3])), (arr_0 [(unsigned char)12] [(unsigned char)12]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (var_7)))) ? (((/* implicit */int) ((6561071587048032635LL) <= (((/* implicit */long long int) arr_7 [i_2 + 3] [10U] [i_2 + 3]))))) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)27)), (var_7))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174))) : ((-(max((((/* implicit */unsigned long long int) (unsigned char)21)), (var_0))))))))));
                    }
                }
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        {
                            var_32 ^= ((/* implicit */short) ((((/* implicit */_Bool) 5038822572045170777LL)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) (short)-3049))));
                            arr_28 [i_2] [0ULL] [16] [i_8] [16] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)28966))) < (arr_10 [i_2] [i_2] [1ULL]))))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [i_0] [i_2 + 4] [i_0 - 2])) : (((/* implicit */int) arr_9 [i_2] [i_2 + 4] [i_0 - 2])))), (((((/* implicit */_Bool) 761629589)) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) (unsigned short)63531))))));
                arr_29 [i_2] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)76))) + (arr_4 [i_0] [i_3])))) || (((/* implicit */_Bool) max((-1732566394), (((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_9 [i_0] [(unsigned short)3] [i_0]), (((/* implicit */unsigned short) (unsigned char)163))))) ? (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) max(((signed char)-38), (((/* implicit */signed char) arr_19 [i_0] [i_0] [i_2 + 1] [i_2] [i_2 + 1] [i_2])))))))) : (var_0)));
                var_34 = (+(((((/* implicit */_Bool) arr_21 [8] [i_0 - 2] [i_2 + 3])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14179))))));
            }
            var_35 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_7 [i_2] [i_2] [i_2])))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) == (((/* implicit */int) (signed char)-32))))) : (((/* implicit */int) ((short) var_1)))));
        }
        var_36 = ((unsigned long long int) ((((/* implicit */_Bool) max((arr_22 [i_0] [i_0] [i_0] [(short)8]), (((/* implicit */unsigned int) var_14))))) ? (((/* implicit */unsigned long long int) arr_22 [i_0] [i_0 + 1] [i_0 + 1] [(unsigned short)12])) : (((((/* implicit */unsigned long long int) var_5)) * (var_0)))));
    }
    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 1) 
    {
        var_37 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)225)), (var_12)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (short)3041))))) : (var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_10] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) max(((short)-14164), ((short)14188)))) : (min((((/* implicit */int) var_6)), (1732566393)))))));
        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) var_5))));
    }
    /* LoopSeq 1 */
    for (int i_11 = 1; i_11 < 11; i_11 += 3) 
    {
        var_39 = ((/* implicit */int) ((short) ((signed char) (unsigned short)14015)));
        var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) min((((/* implicit */int) var_1)), ((-(((/* implicit */int) (_Bool)1)))))))));
        var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) var_6))));
        var_42 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) (unsigned short)39850)))));
    }
}

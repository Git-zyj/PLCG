/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108448
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_16 *= ((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)201))) : (4281650511U));
            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)35927)) ? (((unsigned long long int) (unsigned short)2047)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14)))));
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (6263172126582734070LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_1]))))));
            arr_5 [i_0] [i_1] = ((/* implicit */int) ((unsigned long long int) (unsigned char)194));
        }
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) ((unsigned short) arr_2 [i_0]))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))));
        }
        for (int i_3 = 3; i_3 < 19; i_3 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)62))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_3 - 1] [(unsigned char)15]))) : (3200034116U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_10)))))))));
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4695664664179468332LL)) ? (((/* implicit */int) (unsigned short)46001)) : (((/* implicit */int) (unsigned short)65521))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_3 [i_3 - 3]))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)65521)) : (((/* implicit */int) (unsigned char)69)))) : (((/* implicit */int) ((unsigned char) var_3)))));
        }
        var_21 ^= ((/* implicit */unsigned short) ((signed char) ((long long int) ((unsigned char) var_5))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((unsigned short) ((((/* implicit */_Bool) (unsigned short)45182)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))));
    }
    for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        var_23 *= ((/* implicit */unsigned long long int) ((long long int) ((unsigned int) ((signed char) (unsigned char)201))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [(unsigned short)13])) ? (((/* implicit */int) arr_15 [i_5] [i_4])) : (((/* implicit */int) ((unsigned short) var_14)))));
            /* LoopNest 2 */
            for (unsigned short i_6 = 3; i_6 < 23; i_6 += 4) 
            {
                for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    {
                        var_25 -= ((unsigned short) arr_22 [i_6 - 2] [i_6 + 1]);
                        var_26 *= ((/* implicit */unsigned int) ((unsigned char) (unsigned short)65529));
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 1; i_8 < 22; i_8 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)2047)) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) (unsigned short)31372)))))));
                            arr_26 [(unsigned char)23] [i_5] [6ULL] [(unsigned short)16] [i_8] [(unsigned short)16] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_19 [i_5] [i_6 - 1] [i_8 - 1]))) ? (((/* implicit */int) (unsigned short)46011)) : (((/* implicit */int) arr_13 [i_8 + 2]))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned char) ((signed char) (unsigned short)19130));
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_7] [i_5])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13))))) : (arr_27 [(signed char)15] [i_5] [2] [i_7] [i_6 + 1])));
                            arr_30 [i_4] [i_4] [i_4] [i_4] [i_9] = ((/* implicit */signed char) ((long long int) arr_14 [i_6 - 3]));
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((unsigned short) arr_21 [i_6] [i_6] [(signed char)0] [(unsigned char)4] [i_6] [i_6 - 2]))));
                        }
                    }
                } 
            } 
            arr_31 [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_4] [i_5] [i_5])) ? (((/* implicit */int) (unsigned short)65521)) : (((/* implicit */int) arr_19 [i_4] [i_4] [i_4])))))));
            var_31 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [(unsigned char)5] [16LL] [16LL] [21] [16LL])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_28 [(unsigned char)19] [i_5] [6LL] [i_5] [i_4] [i_5] [i_5]))))) ? (((((/* implicit */_Bool) arr_22 [i_4] [(signed char)3])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_2)))) : (arr_29 [i_5] [i_4])));
        }
        for (long long int i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            arr_35 [i_10] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned int) (unsigned char)63)));
            arr_36 [i_10] [i_10] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (unsigned short)46006))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)11475)))) : (((/* implicit */int) ((signed char) arr_18 [i_10] [i_4] [i_4])))));
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63053)) ? (((/* implicit */unsigned long long int) ((long long int) var_12))) : (((((/* implicit */_Bool) (unsigned short)14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [19] [19] [19]))) : (17993039371125844721ULL)))))) ? (((unsigned int) arr_21 [i_4] [i_4] [i_4] [(unsigned char)14] [i_10] [i_10])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65524)) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_6)) : (arr_29 [(unsigned short)23] [i_4]))) : (((/* implicit */int) ((unsigned char) (unsigned char)228))))))));
        }
        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)65516))) ? (((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)157))) : (((((/* implicit */_Bool) (unsigned char)53)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(signed char)19]))))))) : (((/* implicit */unsigned long long int) ((long long int) ((long long int) var_2))))));
    }
    var_34 = ((/* implicit */unsigned char) var_7);
    var_35 = ((/* implicit */unsigned short) var_12);
}

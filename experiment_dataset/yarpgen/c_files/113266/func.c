/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113266
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
    var_20 ^= ((/* implicit */signed char) (short)31741);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_21 &= ((/* implicit */long long int) (signed char)32);
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    arr_7 [i_2] [i_2] [4U] = ((/* implicit */int) max((((((/* implicit */_Bool) ((long long int) 984978749107925691LL))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_19))))) : (min((-7821702907519880734LL), (var_11))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-50)) && (((/* implicit */_Bool) -984978749107925664LL)))))));
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_1] [4LL])) && (((/* implicit */_Bool) (~(((/* implicit */int) var_3))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (short)28854))))))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 10; i_3 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */short) (((-(arr_5 [i_2] [i_2] [i_2]))) % (((/* implicit */unsigned long long int) arr_8 [i_3]))));
                        arr_10 [i_2] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) ((var_0) & (arr_8 [i_0])))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-758))))) : (((((/* implicit */_Bool) (unsigned char)75)) ? (984978749107925692LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))))))) % (((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */long long int) 1199746146)) % (-7821702907519880736LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)75))))))))));
                    }
                    for (signed char i_4 = 2; i_4 < 10; i_4 += 2) /* same iter space */
                    {
                        var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (arr_4 [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))))))));
                        var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? ((~(var_6))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)31741)) && (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0]))))))))));
                        arr_13 [i_2] [7U] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) -984978749107925662LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)31741))) : (4277071626496931221LL)))))) && (((/* implicit */_Bool) (((-(((/* implicit */int) (short)-31753)))) * ((+(((/* implicit */int) arr_1 [1U])))))))));
                    }
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_18))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 2] [(signed char)10] [i_0 + 1])) + (((/* implicit */int) (unsigned char)240))))) : (984978749107925692LL)))) && (((arr_9 [i_2] [i_2] [i_0 + 1] [6LL]) && (arr_9 [i_2] [i_0] [i_0 - 1] [i_0])))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
                {
                    arr_16 [i_0] = ((/* implicit */_Bool) -7821702907519880734LL);
                    var_27 -= ((/* implicit */int) (unsigned char)212);
                    var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 2]))));
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-758)) && (((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) var_15))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
                {
                    var_30 = (signed char)106;
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) arr_0 [i_6])), (984978749107925701LL))), (((/* implicit */long long int) (signed char)-107))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [(signed char)3] [(unsigned short)4] [i_6])) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (unsigned char)240)))))))) : (((/* implicit */int) (signed char)-107))));
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
                {
                    var_32 = ((/* implicit */_Bool) min((var_32), (((((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_0]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)107)) ? (arr_3 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (short)-15384))))))))));
                    arr_22 [4ULL] [i_1] [i_7] &= ((/* implicit */_Bool) arr_1 [i_0 - 1]);
                }
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1] [i_0 - 1] [i_0 + 2] [i_0 + 1]))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0 + 1])) || (((/* implicit */_Bool) arr_18 [i_0 - 1])))))));
            }
        } 
    } 
    var_34 = var_9;
}

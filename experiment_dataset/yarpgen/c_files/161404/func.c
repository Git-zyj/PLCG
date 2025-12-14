/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161404
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(arr_3 [i_0] [i_0])))), (((arr_3 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (arr_2 [i_0] [i_0])))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_15 ^= ((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2]);
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+((-(((/* implicit */int) arr_6 [i_2] [i_2] [i_1]))))))) == (max((((var_6) & (var_6))), (((/* implicit */long long int) max(((signed char)64), (((/* implicit */signed char) (_Bool)1)))))))));
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((unsigned short) (signed char)67)))));
                        var_18 -= ((/* implicit */long long int) arr_4 [(signed char)3]);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
            {
                var_19 *= ((/* implicit */long long int) (((+((-(((/* implicit */int) arr_13 [i_1] [i_4])))))) * ((+(((/* implicit */int) var_12))))));
                var_20 = ((/* implicit */unsigned long long int) arr_9 [i_4] [i_1] [i_0]);
            }
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) (short)-12081))))) ? (((/* implicit */int) arr_14 [i_5] [i_1] [i_1] [i_0])) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_15 [i_1] [i_1])) && (((/* implicit */_Bool) 3590197813U)))) && (arr_0 [i_0]))))));
                var_22 = ((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_5])) == (((/* implicit */int) var_13)))) ? (((arr_0 [i_0]) ? (((/* implicit */int) arr_5 [i_5])) : (((/* implicit */int) arr_5 [i_0])))) : (((/* implicit */int) max((arr_0 [(_Bool)1]), (arr_5 [i_0]))))));
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [(signed char)3] [3LL] [i_0]))))) || (((/* implicit */_Bool) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                var_24 = ((/* implicit */unsigned short) (signed char)-67);
            }
            arr_16 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_1] [(short)10] [i_0]))))), (((unsigned long long int) (_Bool)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1]))) : (arr_8 [i_1] [i_0] [i_1]))))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-32)))))))));
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (unsigned short)13275)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_1]))) : (var_11)))))));
        }
        for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            var_26 -= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)24941))));
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8665567332546582722LL)) ? (((/* implicit */int) (unsigned short)40594)) : (((/* implicit */int) (unsigned short)52261))))) ? (((/* implicit */int) arr_7 [i_6] [i_0])) : (((/* implicit */int) var_3)))))));
        }
        /* vectorizable */
        for (unsigned short i_7 = 4; i_7 < 11; i_7 += 4) 
        {
            var_28 = ((/* implicit */_Bool) (signed char)0);
            /* LoopSeq 3 */
            for (signed char i_8 = 2; i_8 < 11; i_8 += 4) 
            {
                arr_24 [i_8] = ((/* implicit */unsigned long long int) ((long long int) arr_18 [i_7 - 2] [i_8 + 2] [i_8 - 2]));
                var_29 = ((/* implicit */_Bool) ((arr_21 [i_0]) ? (((/* implicit */int) arr_21 [i_7 - 4])) : (((/* implicit */int) arr_21 [i_7 - 1]))));
                /* LoopSeq 1 */
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    var_30 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned short)52290)))) & (((/* implicit */int) arr_23 [i_7 - 1]))));
                    arr_27 [i_9] [i_8 + 1] [i_8] [(_Bool)1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_0] [i_0]))))) ? (((/* implicit */int) ((signed char) arr_3 [i_7] [i_7]))) : (((/* implicit */int) ((_Bool) (unsigned char)41)))));
                    var_31 = ((/* implicit */_Bool) min((var_31), ((!(arr_26 [i_8 + 1] [i_7 + 2] [i_7 - 1] [i_7 - 1])))));
                }
            }
            for (unsigned short i_10 = 1; i_10 < 10; i_10 += 3) 
            {
                var_32 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)52742)) || (((/* implicit */_Bool) (unsigned short)24939))));
                var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? ((~(4108216215U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                arr_30 [i_0] [i_0] [i_0] [i_0] = ((_Bool) arr_2 [i_0] [6ULL]);
            }
            for (long long int i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                var_34 |= ((/* implicit */unsigned char) ((unsigned int) (unsigned short)65535));
                var_35 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (unsigned short)25085)) : (((/* implicit */int) (signed char)16))))));
                var_36 = ((/* implicit */unsigned long long int) (!(arr_4 [i_11])));
                arr_33 [i_0] [(_Bool)1] [i_11] = ((/* implicit */signed char) arr_2 [i_11] [i_0]);
            }
        }
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
    {
        var_37 |= var_5;
        arr_37 [i_12] [i_12] = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) arr_29 [i_12] [i_12])), (((unsigned char) ((((/* implicit */_Bool) var_4)) ? (arr_32 [i_12] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
        var_38 = ((/* implicit */unsigned short) min((var_38), (arr_6 [i_12] [i_12] [i_12])));
        arr_38 [i_12] = var_3;
    }
    var_39 = (-(var_7));
    var_40 = ((/* implicit */unsigned short) (((_Bool)1) || (((/* implicit */_Bool) var_1))));
    var_41 = ((/* implicit */unsigned long long int) ((unsigned short) var_10));
}

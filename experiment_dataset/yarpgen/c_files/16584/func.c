/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16584
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (+((+(var_4))))))));
                var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((int) arr_3 [i_0] [i_1]))) : (((((/* implicit */_Bool) var_15)) ? (3651087488019702292ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) ? (max((((/* implicit */long long int) ((short) var_2))), (max((var_0), (((/* implicit */long long int) arr_4 [(signed char)14])))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_13)))))));
                var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (var_16) : (((/* implicit */int) var_15))))) : (var_9)));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
    {
        var_20 += ((/* implicit */long long int) (_Bool)0);
        var_21 = ((/* implicit */signed char) arr_4 [i_2]);
        arr_10 [i_2] [i_2] = ((/* implicit */long long int) ((_Bool) (((+(((/* implicit */int) var_12)))) > (((((/* implicit */int) var_11)) & (((/* implicit */int) var_13)))))));
        var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)5149)), (((arr_0 [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))), (((((((/* implicit */unsigned int) var_16)) == (var_3))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_8 [i_2])))));
        arr_11 [i_2] = ((/* implicit */long long int) ((int) var_10));
    }
    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            arr_17 [(_Bool)1] [(_Bool)1] [i_4] = ((/* implicit */unsigned char) var_6);
            var_23 ^= ((/* implicit */short) max((((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */int) var_13)) : (var_7))), (((/* implicit */int) ((short) (_Bool)0)))));
        }
        for (unsigned char i_5 = 1; i_5 < 12; i_5 += 3) 
        {
            arr_22 [(unsigned char)9] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((~((~(((/* implicit */int) arr_19 [i_5] [i_3] [i_5])))))) : (((/* implicit */int) ((_Bool) ((unsigned int) var_5))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                var_24 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (var_6) : (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (short)-1)))))));
                var_25 ^= var_16;
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    arr_27 [i_7] [i_5] [i_3] = ((/* implicit */_Bool) var_3);
                    var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */int) arr_21 [2])) : (((/* implicit */int) var_1))));
                    var_27 = var_0;
                }
                var_28 = ((/* implicit */signed char) max((var_9), (((/* implicit */long long int) (+(var_10))))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_9 = 1; i_9 < 12; i_9 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        var_29 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))));
                        arr_38 [i_3] [i_5] [i_8] [i_8] [i_10] [i_5] = ((/* implicit */_Bool) var_1);
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) var_14))));
                    }
                    var_31 = ((/* implicit */unsigned int) var_8);
                }
                for (unsigned int i_11 = 0; i_11 < 13; i_11 += 3) 
                {
                    var_32 = ((/* implicit */signed char) var_12);
                    arr_42 [(unsigned short)0] |= max((((((arr_39 [4] [i_5 - 1] [i_8] [i_11]) ? (var_16) : (((/* implicit */int) var_8)))) & (((/* implicit */int) var_15)))), (((/* implicit */int) ((unsigned char) var_3))));
                    var_33 += ((/* implicit */short) ((unsigned int) -1188037625));
                    var_34 = ((/* implicit */unsigned short) min((var_34), (var_14)));
                }
                var_35 = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) max((var_8), (((/* implicit */unsigned short) var_5))))), ((-(arr_16 [i_3] [2LL]))))), (((/* implicit */unsigned int) max((((/* implicit */int) var_13)), (var_6))))));
                arr_43 [i_3] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_9)) : ((~(arr_8 [1U])))));
            }
            arr_44 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_12 [i_5 - 1] [i_5 - 1]), (((/* implicit */long long int) var_5))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))));
        }
        for (short i_12 = 0; i_12 < 13; i_12 += 3) 
        {
            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35098))) | (max((var_10), (((/* implicit */unsigned int) (unsigned short)0))))));
            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((long long int) arr_18 [i_3] [i_12])) : (((/* implicit */long long int) var_2))));
            var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) arr_21 [4ULL]))));
            var_39 *= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_16 [i_3] [i_12])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (var_8))))))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_40 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_12))));
            arr_51 [i_3] [i_3] [i_13] = ((/* implicit */_Bool) var_2);
            var_41 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_3) : (arr_6 [i_3]))))));
            var_42 += ((/* implicit */int) (~((~((~(arr_35 [i_3] [(unsigned char)1] [i_3] [i_13] [6U] [i_13])))))));
            var_43 = ((/* implicit */long long int) (+((-(max((var_7), (var_16)))))));
        }
        arr_52 [i_3] [i_3] = ((/* implicit */short) max((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8)))))));
        /* LoopNest 2 */
        for (short i_14 = 0; i_14 < 13; i_14 += 3) 
        {
            for (short i_15 = 1; i_15 < 10; i_15 += 3) 
            {
                {
                    var_44 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) arr_4 [i_15 + 3])) == (((/* implicit */int) arr_4 [i_15 + 3])))));
                    arr_58 [i_3] [i_15] [i_15] = ((/* implicit */int) arr_47 [i_15] [i_15]);
                    arr_59 [i_3] [i_15] [i_15] = ((/* implicit */signed char) var_6);
                }
            } 
        } 
    }
}

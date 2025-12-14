/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167119
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
    var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((11280953185902272612ULL) > (((/* implicit */unsigned long long int) 4194303U)))) ? (max((7641420043211155736LL), (((/* implicit */long long int) (unsigned short)65535)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_17)) > (((/* implicit */int) var_4))))))))) ? (((/* implicit */int) ((max((-1021906542), (-1021906542))) >= (((((/* implicit */int) var_11)) % (((/* implicit */int) var_10))))))) : (((((1021906549) * (((/* implicit */int) var_8)))) / (var_6)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_20 |= ((int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2])) || (((/* implicit */_Bool) arr_3 [(_Bool)1] [i_1] [(_Bool)1]))));
                    arr_8 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) var_9);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            var_21 = ((/* implicit */long long int) 1021906542);
            arr_12 [i_0] [i_0] = ((/* implicit */int) ((arr_2 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
        }
        for (long long int i_4 = 2; i_4 < 13; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    {
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((_Bool) 1023)))));
                        var_23 = ((/* implicit */unsigned int) var_0);
                    }
                } 
            } 
            arr_23 [i_0] [i_4] [i_4] &= ((/* implicit */short) ((int) arr_1 [i_4 + 1] [i_4]));
            var_24 = ((/* implicit */unsigned long long int) var_0);
            arr_24 [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((8743509694486477825LL) % (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_15))));
        }
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
    {
        var_25 -= ((/* implicit */_Bool) ((-1021906551) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)91)))))));
        /* LoopSeq 2 */
        for (int i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_33 [13] [i_9] [i_8] [i_7] = ((/* implicit */_Bool) -1021906542);
                arr_34 [4LL] [i_9] [i_9] [i_7] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)19961)) ? (1021906550) : (((/* implicit */int) var_18)))) & (((((/* implicit */int) (unsigned short)57344)) % (1021906541)))));
                var_26 = ((/* implicit */int) ((unsigned long long int) ((int) var_0)));
            }
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    for (short i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((signed char) var_6)))));
                            var_28 &= ((/* implicit */unsigned short) var_2);
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)3)) ? (-1021906551) : (1023)));
                            var_30 -= ((/* implicit */unsigned short) ((signed char) arr_0 [i_10 - 1]));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) var_18)) > (var_6))))));
                var_32 = ((/* implicit */unsigned int) ((int) var_8));
            }
            var_33 = ((/* implicit */_Bool) var_1);
            arr_43 [i_8] = ((/* implicit */_Bool) ((long long int) var_16));
        }
        for (long long int i_13 = 2; i_13 < 10; i_13 += 1) 
        {
            /* LoopNest 2 */
            for (short i_14 = 1; i_14 < 13; i_14 += 3) 
            {
                for (unsigned int i_15 = 0; i_15 < 14; i_15 += 1) 
                {
                    {
                        arr_53 [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_7])) / (((/* implicit */int) arr_41 [i_7] [i_13] [i_14] [i_15] [i_15]))))) || (((/* implicit */_Bool) 2305843009205305344LL))));
                        var_34 *= ((/* implicit */signed char) ((((/* implicit */int) var_18)) >= (((/* implicit */int) arr_15 [i_14 + 1]))));
                        arr_54 [i_14] [i_13] [i_13] [i_13] = ((/* implicit */signed char) ((unsigned short) arr_42 [i_13 - 1] [i_13 + 1] [i_13] [i_13 + 3] [i_13] [i_13] [i_13]));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 14; i_16 += 4) 
            {
                for (long long int i_17 = 1; i_17 < 11; i_17 += 2) 
                {
                    {
                        var_35 = ((/* implicit */unsigned char) arr_58 [i_7] [i_13] [i_16] [i_17 + 1]);
                        arr_61 [i_17] [i_17] [5U] [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_58 [i_17 + 2] [i_17] [i_17] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((long long int) (_Bool)1))));
                    }
                } 
            } 
            arr_62 [i_7] [i_13] [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_3))))) / (((((/* implicit */unsigned int) -1021906551)) * (var_7)))));
            var_36 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_45 [i_7]))) <= (arr_60 [i_13 + 2] [(unsigned short)5] [i_13] [i_13])));
            var_37 = var_10;
        }
        var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_7] [i_7])) ? (arr_9 [i_7] [i_7]) : (arr_9 [i_7] [i_7]))))));
    }
}

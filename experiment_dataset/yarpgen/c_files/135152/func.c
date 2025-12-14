/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135152
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) var_7)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) ((arr_0 [i_0]) >> (((/* implicit */int) var_5))))));
        arr_3 [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_0 [i_0]) : (((/* implicit */int) (_Bool)1))))) ^ (arr_1 [i_0] [i_0]));
        var_12 -= ((/* implicit */long long int) (-(((/* implicit */int) var_10))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
        {
            var_13 -= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (arr_0 [i_0])));
            var_14 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [(_Bool)1] [(signed char)6])) ? (((/* implicit */int) ((short) (unsigned char)32))) : ((+(arr_0 [i_0])))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) var_6)))));
        }
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
        {
            arr_12 [i_2] [i_0] = (((~(arr_1 [(short)16] [i_2]))) | (arr_5 [i_0]));
            arr_13 [i_0] &= ((/* implicit */unsigned char) ((short) (+(arr_1 [i_0] [i_2]))));
        }
        var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) arr_10 [i_0] [i_0]))));
    }
    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
        var_17 = ((/* implicit */signed char) arr_15 [i_3]);
    }
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_22 [i_5] [i_4] [i_4] &= ((/* implicit */unsigned long long int) ((unsigned int) ((((((/* implicit */int) (unsigned char)223)) != (((/* implicit */int) arr_21 [i_4])))) ? (((((/* implicit */int) arr_18 [i_4] [i_5])) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)-25509)))));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_8)) & (((/* implicit */int) arr_18 [(unsigned short)1] [i_5])))), ((-(((/* implicit */int) arr_18 [i_4] [i_5])))))))));
            /* LoopSeq 2 */
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                var_19 += ((_Bool) ((((((/* implicit */_Bool) (short)-3586)) ? (((/* implicit */int) arr_26 [i_4] [i_5] [i_4] [i_4])) : (((/* implicit */int) var_8)))) <= (((((/* implicit */int) (unsigned short)28167)) >> (((-6497857936612018053LL) + (6497857936612018070LL)))))));
                var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)3600))));
                arr_27 [i_5] [17ULL] [i_6] [4ULL] = ((/* implicit */_Bool) min((((((var_11) ^ (((/* implicit */unsigned long long int) 6497857936612018054LL)))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_4] [i_5] [(unsigned short)0])) || (((/* implicit */_Bool) arr_19 [i_5] [i_6]))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_21 [i_4])) || ((_Bool)1))) || (((/* implicit */_Bool) min((((/* implicit */signed char) arr_18 [(_Bool)0] [i_5])), (var_8)))))))));
                var_21 &= (_Bool)1;
            }
            for (short i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((short) (unsigned short)18349))) ? (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) var_6))))) : (((((/* implicit */_Bool) 4294967276U)) ? (15707808579993765475ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4] [i_5] [i_7])))))))))));
                var_23 |= ((/* implicit */unsigned long long int) arr_28 [(_Bool)1] [i_5] [i_5]);
            }
        }
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) ((signed char) arr_14 [i_4] [i_8]));
            arr_34 [i_4] [i_8] [i_8] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (((0ULL) >> (((((/* implicit */int) arr_26 [i_4] [i_4] [i_4] [i_4])) - (7360)))))));
        }
        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            arr_37 [i_9] [i_4] [i_9] = (_Bool)0;
            var_25 = ((/* implicit */short) ((304269393U) >= (var_7)));
            arr_38 [i_9] [i_9] = ((/* implicit */unsigned long long int) arr_19 [i_9] [i_9]);
            var_26 |= ((/* implicit */unsigned char) (unsigned short)1817);
        }
        arr_39 [i_4] |= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) arr_15 [i_4])) << (((((/* implicit */int) arr_15 [i_4])) - (15055))))));
        /* LoopNest 3 */
        for (long long int i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                for (short i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    {
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((unsigned char) var_10)))));
                        var_28 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_30 [i_4] [i_12]))));
                    }
                } 
            } 
        } 
        var_29 *= ((/* implicit */unsigned long long int) (~(((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)138)))))));
    }
    for (int i_13 = 0; i_13 < 17; i_13 += 3) 
    {
        var_30 += ((/* implicit */unsigned short) ((int) ((long long int) min((arr_4 [i_13]), (((/* implicit */unsigned char) arr_24 [i_13] [i_13] [i_13] [i_13]))))));
        arr_51 [i_13] = ((/* implicit */_Bool) arr_26 [(unsigned char)15] [i_13] [i_13] [i_13]);
        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_29 [i_13] [i_13] [i_13] [i_13]))) || (((/* implicit */_Bool) arr_29 [i_13] [i_13] [i_13] [i_13]))));
        arr_52 [i_13] [i_13] = ((/* implicit */unsigned int) var_4);
        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_13] [i_13] [i_13]))))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) arr_16 [i_13] [i_13]))))))))));
    }
    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) var_11))));
    var_34 = (((_Bool)0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-9223372036854775786LL)))) : (((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)88)))))));
}

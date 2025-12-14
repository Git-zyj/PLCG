/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122435
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
    var_19 = ((/* implicit */unsigned char) ((unsigned long long int) var_17));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_20 += arr_1 [i_0];
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_7 [i_1] = ((/* implicit */short) ((unsigned long long int) arr_0 [i_1]));
            arr_8 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0])))))))));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((int) var_12)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) var_4)))))) : (arr_5 [i_1] [i_0])));
                var_22 -= ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) (~(var_12)))) ^ (arr_4 [i_0])))));
            }
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_23 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 18446744073709551615ULL))) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0]))))))))));
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (var_5)));
            var_25 = ((/* implicit */unsigned int) arr_5 [i_3] [i_0]);
        }
        var_26 ^= ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_5 [i_0] [i_0])))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_6 = 1; i_6 < 17; i_6 += 2) 
            {
                var_27 = ((/* implicit */unsigned char) arr_18 [i_6 + 1] [i_4]);
                var_28 = ((_Bool) arr_9 [i_4] [i_5] [i_4] [i_6 - 1]);
                var_29 -= ((/* implicit */short) ((int) var_14));
            }
            var_30 = ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4]))) : (arr_16 [i_5] [i_4]));
            arr_22 [i_4] [i_5] = ((unsigned char) ((unsigned long long int) var_6));
        }
        var_31 = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_17)))));
        var_32 ^= ((/* implicit */int) ((short) (~(((/* implicit */int) var_0)))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            var_33 = ((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_6)))));
            /* LoopSeq 1 */
            for (long long int i_9 = 1; i_9 < 15; i_9 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_10 = 3; i_10 < 17; i_10 += 3) 
                {
                    var_34 = ((/* implicit */unsigned long long int) arr_2 [i_9 + 2] [i_7]);
                    var_35 = ((/* implicit */_Bool) ((long long int) ((unsigned long long int) arr_6 [i_7] [i_9 + 3] [i_10 - 1])));
                }
                var_36 = ((/* implicit */unsigned long long int) arr_2 [i_9 + 3] [i_7]);
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 18; i_11 += 3) 
                {
                    for (short i_12 = 1; i_12 < 15; i_12 += 4) 
                    {
                        {
                            arr_36 [i_7] [i_8] [i_12 + 2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_33 [i_8]))));
                            var_37 *= ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_14 [i_11])) || ((!(((/* implicit */_Bool) arr_6 [i_12 + 1] [i_11] [i_7]))))))));
                            arr_37 [i_7] [i_8] [i_12 + 2] [i_11] [i_12] [i_12 - 1] = ((/* implicit */long long int) ((unsigned char) arr_5 [i_7] [i_7]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_13 = 1; i_13 < 16; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 1) 
                    {
                        {
                            arr_43 [i_8] = ((unsigned long long int) ((unsigned char) arr_42 [i_13 + 2] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 - 1] [i_13 + 1]));
                            var_38 &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_5)))) ? ((-(var_11))) : (((/* implicit */long long int) arr_26 [i_13 + 2]))))));
                            var_39 ^= ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_29 [i_7] [i_8] [i_8] [i_8])))) * (var_7)))));
                            var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((int) ((((/* implicit */_Bool) (signed char)-121)) ? (15ULL) : (8ULL)))))));
                            arr_44 [i_9 + 2] [i_8] [i_9 + 3] [i_9 + 1] [i_9 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_8] [i_9 - 1]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_13 + 2] [i_13 + 2] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_8]))) ^ (((((/* implicit */_Bool) arr_11 [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_26 [i_14])))))));
                        }
                    } 
                } 
                arr_45 [i_7] [i_8] [i_8] = ((/* implicit */long long int) (-(((/* implicit */int) ((short) ((signed char) var_17))))));
            }
            arr_46 [i_8] = ((/* implicit */unsigned long long int) (!(((1ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
        }
        var_41 = ((/* implicit */unsigned char) arr_11 [i_7]);
    }
    var_42 = (!(((/* implicit */_Bool) ((unsigned long long int) (+(var_12))))));
}

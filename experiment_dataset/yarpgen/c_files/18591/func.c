/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18591
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (~((((~(arr_1 [i_0]))) & (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0]))))))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_3] [i_2 - 1] [i_1] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) max((var_8), (var_10)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_5))) : (((((/* implicit */long long int) arr_7 [i_1])) % (var_11))))));
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_6 [i_3] [i_1] [i_3]))))) ? (((/* implicit */int) arr_3 [i_3] [i_2 + 2])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 3; i_4 < 14; i_4 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_5 = 1; i_5 < 14; i_5 += 4) /* same iter space */
        {
            var_18 = max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [2LL]))))), (arr_6 [(unsigned char)6] [i_4] [(unsigned char)6]));
            var_19 = ((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_14 [i_5] [i_5])), (var_9)))), (-1183518089129294604LL)));
        }
        /* vectorizable */
        for (signed char i_6 = 1; i_6 < 14; i_6 += 4) /* same iter space */
        {
            var_20 = ((((/* implicit */_Bool) arr_3 [(signed char)2] [(signed char)2])) ? (var_5) : (arr_1 [i_6]));
            /* LoopSeq 3 */
            for (unsigned int i_7 = 1; i_7 < 12; i_7 += 1) 
            {
                var_21 = ((/* implicit */unsigned char) (signed char)-19);
                /* LoopSeq 1 */
                for (long long int i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    arr_25 [i_8] [i_8] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_7]))));
                    var_22 += ((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_7 + 1] [i_7 + 2]))));
                }
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_6 + 1])) && (((/* implicit */_Bool) var_15))));
            }
            for (signed char i_9 = 0; i_9 < 15; i_9 += 4) /* same iter space */
            {
                var_24 ^= ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
                /* LoopSeq 4 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_25 ^= ((/* implicit */signed char) ((((((((/* implicit */int) var_1)) % (arr_7 [i_9]))) + (2147483647))) >> ((+(((/* implicit */int) var_12))))));
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_10)))) ? ((~(var_11))) : (((/* implicit */long long int) var_9)))))));
                    /* LoopSeq 1 */
                    for (signed char i_11 = 3; i_11 < 13; i_11 += 1) 
                    {
                        arr_35 [i_4 - 2] [i_4] [14U] [i_4] [i_4] = (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_9] [i_10] [i_11]))))) : (var_6));
                        arr_36 [i_11] [i_10] [(signed char)11] [i_6] [(signed char)10] [i_4] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) & ((~(var_2)))));
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) var_2))));
                    }
                }
                for (unsigned char i_12 = 3; i_12 < 13; i_12 += 2) 
                {
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_12 + 1] [i_6 + 1] [i_6 - 1] [(_Bool)1] [i_4 - 3])) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_4) : (arr_22 [i_4 - 1] [i_9] [(_Bool)1] [i_12 - 3])))))))));
                    var_29 = ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) -2053538868)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_8)));
                    var_31 = ((/* implicit */long long int) var_14);
                }
                for (unsigned int i_13 = 0; i_13 < 15; i_13 += 4) 
                {
                    var_32 = ((/* implicit */signed char) ((unsigned int) arr_31 [i_13] [i_9]));
                    var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_4 - 2]))));
                }
                for (unsigned int i_14 = 2; i_14 < 11; i_14 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_15 = 0; i_15 < 15; i_15 += 1) 
                    {
                        arr_46 [i_4 + 1] [i_4 + 1] [i_15] [i_15] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)10)) * (((/* implicit */int) arr_42 [i_15] [i_15]))))) ? ((+(var_10))) : ((~(var_6))));
                        var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_18 [i_4 - 1] [i_9] [i_14] [i_15]))));
                        var_35 = (-(((unsigned int) var_10)));
                        var_36 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_44 [i_4] [i_6 - 1] [i_6] [i_9] [i_9] [14LL])) ^ (((/* implicit */int) arr_8 [14] [i_15] [i_15]))));
                    }
                    var_37 = ((/* implicit */unsigned char) ((int) arr_26 [i_4] [i_4 - 3] [i_6 - 1] [i_14 + 2]));
                }
            }
            for (signed char i_16 = 0; i_16 < 15; i_16 += 4) /* same iter space */
            {
                arr_50 [i_6 + 1] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_10)))) ? (((((/* implicit */_Bool) 3303503553U)) ? (var_2) : (((/* implicit */long long int) arr_7 [i_16])))) : ((~(var_6)))));
                arr_51 [i_16] [i_16] [i_6] [i_4 - 1] = ((long long int) arr_39 [i_16] [i_6 + 1] [i_6] [10U] [i_4 + 1] [i_4]);
            }
            var_38 = ((/* implicit */signed char) ((((/* implicit */long long int) ((unsigned int) var_9))) == ((+(var_2)))));
            arr_52 [i_4] [i_6] = ((/* implicit */_Bool) ((((var_13) ? (((/* implicit */long long int) 0U)) : (var_11))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) < (var_15)))))));
            arr_53 [i_4 + 1] [i_6] [i_6] = ((/* implicit */unsigned int) var_12);
        }
        for (long long int i_17 = 0; i_17 < 15; i_17 += 1) 
        {
            arr_57 [i_4] [(_Bool)1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_19 [i_4 - 1] [(signed char)5] [i_4 - 3] [i_17])))));
            var_39 *= ((/* implicit */unsigned int) var_7);
        }
        var_40 = ((/* implicit */unsigned int) arr_18 [i_4 - 3] [i_4] [i_4] [i_4]);
    }
    var_41 = ((/* implicit */unsigned int) (+(var_5)));
}

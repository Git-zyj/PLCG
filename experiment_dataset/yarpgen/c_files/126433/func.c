/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126433
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
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (-((-(var_4))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((arr_1 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-15))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [(signed char)2])))))))) ? (((/* implicit */long long int) (-(arr_0 [i_0])))) : (arr_1 [i_0])));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 283726776524341248LL)))) ? (arr_1 [i_0]) : (arr_1 [(signed char)8])))) ? (var_15) : ((~(arr_1 [i_0])))));
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (signed char)-55);
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((((/* implicit */int) (signed char)15)) ^ (((/* implicit */int) (short)3))))) & (min((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0])), (arr_4 [(unsigned short)16] [i_1] [i_1]))))) <= (((/* implicit */long long int) min((((/* implicit */int) var_9)), ((+(((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                var_23 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-111)) ^ (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_1 + 2]))));
                var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 5042322881813504935LL))));
            }
        }
        for (int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            var_25 = ((/* implicit */signed char) (unsigned char)54);
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_4 = 3; i_4 < 21; i_4 += 2) /* same iter space */
            {
                var_26 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)111))) & (var_18)));
                arr_14 [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) 1108307720798208LL);
                arr_15 [i_4] [i_0] = ((/* implicit */unsigned short) ((arr_4 [i_3] [i_3] [i_3]) <= (arr_4 [i_3] [i_0] [20])));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 23; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        {
                            var_27 ^= ((/* implicit */unsigned char) (((+(var_3))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-111)))));
                            arr_21 [i_0] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)63)))))));
                            var_28 = arr_10 [i_6];
                            var_29 = ((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)208))) <= (var_7)))));
                        }
                    } 
                } 
            }
            for (signed char i_7 = 3; i_7 < 21; i_7 += 2) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_3] [i_7 - 2] [i_7 - 2]))) : (arr_4 [i_3] [i_3] [i_3]))) ^ (((/* implicit */long long int) max((((/* implicit */int) arr_17 [i_0] [i_3] [i_3] [i_3] [6U] [i_7])), ((-(((/* implicit */int) (unsigned char)208)))))))));
                arr_25 [i_0] [i_0] [(unsigned char)1] [i_3] = ((/* implicit */long long int) (unsigned char)78);
            }
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_3]))) <= (var_18))))))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_3] [i_3])))));
        }
        for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            var_32 = ((/* implicit */_Bool) (~(arr_4 [i_8] [i_0] [i_0])));
            var_33 = ((/* implicit */short) ((((unsigned int) arr_23 [i_0] [i_0] [i_8] [i_8])) <= (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) (unsigned short)40162))))))));
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) 6735121575856012011LL))));
                var_35 = ((/* implicit */unsigned char) ((int) ((_Bool) (short)21466)));
                /* LoopSeq 3 */
                for (unsigned char i_10 = 2; i_10 < 20; i_10 += 3) 
                {
                    arr_32 [i_8] [i_10] [i_9] [i_10] = ((/* implicit */signed char) arr_22 [i_0] [0] [i_9] [(short)23]);
                    var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (short)(-32767 - 1)))) <= ((-(((/* implicit */int) (unsigned char)200)))))))));
                    var_37 = ((/* implicit */int) ((((/* implicit */_Bool) ((((arr_12 [i_8]) & (arr_9 [i_9]))) & (arr_18 [i_8] [i_10 + 3] [i_10] [i_10] [i_10] [i_10 + 4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (+(0)))))) : (((unsigned int) (short)32589))));
                    var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) 8710222515556204802LL)) ? (((/* implicit */unsigned long long int) ((int) (signed char)-31))) : (8191ULL)));
                }
                /* vectorizable */
                for (long long int i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        arr_37 [i_0] [i_8] [i_9] [10LL] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_12])) : ((+(((/* implicit */int) (signed char)-73))))));
                        arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)13] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_24 [i_8] [i_9])) ? (arr_9 [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_9] [i_11])))))));
                    }
                    for (int i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        var_39 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_9] [i_13])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)2213)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)190))) : (arr_7 [i_9] [i_9] [i_11] [i_13])))) : (arr_16 [i_0])));
                        var_40 = ((/* implicit */short) (unsigned char)223);
                    }
                    for (signed char i_14 = 2; i_14 < 22; i_14 += 2) 
                    {
                        arr_44 [i_0] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_10)) ? (979671036) : (-1948383018))));
                        arr_45 [(unsigned short)6] [i_8] [(unsigned short)6] [i_9] [(unsigned short)6] [i_8] = ((/* implicit */int) (((+(arr_7 [i_14] [i_14] [i_9] [i_11]))) <= (((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_0] [i_8] [i_9] [i_8] [i_11] [i_14])) & (((/* implicit */int) arr_41 [i_0] [i_0] [i_9] [i_14 - 1])))))));
                        var_41 = ((/* implicit */int) ((unsigned short) arr_31 [14LL] [i_0]));
                    }
                    var_42 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (var_18)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)105))) ^ (-6095040661230717466LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_8] [i_9] [i_11])))));
                    arr_46 [i_0] [i_0] [i_0] = ((/* implicit */int) ((arr_31 [i_0] [i_8]) & (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                }
                for (long long int i_15 = 0; i_15 < 24; i_15 += 2) /* same iter space */
                {
                    arr_50 [i_0] [i_8] [i_0] [i_15] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_31 [i_0] [i_0])) ? (((/* implicit */int) arr_26 [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)-32751))))))) ? ((-(arr_27 [16ULL] [i_8] [i_8]))) : (((/* implicit */unsigned int) var_2)));
                    arr_51 [i_15] [i_15] [i_9] [i_8] [3LL] [i_0] = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) arr_49 [i_0] [i_8] [(short)6] [i_9] [i_15] [i_15])) <= (((/* implicit */int) arr_49 [i_0] [i_0] [i_8] [i_9] [i_9] [i_15])))));
                    arr_52 [i_0] [21ULL] [i_9] [21ULL] = ((/* implicit */long long int) arr_7 [i_15] [i_8] [i_9] [(unsigned char)20]);
                    var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((long long int) arr_0 [(unsigned short)21])) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_15] [i_8] [i_9] [i_15])))))))))));
                }
                var_44 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_9])) ? (((/* implicit */int) ((signed char) 0LL))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4043575811U)) ? (((/* implicit */int) (signed char)-11)) : (arr_24 [i_9] [i_8])))))))));
                arr_53 [i_9] [i_8] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+((+(var_6)))))) & ((+(var_14)))));
            }
        }
    }
    var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (1857541270689361054LL)))) : (((/* implicit */int) var_11))));
}

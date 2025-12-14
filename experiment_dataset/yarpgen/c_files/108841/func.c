/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108841
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) ((unsigned short) ((((/* implicit */unsigned long long int) -1735226971)) <= (15423047997853968300ULL))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [18U] [(signed char)16] [i_1] = ((/* implicit */unsigned int) arr_6 [i_2] [i_1] [i_1] [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned int) min((var_14), (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2])) ? (max((((((/* implicit */_Bool) var_10)) ? (arr_9 [i_3]) : (arr_9 [i_3]))), (min((arr_11 [i_0] [i_0] [i_1] [14U] [i_2] [i_3]), (((/* implicit */unsigned int) arr_6 [(signed char)0] [i_3] [i_2] [i_3])))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_1))));
                    }
                    for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 2; i_5 < 24; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */signed char) ((int) ((signed char) arr_5 [i_0] [i_5 - 2] [i_5 - 2] [i_5 - 2])));
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) arr_1 [i_2])) : (1652113575U))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4]))))))))));
                            arr_16 [i_0] [i_1] [i_2] [i_4] [i_1] = ((/* implicit */int) (unsigned short)65535);
                            arr_17 [i_0] [i_1] [i_0] [i_1] [i_5] = ((/* implicit */int) (+(15423047997853968300ULL)));
                        }
                        arr_18 [i_1] [i_1] [i_2] = ((max((((/* implicit */unsigned long long int) ((signed char) 15423047997853968300ULL))), (var_9))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_0]))));
                    }
                    arr_19 [i_1] [i_1] [i_1] = ((/* implicit */int) (signed char)27);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            arr_23 [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) arr_22 [(short)5] [i_6] [i_6]);
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 24; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) arr_8 [(signed char)6] [i_6] [i_7] [12]);
                        var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) 15423047997853968300ULL)) ? (2642853720U) : (((/* implicit */unsigned int) 612916155)))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)38087)) ? (((/* implicit */int) arr_26 [i_0] [i_6] [i_7] [i_8])) : (((/* implicit */int) (unsigned char)235))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (arr_2 [(_Bool)1])))))));
                    }
                } 
            } 
        }
        for (signed char i_9 = 0; i_9 < 25; i_9 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_10 = 1; i_10 < 24; i_10 += 2) 
            {
                var_20 = ((/* implicit */short) var_9);
                arr_36 [i_10] [i_10] = ((/* implicit */int) ((arr_29 [i_9] [0] [i_9] [i_0]) ? (min((((((/* implicit */_Bool) arr_5 [i_0 - 1] [(unsigned char)14] [i_0 - 1] [(short)4])) ? (12961142332881066312ULL) : (((/* implicit */unsigned long long int) arr_31 [(unsigned short)13] [i_9] [i_10])))), (((/* implicit */unsigned long long int) arr_26 [13ULL] [i_9] [i_9] [i_9])))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))));
            }
            for (int i_11 = 3; i_11 < 23; i_11 += 4) 
            {
                var_21 = ((/* implicit */unsigned int) arr_33 [i_0] [i_9]);
                arr_39 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_2);
                arr_40 [i_0] [(short)9] [(unsigned short)8] = ((/* implicit */unsigned int) 3023696075855583315ULL);
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_43 [i_0] = ((/* implicit */unsigned short) var_3);
                arr_44 [i_0] [(unsigned short)7] = ((/* implicit */short) ((unsigned int) arr_24 [i_9] [i_9] [i_12]));
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */int) var_8)) >= (arr_41 [i_0 - 1] [i_9] [i_12] [i_12]))))));
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 15423047997853968300ULL)) ? (8982141879510159436ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)227)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_13 = 0; i_13 < 25; i_13 += 2) 
                {
                    var_24 = ((/* implicit */short) ((unsigned int) 2168741897U));
                    arr_47 [i_12] [i_12] [i_9] [i_9] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_13] [i_12] [i_13]))) * (15423047997853968317ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_12]))))) : (((((/* implicit */_Bool) (unsigned short)65509)) ? (-612916163) : (-915129495))));
                    arr_48 [i_13] [i_0] [i_9] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_33 [i_9] [i_9]))))) ? (((((/* implicit */_Bool) arr_41 [i_0 - 1] [(signed char)17] [i_12] [i_13])) ? (arr_24 [i_13] [i_9] [i_9]) : (arr_24 [i_13] [i_9] [4]))) : (((/* implicit */long long int) arr_46 [i_13] [i_12] [i_9] [18]))));
                }
            }
            arr_49 [i_0] [i_0] [i_9] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)16)))), (max((var_1), (((/* implicit */unsigned long long int) var_12)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 612916155)))))));
            var_25 = ((/* implicit */signed char) 3671928009U);
            arr_50 [i_0] [i_9] = ((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [(short)5]);
        }
    }
    var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) 1047552))))) ? (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 12961142332881066338ULL)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) & (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    var_27 = ((/* implicit */_Bool) max((max((((int) var_2)), ((~(((/* implicit */int) var_7)))))), (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (signed char i_14 = 0; i_14 < 22; i_14 += 3) 
    {
        for (unsigned short i_15 = 1; i_15 < 21; i_15 += 1) 
        {
            {
                var_28 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)61)), (3023696075855583315ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_14] [i_15 - 1] [i_15] [i_15 - 1]))) : (1652113575U));
                var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_14] [i_15] [19U] [i_14])) ? (((((/* implicit */_Bool) -1958315122)) ? (min((((/* implicit */unsigned long long int) arr_51 [i_14])), (var_1))) : (((((/* implicit */_Bool) 3547715109U)) ? (12961142332881066307ULL) : (((/* implicit */unsigned long long int) arr_46 [(signed char)2] [(signed char)2] [i_15] [i_15])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
            }
        } 
    } 
}

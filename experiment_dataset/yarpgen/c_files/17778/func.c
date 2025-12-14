/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17778
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
    var_13 = ((/* implicit */signed char) ((int) (~(min((((/* implicit */unsigned long long int) (unsigned char)253)), (6419912225463853968ULL))))));
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_0) << (((min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (var_10))) - (11312682581576371580ULL)))))) ? (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_7)) ? (6419912225463853968ULL) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))))))));
    var_15 = var_11;
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) arr_4 [i_0] [i_1]))));
                    arr_7 [i_0] [i_1] [(_Bool)1] [i_1] = var_8;
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_3 = 2; i_3 < 16; i_3 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_9 [i_0] [i_3])), (439369342U))))));
            /* LoopSeq 1 */
            for (unsigned char i_4 = 3; i_4 < 16; i_4 += 2) 
            {
                var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_5)) ? (((var_5) << (((var_7) + (1874360416))))) : (((/* implicit */unsigned long long int) arr_6 [i_3 - 2] [i_4 - 3])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_10) / (6419912225463853968ULL)))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_3] [i_4])) ? (arr_2 [i_3 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */int) var_4))))))))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (+(267699683)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_5 [i_3] [i_3 - 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7))) : (arr_2 [i_4])))) ? (((((/* implicit */_Bool) 1006632960U)) ? (arr_2 [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), ((unsigned short)19913)))))))) : (((((/* implicit */_Bool) arr_6 [i_3 + 1] [i_3 - 2])) ? (((long long int) var_0)) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_6 [i_0] [i_0]))))))));
                arr_12 [i_0] [i_3] [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_0])), (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) 4611686018427386880LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_6))))) > (((/* implicit */unsigned long long int) (+(max((((/* implicit */int) (_Bool)1)), (var_7))))))));
                arr_13 [i_4] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(2147483617)))), (((((11463203763211145779ULL) | (var_0))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4])))))));
                /* LoopSeq 2 */
                for (int i_5 = 2; i_5 < 15; i_5 += 2) 
                {
                    arr_17 [i_0] [i_4] [i_4] = max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_3 - 2] [i_5 + 1])) < (((arr_9 [i_0] [i_0]) ? (var_8) : (((/* implicit */int) var_3))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned short)2] [(short)2]))) - (var_5))))));
                    arr_18 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_4 + 1] [i_3] [i_4] [i_3 - 2])) ? (((/* implicit */int) arr_10 [i_4 - 1] [i_4] [i_4] [i_3 - 1])) : (((/* implicit */int) var_3))))) | (var_0)));
                }
                for (unsigned int i_6 = 2; i_6 < 15; i_6 += 2) 
                {
                    arr_21 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((var_8) == (((/* implicit */int) arr_4 [i_0] [i_0])))))) ? (min((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */long long int) arr_9 [i_3] [i_3]))))), (arr_11 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
                    var_20 = ((/* implicit */unsigned short) (short)8192);
                    arr_22 [i_0] [i_3 - 1] [i_4] [i_3] [i_0] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_6]))))) >> (((((/* implicit */int) arr_10 [5] [(unsigned short)7] [i_4 - 3] [i_6])) - (115)))))) ? (max((((/* implicit */unsigned long long int) var_1)), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_6), (var_6)))))))));
                }
            }
            arr_23 [i_0] [i_3 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_6 [i_3 - 1] [i_3 - 1])) < (min((((/* implicit */unsigned long long int) arr_8 [(unsigned short)12])), (((12026831848245697647ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1958)))))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_7 = 1; i_7 < 15; i_7 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_8 = 3; i_8 < 15; i_8 += 2) 
            {
                var_21 = ((/* implicit */_Bool) (+(((12026831848245697647ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                /* LoopNest 2 */
                for (unsigned int i_9 = 1; i_9 < 15; i_9 += 3) 
                {
                    for (unsigned short i_10 = 1; i_10 < 16; i_10 += 2) 
                    {
                        {
                            arr_34 [i_10] [i_7] [i_8] [i_7] [i_0] = ((((/* implicit */_Bool) arr_11 [i_9 + 2] [1] [i_0])) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_9])) : (arr_11 [i_0] [5ULL] [i_0]));
                            var_22 = ((/* implicit */signed char) (+(((/* implicit */int) arr_8 [i_8 - 1]))));
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_29 [i_7] [i_10])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_9)))) : ((~(((/* implicit */int) (short)-8473))))));
                            arr_36 [i_7] [(unsigned char)9] [i_8 - 1] [i_9] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_30 [i_0] [i_7] [(unsigned char)5] [i_9 + 1] [i_10]))));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((signed char) arr_30 [i_10 - 1] [i_0] [2ULL] [i_0] [i_8 - 2])))));
                        }
                    } 
                } 
                arr_37 [i_7] [i_7] [i_8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) << ((((~(var_12))) - (7604567851938409931LL)))));
            }
            arr_38 [i_7] [i_7] = ((/* implicit */unsigned short) -2147483617);
            var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 12026831848245697647ULL)) ? (((/* implicit */int) arr_4 [i_7 - 1] [i_7 + 1])) : (((/* implicit */int) arr_8 [i_7 + 2]))));
        }
        var_25 += arr_31 [i_0] [i_0] [i_0] [i_0];
    }
}

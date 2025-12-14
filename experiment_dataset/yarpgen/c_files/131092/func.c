/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131092
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
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) var_0))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_11 [i_0] [i_3 - 2] [i_0] [i_1 - 1] [i_0] = ((/* implicit */short) -1116194273);
                            arr_12 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) ((-2885692844097790536LL) + (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))));
                            var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 541635223U))));
                            var_15 &= ((/* implicit */short) (-(((/* implicit */int) ((short) ((unsigned int) var_7))))));
                        }
                        /* LoopSeq 3 */
                        for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_3 + 1] [i_5] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_15 [i_0] [i_1] [i_1 - 2] [i_3 - 3] [i_5] [i_5] [i_5])))) & (((((/* implicit */_Bool) arr_1 [i_3 - 1] [i_3 + 1])) ? (((((/* implicit */_Bool) -2885692844097790536LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))) : ((-(((/* implicit */int) var_9))))))));
                            arr_17 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) arr_13 [i_0 - 1] [17U] [i_2] [i_3] [i_0])) ? (((/* implicit */int) arr_13 [i_0 - 1] [i_1] [i_2] [i_3 + 1] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] [i_2])))))) / (((/* implicit */int) var_10))));
                        }
                        for (short i_6 = 2; i_6 < 20; i_6 += 1) 
                        {
                            var_16 -= ((/* implicit */short) (~(((/* implicit */int) min((max((arr_19 [i_2]), (arr_18 [i_2] [(_Bool)1]))), (arr_14 [i_0 - 1] [i_0 - 1] [i_6 + 1] [i_0 - 1] [i_6 + 1]))))));
                            var_17 -= ((/* implicit */_Bool) 2885692844097790535LL);
                            var_18 = ((/* implicit */signed char) -1116194273);
                            var_19 = ((/* implicit */_Bool) min((var_19), (var_12)));
                        }
                        for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 4) 
                        {
                            arr_23 [i_0] [i_3] [i_2] [i_1 - 2] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                            arr_24 [i_0] [i_1 - 2] [i_0] [i_0] [i_7 + 1] [i_0] [i_0] = ((((/* implicit */_Bool) arr_21 [i_0] [i_3] [i_2] [i_1 - 2] [i_0])) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) var_1)));
                            var_20 = ((/* implicit */int) max((var_20), (min((((((/* implicit */_Bool) (short)2047)) ? (((-1116194287) + (1116194267))) : (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) min(((short)-1), (((/* implicit */short) arr_15 [i_7] [i_7] [i_2] [i_7] [i_1] [i_7] [i_7]))))) : ((~(((/* implicit */int) var_6))))))))));
                        }
                    }
                    var_21 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1] [i_2] [i_1 + 1])))) ? ((~(((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_0] [i_2] [i_0])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_0 - 1] [i_2]))))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_2))));
    /* LoopNest 2 */
    for (unsigned char i_8 = 4; i_8 < 17; i_8 += 4) 
    {
        for (int i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (int i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 3; i_11 < 16; i_11 += 2) 
                    {
                        for (short i_12 = 3; i_12 < 17; i_12 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */int) var_7);
                                arr_39 [i_11] [i_9] [i_10] [i_12] [i_12] [i_8] |= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)49771)) || (((/* implicit */_Bool) min((arr_22 [i_8] [(unsigned short)12] [i_8] [i_11] [i_12]), (((/* implicit */unsigned long long int) var_8))))))))));
                                arr_40 [i_12 - 3] [i_11] [i_10] [i_10] [i_10] [i_9] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_32 [i_11 - 3] [i_11] [i_11 - 3])) - (((/* implicit */int) var_1)))) | (((((/* implicit */int) arr_15 [i_10] [i_8 - 2] [i_9] [i_9] [i_10] [i_11 + 2] [i_10])) & (((/* implicit */int) var_12))))));
                                var_24 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) && (var_8)))), (var_10)));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */int) ((_Bool) ((((((/* implicit */int) arr_18 [i_8] [i_8])) + (((/* implicit */int) (short)11)))) * (((/* implicit */int) var_8)))));
                }
                for (int i_13 = 0; i_13 < 20; i_13 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned char) 1116194277);
                    var_27 &= ((/* implicit */unsigned char) ((unsigned int) var_6));
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (-(2706608544U)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_34 [(unsigned char)9] [i_8 - 4]))))) : (4137097780U)))))));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 20; i_14 += 3) /* same iter space */
                {
                    arr_47 [i_9] = ((/* implicit */unsigned int) ((arr_22 [i_8] [i_8] [i_8] [i_8 - 3] [i_8]) >> (((arr_22 [i_8] [i_8] [i_8] [i_8 - 4] [i_8]) - (17378573543582543430ULL)))));
                    var_29 = ((short) ((unsigned long long int) arr_29 [i_8] [i_8]));
                }
                arr_48 [i_8] = ((/* implicit */short) (~(((((((/* implicit */int) (unsigned char)179)) + (((/* implicit */int) arr_32 [i_8] [(unsigned char)16] [i_8])))) >> (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) arr_18 [i_8 - 4] [i_9])))))))));
            }
        } 
    } 
}

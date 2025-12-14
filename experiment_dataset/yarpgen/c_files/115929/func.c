/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115929
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
    var_10 |= ((var_1) << (((((/* implicit */int) var_6)) - (41875))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((/* implicit */long long int) var_0)) ^ (4577204769658239393LL))))));
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */long long int) arr_4 [i_1]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 ^= ((/* implicit */short) (~((+(((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 3] [i_1 + 1]))))));
                                var_14 = ((/* implicit */short) var_8);
                                var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) var_2))));
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((arr_10 [i_0] [i_1 - 1] [i_2] [i_3] [i_4]) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) - ((+(arr_8 [i_2] [i_0] [i_1 - 1] [i_2] [i_2] [(signed char)8])))))) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))) & (var_5))), (((/* implicit */unsigned long long int) var_8)))))))));
                            }
                        } 
                    } 
                    arr_13 [i_2] [i_1] [i_1] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)54768)) && (((/* implicit */_Bool) var_0)))))) | (var_7));
                }
            } 
        } 
        var_17 |= ((/* implicit */unsigned int) (signed char)-117);
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 14; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                for (short i_7 = 3; i_7 < 15; i_7 += 2) 
                {
                    {
                        arr_21 [i_6] [i_6] [i_5 + 2] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_15 [i_5 - 4]))));
                        var_18 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)246)) << (((((/* implicit */int) ((((/* implicit */_Bool) -1)) && (((/* implicit */_Bool) var_1))))) >> (((((/* implicit */int) (unsigned char)138)) - (133)))))));
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            var_19 &= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-23))))) ? (arr_8 [i_5] [2U] [i_5] [10LL] [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5 - 3] [i_5 - 3] [i_7 + 1])))))));
                            var_20 = ((/* implicit */long long int) (~(((/* implicit */int) max((arr_17 [(short)13] [i_5 - 2] [5]), ((unsigned short)54768))))));
                            var_21 ^= ((/* implicit */signed char) arr_0 [i_6]);
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((unsigned int) (unsigned char)9)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [0])) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) var_3))))) ? (max((((/* implicit */int) var_3)), (var_8))) : (((/* implicit */int) arr_9 [i_8] [i_8] [i_7] [i_0] [i_0] [i_8]))))))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 2) 
                        {
                            arr_28 [(_Bool)1] [13LL] [i_6] [13LL] [i_9] = ((/* implicit */signed char) var_2);
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_26 [i_7 + 1] [i_7] [i_7 - 3] [i_7 + 1] [i_7 - 3] [i_7 - 1] [i_7 - 3]))) ? ((+(((/* implicit */int) ((_Bool) arr_10 [i_0] [i_5] [i_0] [i_7 - 2] [i_7 - 2]))))) : (((/* implicit */int) ((unsigned short) (signed char)117)))));
                            var_24 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)7090)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (unsigned short)54768))))) * (max((((arr_12 [i_9] [i_9] [i_5] [(unsigned char)12] [i_5] [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) : (1908450253961625738LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) (short)3852)))))))));
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_10 = 1; i_10 < 9; i_10 += 2) 
    {
        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 3) 
        {
            {
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_11] [i_11] [(unsigned short)4] [i_10] [i_10 + 1])) >= (((/* implicit */int) arr_19 [i_10 + 1] [i_11] [(unsigned char)4] [(unsigned char)4] [i_10])))))));
                var_26 ^= (_Bool)1;
                var_27 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_8 [i_10] [i_10 - 1] [i_10] [(short)5] [i_10] [i_10 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_30 [i_10] [i_10 - 1])))));
            }
        } 
    } 
    var_28 = ((/* implicit */int) ((max((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned int) var_8)))))) < (var_7)));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117099
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_10 = ((/* implicit */short) 18446744073709551615ULL);
            /* LoopSeq 1 */
            for (short i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                /* LoopSeq 4 */
                for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    arr_11 [(unsigned char)2] [(signed char)4] [i_0] [i_3] = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_12 [i_0 + 1] [i_0] [i_2] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) arr_8 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 1]))));
                    arr_13 [6LL] [i_3] [(short)2] [i_1] [(unsigned char)14] [6ULL] &= (short)-25521;
                    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_0] [i_0 + 2] [i_1])) ? (arr_5 [i_2 - 2] [i_0] [i_0 + 2] [i_3]) : (arr_5 [i_2 - 2] [i_0] [i_0 + 2] [2ULL])));
                }
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
                {
                    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((arr_6 [i_0 - 1] [i_2 + 1] [(unsigned char)12] [(short)10]) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_2 - 2] [7ULL] [i_4])) : (((/* implicit */int) (_Bool)1)))))));
                    arr_16 [i_0 + 2] [6] [i_2 + 1] [i_4] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
                    arr_17 [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                {
                    var_13 = ((/* implicit */short) ((arr_0 [i_0 - 1]) - (arr_0 [i_5])));
                    arr_20 [i_0 + 2] [i_0] [i_2 - 1] = ((/* implicit */short) (-((+(((/* implicit */int) arr_18 [i_0] [i_0]))))));
                    arr_21 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */signed char) var_6);
                    arr_22 [i_0] [(short)8] [3LL] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                    var_14 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32))) ^ (arr_0 [i_0 + 1])))) ? (((/* implicit */int) var_1)) : ((+(((/* implicit */int) arr_2 [i_0] [i_0 - 1])))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_2 + 1] [(unsigned short)1] [i_2 - 1] = ((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) (signed char)-32)))));
                    arr_27 [i_0 + 3] [i_2] [i_0] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_2 + 1])) ? (((/* implicit */int) ((unsigned char) var_5))) : (((arr_23 [(signed char)0] [(_Bool)1] [i_2] [i_2 - 2] [i_2]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_19 [i_6]))))));
                    var_15 = ((/* implicit */signed char) (~(5628317653844070410ULL)));
                }
                var_16 = ((/* implicit */unsigned long long int) ((_Bool) arr_3 [i_0]));
            }
        }
        for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            var_17 = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_23 [i_0 + 3] [(_Bool)1] [i_0 + 1] [i_0 - 1] [i_0 + 2])))), (((((((/* implicit */int) arr_9 [i_0 + 2] [i_7] [i_0] [i_0] [i_7] [0])) / (((/* implicit */int) (signed char)109)))) + (((((/* implicit */_Bool) var_0)) ? (var_0) : (var_0)))))));
            arr_31 [i_0] [i_0 - 1] [(unsigned char)0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (~(((/* implicit */int) (_Bool)1))))))) * ((~(arr_29 [9] [i_0])))));
            arr_32 [7U] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) min((((/* implicit */unsigned long long int) var_7)), (var_5))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_30 [i_7] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_0 - 1] [i_7] [i_7]))))) : (((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 3] [i_0 + 1] [i_0 + 2])))) : (((/* implicit */int) (_Bool)1))));
        }
        /* vectorizable */
        for (signed char i_8 = 3; i_8 < 15; i_8 += 2) 
        {
            arr_36 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
            var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_35 [i_0 + 1] [i_8 - 2] [i_8 - 1])) > (((/* implicit */int) (short)-10739)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                for (signed char i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)7)) > ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_0 [i_0 - 1]))));
                    }
                } 
            } 
        }
        var_21 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_38 [i_0 + 1] [i_0] [i_0 + 1]) : (arr_38 [i_0 + 2] [i_0 - 1] [i_0])))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((((_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_24 [i_0] [1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0 + 1]))) : (var_5)))));
        var_23 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((unsigned char)216), (((/* implicit */unsigned char) (signed char)-120)))))));
    }
    var_24 = ((/* implicit */unsigned char) var_7);
    var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)49264)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))) ^ ((~(var_0)))));
    var_26 = ((/* implicit */unsigned long long int) var_0);
}

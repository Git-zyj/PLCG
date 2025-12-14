/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185803
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
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */unsigned char) 3271599927U);
        arr_4 [i_0] = ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 2124553201)) : (arr_2 [i_0] [i_0])))))));
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */long long int) 1U)) | (arr_1 [i_0 - 2] [i_0 - 2]))))));
        arr_5 [i_0 - 2] &= ((/* implicit */short) 4294967295U);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) var_4);
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) 287667426198290432LL)) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) var_0))))), (arr_8 [(_Bool)1]))), (var_7))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 4) 
                    {
                        arr_16 [18ULL] [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned short) min((arr_14 [i_4] [i_2 + 2]), (((/* implicit */unsigned long long int) arr_13 [i_4 + 2] [i_1] [i_1] [i_2 + 2])))));
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 0U)), (((((/* implicit */_Bool) var_9)) ? (arr_8 [(short)14]) : (2628285927508469202LL)))))) ? ((+(((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */unsigned long long int) 2124553213)) : (17260772753259908094ULL))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */long long int) 4294967281U)) >= (2628285927508469202LL)))), ((~(arr_8 [(_Bool)1])))))))))));
                        var_15 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) : (((unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29607))) : (arr_2 [i_1] [i_2])))));
                        var_16 = ((/* implicit */long long int) var_6);
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) arr_11 [i_1] [i_1]))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_10 [i_1] [i_2]))));
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (~(var_1))))));
                    }
                    for (unsigned long long int i_6 = 3; i_6 < 15; i_6 += 2) 
                    {
                        var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2124553208))))) : (((((/* implicit */_Bool) 16646144LL)) ? (-2124553214) : (((/* implicit */int) var_11)))))), (((/* implicit */int) var_11))));
                        var_21 = ((/* implicit */long long int) min((var_21), (min((((/* implicit */long long int) -2124553214)), (max((-7LL), (arr_1 [i_3] [i_6])))))));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (var_9))))), (((/* implicit */int) (unsigned short)32510)))))));
                    }
                    arr_21 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) var_7)) % (min((arr_2 [8LL] [i_3]), (arr_2 [i_1] [i_1]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1] [i_2 + 1])) && (((/* implicit */_Bool) arr_14 [i_1] [i_2 - 1]))))))));
                }
            } 
        } 
    }
    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        arr_25 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) max(((unsigned short)33025), (((/* implicit */unsigned short) var_6)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_7])) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) arr_7 [i_7]))))) : (max((((/* implicit */long long int) (unsigned short)33006)), (arr_13 [i_7] [i_7] [i_7] [i_7])))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_7])) ? (var_9) : (((/* implicit */int) arr_7 [i_7]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)154)) ? (-3137359076305397648LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182))))))))) : (((/* implicit */int) arr_17 [i_7] [11] [i_7] [i_7] [i_7]))));
    }
    var_24 ^= ((/* implicit */_Bool) 1761990645589376275ULL);
}

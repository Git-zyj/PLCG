/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133141
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
    var_16 *= ((/* implicit */unsigned char) var_13);
    var_17 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (((unsigned long long int) var_15)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_0))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (65535) : (((/* implicit */int) (unsigned short)6055))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    var_19 |= ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_1 + 2])) ? (arr_7 [(unsigned short)11] [(unsigned char)14] [(unsigned char)14] [i_1 + 2]) : (((/* implicit */int) arr_5 [i_1] [(short)12] [(short)12]))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) arr_4 [i_2] [i_0])))))) ? (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2 - 2]) : (((/* implicit */int) ((unsigned short) arr_6 [i_0 - 1] [i_1] [i_2 - 1])))));
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_1 - 1]);
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) ((arr_5 [(unsigned char)4] [(short)2] [(short)2]) ? (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [3LL] [i_0 - 1]))) : (var_15)))));
        var_22 = ((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_0 - 2]) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (max((((/* implicit */long long int) ((unsigned short) (_Bool)1))), (arr_6 [i_0] [i_0] [i_0])))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0 + 1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_15))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_5])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((unsigned int) arr_15 [i_0] [i_3] [i_3] [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0])))));
                        var_24 = ((/* implicit */unsigned int) arr_13 [(unsigned char)12] [i_3]);
                    }
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3991635330U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (15684353674443465516ULL)));
                }
            } 
        } 
        arr_18 [i_0] = ((/* implicit */int) arr_11 [i_0]);
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102773
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                var_18 = ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) arr_1 [i_1 - 2]))))) ? (((unsigned long long int) ((var_15) | (((/* implicit */int) arr_1 [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    arr_10 [i_0] [i_2] [i_0] = ((/* implicit */long long int) min((min(((-(((/* implicit */int) var_2)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (var_13)))))), (((((/* implicit */int) var_11)) & (((((/* implicit */int) var_11)) | (((/* implicit */int) var_4))))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_19 += ((/* implicit */unsigned long long int) (-(min((((var_12) ? (1934863213746609740LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-256)) ? (var_15) : (((/* implicit */int) (short)246)))))))));
                        var_20 = ((/* implicit */unsigned char) max((9290474972438261553ULL), (min((3549213262374661544ULL), (((/* implicit */unsigned long long int) var_14))))));
                        arr_13 [(unsigned char)20] [9U] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_3 [i_2])))) > (((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned int) var_14))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        var_21 = ((/* implicit */signed char) var_9);
                        arr_17 [i_4] [i_2] [i_1 - 3] [(unsigned char)4] [i_2] [i_0] = ((/* implicit */_Bool) ((int) (short)-256));
                    }
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned char) (~(max((arr_14 [i_5] [i_2] [i_1] [i_0]), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_8)), ((short)262))))))));
                        var_23 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((-1934863213746609739LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)52))))) ? ((-(((/* implicit */int) var_6)))) : (max((((/* implicit */int) arr_5 [i_1] [i_2] [i_5])), (var_14)))))), (max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)11))) / (-1934863213746609717LL))), (((/* implicit */long long int) (unsigned char)8))))));
                        arr_20 [i_0] [i_1 - 1] [i_2] [i_0] = ((/* implicit */signed char) min((max((((/* implicit */unsigned short) var_2)), (var_6))), (((/* implicit */unsigned short) max((arr_11 [i_2] [i_2] [i_1 - 1] [i_5]), (((/* implicit */short) var_11)))))));
                        arr_21 [i_5] [i_2] [i_2] [5U] [i_5] = (-(((((var_12) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))) - (var_15))));
                    }
                }
                arr_22 [i_0] [i_0] [(signed char)4] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_1] [i_1 - 1])) | (((/* implicit */int) var_4)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_7 = 1; i_7 < 12; i_7 += 4) 
        {
            for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) 
                {
                    {
                        arr_35 [i_6] [i_6] [3ULL] [i_9] = ((/* implicit */_Bool) ((int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_9 [i_6] [i_8])))));
                        var_24 = ((/* implicit */unsigned char) 291236859U);
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */int) var_4);
        arr_36 [i_6] = ((/* implicit */unsigned long long int) ((_Bool) 840353211320025984ULL));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)247)) || (((/* implicit */_Bool) 3289390780U)))))) - (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39385))) ^ (3684127784U)))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146894
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned short) 2147483647))), (((var_8) * (((/* implicit */long long int) ((/* implicit */int) var_12)))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)101)), (((var_14) * (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))) : (((long long int) ((unsigned char) (unsigned short)54920))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_18 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0])) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10638)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */int) ((4294967295U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11927)))));
                            arr_14 [i_1] [i_3] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_2 [i_1] [i_2]);
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (~(var_2))))));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((((arr_0 [i_3]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13)))) <= (((((/* implicit */int) var_15)) ^ (((/* implicit */int) arr_13 [i_3] [i_3] [i_3]))))))));
                            var_22 = ((/* implicit */_Bool) ((long long int) (short)17124));
                        }
                    }
                    var_23 ^= ((/* implicit */short) ((min((var_5), (((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_2] [i_1] [i_0] [i_2] [i_1])))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_12 [(unsigned char)9] [i_1] [(unsigned char)9] [(unsigned char)9] [i_2] [i_1] [i_1])) : (((/* implicit */int) arr_12 [i_0] [18U] [i_0] [i_0] [18U] [i_2] [i_2])))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)11938))));
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            var_25 = ((/* implicit */long long int) (-(((/* implicit */int) var_16))));
            /* LoopSeq 1 */
            for (unsigned int i_7 = 1; i_7 < 15; i_7 += 3) 
            {
                arr_23 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) arr_15 [i_5]);
                arr_24 [i_6] [i_5] = ((/* implicit */_Bool) (+((-(((/* implicit */int) (signed char)-64))))));
            }
            var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_15 [i_5]))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)120))))))))));
        }
        arr_25 [i_5] [i_5] = ((/* implicit */signed char) arr_17 [i_5] [i_5] [i_5]);
        /* LoopSeq 1 */
        for (unsigned int i_8 = 3; i_8 < 15; i_8 += 4) 
        {
            var_27 = ((/* implicit */unsigned short) (+(((max((var_4), (((/* implicit */int) (unsigned short)54920)))) * ((-(((/* implicit */int) var_7))))))));
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    {
                        var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_8] [i_9] [i_9] [i_8] [i_10])) ? ((-(((/* implicit */int) var_1)))) : (((((/* implicit */int) arr_3 [i_5] [i_5])) - (((/* implicit */int) arr_3 [i_5] [i_10]))))));
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)170)) / (((/* implicit */int) (unsigned char)52))));
                    }
                } 
            } 
            arr_32 [i_8] = ((/* implicit */signed char) arr_0 [i_5]);
        }
    }
}

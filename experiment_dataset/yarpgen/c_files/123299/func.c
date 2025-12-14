/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123299
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (max((((/* implicit */unsigned long long int) var_8)), (var_14)))))) ? (((var_10) + ((+(2683058297U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    var_16 ^= ((/* implicit */short) var_8);
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((var_2) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) - (((/* implicit */unsigned long long int) 392962801))))) ? (((/* implicit */int) ((short) (((_Bool)1) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 16; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0] [i_0 + 1])) : (((/* implicit */int) var_8))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_0 - 1]))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_4))));
    }
    for (int i_1 = 1; i_1 < 16; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_15 [i_1 + 1] [(signed char)16] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1 + 1] [i_1 + 2]))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            arr_22 [i_1] = ((/* implicit */int) arr_8 [i_5]);
                            var_19 = ((/* implicit */_Bool) (signed char)-54);
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) arr_7 [i_1])) : (arr_16 [i_5] [i_2] [i_1] [i_4])))) ? (var_2) : ((~(var_13)))));
                            arr_23 [i_1] [12] [i_3] [i_1] [12] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)19201)) & (((/* implicit */int) arr_17 [i_1] [i_1] [i_1 + 2] [i_1]))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) ((_Bool) var_1));
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (+((+(arr_16 [2LL] [2LL] [(unsigned char)16] [2LL]))))))));
            }
            arr_24 [i_1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 2])))));
            var_23 = ((/* implicit */int) (signed char)-109);
            var_24 = ((/* implicit */unsigned char) (short)28397);
        }
        for (signed char i_6 = 3; i_6 < 17; i_6 += 2) 
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((arr_18 [i_1] [i_6] [i_6] [(unsigned short)4] [i_6 - 1] [i_1]) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [i_1 + 2] [i_6] [i_1 - 1] [i_6 - 3] [(signed char)12]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_6 - 1] [i_6 - 1] [(signed char)12])) ^ (((/* implicit */int) arr_18 [i_1] [i_6] [i_6] [i_1] [i_6 - 2] [i_6 - 2])))))));
            arr_27 [i_1] [i_1] [(short)6] = ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (1911520593U)))));
            var_26 ^= ((/* implicit */long long int) 573094674);
            arr_28 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) (signed char)127)))))))), (min((((((/* implicit */int) (unsigned short)19201)) & (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (signed char)54))))))));
        }
        var_27 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [(_Bool)1])) + ((-(((/* implicit */int) var_12))))))) ? (((((/* implicit */_Bool) (+(arr_11 [i_1 + 1] [8ULL])))) ? ((-(((/* implicit */int) var_9)))) : ((+(((/* implicit */int) arr_2 [i_1])))))) : (min((((/* implicit */int) arr_9 [i_1 + 2] [i_1 - 1])), (arr_7 [(unsigned char)0])))));
    }
    var_28 = ((/* implicit */unsigned long long int) ((int) ((((4831491131319587352ULL) >= (((/* implicit */unsigned long long int) var_3)))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_10))) : (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21679))) : (var_13))))));
}

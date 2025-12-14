/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1404
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
    var_15 = ((/* implicit */unsigned int) ((((var_10) & (((/* implicit */long long int) ((unsigned int) var_8))))) != (((/* implicit */long long int) var_9))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_1))));
            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_12)) ? (var_12) : (var_0))))) && (((/* implicit */_Bool) (~(var_8))))));
            arr_4 [i_1] = ((/* implicit */unsigned int) var_6);
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_10) + (((/* implicit */long long int) var_1))))) ? (((var_8) ^ (arr_1 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 16))))))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                var_19 &= ((/* implicit */short) ((arr_1 [i_0 - 2]) + (arr_11 [i_2] [(unsigned char)2])));
                var_20 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (3593688624U))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        {
                            arr_17 [i_0] [i_4] = ((/* implicit */unsigned short) arr_0 [i_5]);
                            arr_18 [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) (((~(var_1))) ^ (((/* implicit */int) arr_13 [i_4]))));
                            var_21 = ((_Bool) ((var_0) != (((/* implicit */int) var_13))));
                            var_22 = ((/* implicit */int) max((var_22), (((((var_11) ? (((/* implicit */int) var_14)) : (var_12))) / (((/* implicit */int) var_13))))));
                        }
                    } 
                } 
                var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 2])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0 - 2])))));
            }
            var_24 = ((/* implicit */int) (((~(((/* implicit */int) arr_8 [i_0 - 2])))) >= (((/* implicit */int) ((var_1) != (((/* implicit */int) var_14)))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_25 = ((/* implicit */_Bool) (((((-(16777215U))) >= (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_0])) << (((/* implicit */int) arr_10 [i_0 - 2] [i_6]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_6]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 3593688638U))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (var_6)))))) : (max((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0 + 1] [i_6] [i_0 + 1])) & (((/* implicit */int) arr_8 [i_6]))))), (((long long int) arr_14 [i_0] [i_0 - 2] [i_0] [i_6] [i_6] [i_6]))))));
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_13)))) % (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_1)) : (var_10))) : (((/* implicit */long long int) var_12)))))))));
            var_27 -= ((((var_7) | (((/* implicit */int) ((_Bool) (signed char)-1))))) >= ((-(((/* implicit */int) ((9223372036854775807LL) <= (((/* implicit */long long int) var_6))))))));
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)80)) & (((/* implicit */int) (unsigned char)160)))))));
        }
        var_29 = ((/* implicit */unsigned int) ((short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -206099720)) && (((/* implicit */_Bool) (unsigned char)160))))), (arr_2 [i_0] [i_0]))));
    }
    var_30 = var_2;
}

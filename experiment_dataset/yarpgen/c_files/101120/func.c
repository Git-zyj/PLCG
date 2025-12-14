/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101120
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
    var_18 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_8))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) max((137438937088ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)-24632))))))))));
            var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (arr_1 [i_1])))) ? (((/* implicit */int) arr_4 [7LL] [(short)7])) : ((+(((/* implicit */int) (short)24619))))))) ? (min((((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0]) : (((/* implicit */long long int) (-2147483647 - 1))))), (max((((/* implicit */long long int) arr_3 [i_1] [5LL] [i_0])), (arr_1 [4LL]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [6LL])))));
        }
        for (signed char i_2 = 3; i_2 < 9; i_2 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) max((arr_6 [i_0 - 1]), (max((arr_6 [i_0 - 2]), (arr_6 [i_0 + 1])))));
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0 + 1]))))) ? (((((int) 1073741824)) / (((/* implicit */int) var_5)))) : ((+(((/* implicit */int) max((arr_2 [i_2]), (((/* implicit */unsigned char) arr_7 [i_0] [i_2]))))))))))));
            var_23 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) -937391888)))) ? (((/* implicit */int) var_1)) : (var_9)));
        }
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 8; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                {
                    var_24 ^= ((/* implicit */unsigned char) (short)24632);
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_25 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) (short)(-32767 - 1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_8 [i_5] [(signed char)1])) ? (((/* implicit */int) (short)28929)) : (((/* implicit */int) var_13))))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((var_3) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28929))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0]))) < (arr_15 [i_0] [i_3] [i_0] [9ULL] [9ULL] [(signed char)7])))))))));
                                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-28929)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_12 [i_0]))))))) || ((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_12 [i_0])), (var_16)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}

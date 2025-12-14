/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100952
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_11 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_1] [5LL])) ? (var_8) : (var_9))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_1])))));
            arr_4 [(unsigned char)12] [i_0] [0LL] = ((/* implicit */signed char) ((((((((((/* implicit */_Bool) arr_1 [i_0] [3LL])) ? (arr_0 [i_0]) : (arr_0 [2LL]))) + (9223372036854775807LL))) >> (((min((var_2), (var_3))) + (5685189927094863691LL))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) 2457157203U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned char)0] [6LL]))) >= (arr_0 [i_1])))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                var_12 ^= ((/* implicit */short) ((((long long int) var_7)) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) < (var_8)))))));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4] [(unsigned short)6] [i_3] [i_2] [(unsigned short)7] [(unsigned short)6] [i_4])))))) : ((+(var_4)))));
                            arr_16 [i_1] [i_4] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (arr_6 [i_0] [i_2] [i_4]) : (arr_6 [i_1] [i_3] [i_4])));
                            arr_17 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 8178749306358960749LL)) ? (-8178749306358960758LL) : (((((/* implicit */_Bool) -8488246999218621654LL)) ? (((/* implicit */long long int) 2457157203U)) : (-9066030668005953920LL)))));
                            arr_18 [i_0] [8LL] [i_1] [4LL] [i_0] [i_0] |= (-(var_9));
                        }
                    } 
                } 
            }
        }
        var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_9)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_0 [13ULL]) : (var_9))) : ((~(var_4)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(unsigned char)11])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_3)))) ? (((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))) : (min((var_4), (((/* implicit */long long int) var_5)))))) : (((/* implicit */long long int) (((((~(((/* implicit */int) var_6)))) + (2147483647))) >> (((((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) + (5685189927094863701LL)))))));
    }
    var_15 = ((/* implicit */long long int) min((var_15), ((((!(((/* implicit */_Bool) (signed char)64)))) ? (var_4) : (max((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))));
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            {
                var_16 ^= ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_21 [(_Bool)1] [i_6])))), (((arr_21 [i_5] [i_6]) ? (((/* implicit */int) arr_21 [i_5] [i_6])) : (((/* implicit */int) arr_21 [i_5] [i_6]))))));
                arr_25 [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_24 [(signed char)5])) : (((/* implicit */int) arr_21 [(_Bool)1] [14LL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_6] [i_5])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [(_Bool)1] [i_6])))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5] [i_6]))) : (arr_20 [i_5])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [(short)11] [i_6]))) : (((((/* implicit */_Bool) ((arr_21 [i_5] [3LL]) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [10LL]))) : (var_9)))) ? (min((var_1), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) (~(var_10)))))));
                arr_26 [i_5] [i_6] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) var_5))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_24 [(unsigned char)16]))) + (var_3))) : (((((/* implicit */_Bool) arr_19 [i_5] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [(signed char)0] [10ULL]))) : (var_4)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((var_10) - (var_10)))) ? (((/* implicit */unsigned long long int) (+(var_0)))) : (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
}

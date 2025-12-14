/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112414
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
    var_15 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)30664))))) : (var_8)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    var_16 = ((/* implicit */long long int) var_0);
                    arr_6 [i_0] [i_1] [i_2] = arr_5 [9LL] [i_0 - 1] [i_0 + 1] [i_0];
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_13 [i_3] [i_1] [i_0 - 1] [i_3 + 4] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)189))));
                                var_17 ^= ((/* implicit */short) (-(arr_11 [i_4 - 1] [i_3] [i_3] [i_3 + 3] [i_0 - 1])));
                                var_18 = ((/* implicit */signed char) arr_9 [i_0] [i_1] [(unsigned short)3] [i_3] [i_3 + 2] [i_4]);
                            }
                        } 
                    } 
                    var_19 *= ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0 - 1] [i_1]))));
                }
                for (unsigned short i_5 = 2; i_5 < 9; i_5 += 2) 
                {
                    arr_16 [i_0] [i_1] [i_1] [i_5 - 2] = ((/* implicit */signed char) (((((((+(arr_12 [i_5] [i_1] [i_1] [(signed char)1] [i_0 + 1] [i_0]))) ^ (((/* implicit */long long int) ((/* implicit */int) max(((short)-10121), (var_12))))))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_9))))) ? (1789681699975594222LL) : (arr_3 [i_5 + 1] [i_1] [i_0]))) - (1789681699975594222LL)))));
                    var_20 = ((/* implicit */signed char) max((((/* implicit */long long int) (((+(((/* implicit */int) arr_0 [i_0] [i_1])))) <= (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)92)), ((unsigned char)190))))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)189))) / ((-(-8595719682796761573LL)))))));
                    var_21 = ((/* implicit */unsigned short) (short)992);
                }
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_0] [i_0 - 1] [i_0 - 1])) << (((((((/* implicit */int) (signed char)24)) + ((+(((/* implicit */int) (unsigned char)21)))))) - (39))))))));
            }
        } 
    } 
    var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) ((min((3933639259591724651LL), (((/* implicit */long long int) var_2)))) | (((/* implicit */long long int) ((((/* implicit */int) (signed char)23)) * (((/* implicit */int) (short)-9851)))))))) ? (((/* implicit */int) (short)9836)) : (((((/* implicit */int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)5853)))) >> (((((/* implicit */int) (short)19285)) - (19260)))))));
    var_24 = ((/* implicit */short) max((var_24), (var_5)));
}

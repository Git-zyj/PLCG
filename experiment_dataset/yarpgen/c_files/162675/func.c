/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162675
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = 1641608540U;
                arr_8 [i_0] [i_1] [i_1] = ((_Bool) ((((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_0)) - (176))))) + (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) arr_3 [i_0])))))));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)255)) ? (((/* implicit */int) (unsigned short)65295)) : (((/* implicit */int) (unsigned short)65281)))))))));
                    arr_11 [i_0] = ((arr_2 [i_0] [(_Bool)1]) >> (((arr_1 [i_0]) - (8614590704189986052LL))));
                    var_17 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)259))));
                    var_18 = ((/* implicit */long long int) (short)4560);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_19 ^= ((/* implicit */_Bool) (-((-(((/* implicit */int) var_9))))));
                    arr_14 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [7LL]);
                    arr_15 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65275)) % (((/* implicit */int) (signed char)31))))) || (((_Bool) (short)4563)))))));
                    arr_16 [i_3] = ((/* implicit */signed char) arr_5 [i_0] [i_1] [i_3]);
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_1] [i_4] [i_0] = ((/* implicit */unsigned int) (-((-(arr_19 [i_4])))));
                    var_20 ^= ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) (signed char)8)) ? (var_1) : (arr_10 [i_0] [i_1] [i_1] [i_1]))))) << (((min((((((/* implicit */_Bool) (signed char)-100)) ? (arr_9 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_10)))), (((((/* implicit */_Bool) (unsigned char)255)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) - (7887573371653591129ULL)))));
                    var_21 *= ((/* implicit */long long int) ((_Bool) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2305841909702066176LL))) <= (9223372036854775807LL))));
                    arr_22 [i_0] [i_4] [i_4] = ((/* implicit */signed char) (-((-(((/* implicit */int) var_9))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_14)) ? (min((((/* implicit */unsigned long long int) (short)-4567)), (arr_10 [i_5] [i_1] [i_1] [i_0]))) : (min((var_1), (((/* implicit */unsigned long long int) var_9)))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0])))))));
                    var_23 ^= ((/* implicit */short) max((489224897763454156LL), (((/* implicit */long long int) (_Bool)1))));
                }
                var_24 = ((/* implicit */short) var_11);
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) var_7);
    var_26 = ((/* implicit */_Bool) var_3);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111452
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
    var_14 = ((/* implicit */short) ((((((/* implicit */int) var_13)) << ((((~(((/* implicit */int) (unsigned short)0)))) + (22))))) << (((max(((+(((/* implicit */int) var_3)))), ((+((-2147483647 - 1)))))) - (75)))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) max((var_15), (min((var_12), (((((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_8)))) / (max((((/* implicit */int) var_0)), (2147483647)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 4; i_2 < 8; i_2 += 1) 
                {
                    arr_8 [i_0 + 2] [i_0 + 1] [(short)7] [i_2] = ((/* implicit */signed char) arr_3 [i_0 - 1]);
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) -2147483647))));
                }
                for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    var_17 -= ((/* implicit */short) (~(max((((/* implicit */long long int) var_2)), (var_6)))));
                    var_18 *= ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)2] [6LL] [i_3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((/* implicit */int) var_13)) >= (2147483638)))) : (2147483646))), (((/* implicit */int) ((((((/* implicit */int) var_5)) & (((/* implicit */int) var_13)))) == (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_4) : (((/* implicit */int) arr_6 [i_0 + 2] [i_1] [i_0] [i_3])))))))));
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (arr_10 [i_0] [i_1 + 1] [i_3] [i_3]) : (arr_4 [i_0] [i_0] [i_1] [i_3]))))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_3] [i_3]))));
                }
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (2147483632) : (((/* implicit */int) (((-9223372036854775807LL - 1LL)) >= (((/* implicit */long long int) -2147483647)))))))) ^ (max((arr_4 [i_0] [i_0] [i_1] [i_1 - 1]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)1))))))))))));
            }
        } 
    } 
}

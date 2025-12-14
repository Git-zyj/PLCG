/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184237
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) arr_6 [(short)10]))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) max((var_2), (((/* implicit */signed char) (_Bool)1))));
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((((((/* implicit */_Bool) (~(arr_9 [i_1] [10LL] [(_Bool)1])))) ? ((~(((/* implicit */int) arr_13 [i_2])))) : (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) arr_0 [(signed char)3] [i_3]))))))) + (2147483647))) << ((((+(4294967295U))) - (4294967295U))))))));
                            var_17 = max(((+(min((-5626135864778912339LL), (((/* implicit */long long int) (short)17597)))))), (((/* implicit */long long int) ((short) 0))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
    var_19 += ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) var_11))))) % (max((min((((/* implicit */long long int) var_14)), (-5626135864778912339LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))))));
}

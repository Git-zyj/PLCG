/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106964
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
    var_10 = ((/* implicit */short) (+(((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 20; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */int) (short)-10890)) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_2] [i_3] [i_2] [i_2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)-21853))))))))))))));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 4; i_4 < 19; i_4 += 1) 
                            {
                                var_12 *= min(((short)14978), (((/* implicit */short) ((((/* implicit */_Bool) 5603600203596130899LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_6) : (var_4))))))));
                                arr_12 [i_0] [i_1] [i_2 + 1] [i_1] [i_4] [8LL] = ((/* implicit */short) arr_4 [i_0] [i_1]);
                            }
                            var_13 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3])) - (10153)))))) ? (((/* implicit */int) ((short) -8421454864456725623LL))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)24916)))))))) != (-4200850347415418413LL)));
                        }
                    } 
                } 
                var_14 |= ((/* implicit */short) ((min((((long long int) (short)7624)), (((/* implicit */long long int) ((short) var_1))))) != (((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) >> (((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) >> (((var_3) - (2594173564531801667LL))))) - (10512LL)))))));
            }
        } 
    } 
    var_15 = ((((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_5)) ? (-9223372036854775805LL) : (var_3))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((short) (+(var_4)))))));
}

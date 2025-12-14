/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176980
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
    var_14 ^= ((/* implicit */short) ((min((((((((/* implicit */int) var_11)) + (2147483647))) >> (((var_8) - (1943019346368937573LL))))), (((/* implicit */int) (unsigned char)193)))) >> (((((/* implicit */int) var_1)) - (99)))));
    var_15 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_16 += ((/* implicit */short) (-(((/* implicit */int) var_0))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -4556001950708357299LL)))))) == (32767LL)))))))));
        var_18 = ((/* implicit */long long int) var_3);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((-32767LL) + (var_12))) % (((/* implicit */long long int) max((((/* implicit */unsigned int) max((-910644269), (910644269)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (arr_5 [i_1] [i_0]))))))));
                    var_20 = min((((((/* implicit */_Bool) var_9)) ? ((~(5105325472770176706LL))) : (((/* implicit */long long int) 394088760)))), (((/* implicit */long long int) (short)(-32767 - 1))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_21 |= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)101)) << (((max((-8298491232794333590LL), (((/* implicit */long long int) arr_12 [2ULL] [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_3] [2ULL])))) + (150LL)))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((((/* implicit */int) arr_12 [i_0] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 2] [i_4 - 1] [i_4 + 2])) + (((/* implicit */int) arr_12 [i_0] [i_4 - 2] [i_4 - 2] [i_4 + 2] [i_4 + 2] [i_4] [i_4]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) (+(((/* implicit */int) var_6)))))))) ? ((+(((arr_1 [i_0]) ? (var_12) : (((/* implicit */long long int) var_10)))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118312
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
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                var_20 *= ((/* implicit */long long int) min((((unsigned long long int) ((_Bool) arr_3 [i_0] [i_0] [i_1]))), (((0ULL) >> (((/* implicit */int) arr_1 [i_0 + 1]))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) < (max((((/* implicit */unsigned long long int) var_0)), (0ULL))))), (((((/* implicit */_Bool) max((16ULL), (((/* implicit */unsigned long long int) var_9))))) || (((var_11) > (((/* implicit */unsigned long long int) var_5))))))));
                            arr_12 [i_0] [i_1] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((var_13) ^ (var_13)))), (((((/* implicit */_Bool) var_5)) ? (var_6) : (var_14))))) << (((unsigned long long int) arr_1 [i_0 - 2]))));
                            arr_13 [i_0] [i_0] [i_0] [i_2] [i_3] [i_0] = max((var_15), (((/* implicit */unsigned long long int) max(((-(var_17))), (var_17)))));
                            arr_14 [3ULL] = ((/* implicit */unsigned char) var_2);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 ^= ((/* implicit */long long int) ((min((((var_7) >= (var_2))), (((var_12) != (var_2))))) ? ((((~(var_11))) >> (((((var_8) | (((/* implicit */int) var_4)))) + (1461739598))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551615ULL) > (7182442167294229074ULL))))) <= (var_15)))))));
    var_23 ^= ((/* implicit */long long int) ((var_10) & (((/* implicit */int) ((((/* implicit */unsigned long long int) var_17)) >= (max((0ULL), (var_12))))))));
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_5)) > (((((/* implicit */_Bool) var_7)) ? (max((7979229232295116639ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (max((7979229232295116657ULL), (var_14)))))));
}

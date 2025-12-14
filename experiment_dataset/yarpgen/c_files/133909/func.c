/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133909
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_11 [(unsigned char)6] [i_1] [i_2] = ((/* implicit */_Bool) min((1925961280U), (max((((/* implicit */unsigned int) (unsigned char)10)), (3612688416U)))));
                            var_20 = ((/* implicit */unsigned int) ((_Bool) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [1ULL] [i_2 - 2])) >= (((/* implicit */int) (unsigned char)246))))))));
                            arr_12 [i_0] [i_2] [i_3] [i_3] [i_2 + 4] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)2)) >= (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((-8703051314782618837LL) >= (((/* implicit */long long int) min((((/* implicit */int) (short)8)), (1262009982)))))))));
                arr_13 [1ULL] = (~(min((11ULL), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [i_1] [i_1] [i_1])))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))) - (var_2))) - (((((/* implicit */long long int) var_15)) + (var_2))))), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)8))))))))));
    var_23 = ((/* implicit */unsigned short) ((var_19) > (((/* implicit */long long int) ((/* implicit */int) var_18)))));
    var_24 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) % ((~(((/* implicit */int) ((0ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12))))))))));
    var_25 = ((/* implicit */unsigned char) -1563819755);
}

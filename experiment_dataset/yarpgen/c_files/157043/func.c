/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157043
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
    var_12 = ((/* implicit */signed char) (+(min((((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13))))), (((/* implicit */unsigned long long int) var_11))))));
    var_13 &= ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? ((~(7LL))) : (((/* implicit */long long int) max((-1), (((/* implicit */int) var_5))))))) * (((/* implicit */long long int) (-(((/* implicit */int) max((var_2), (var_11)))))))));
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((-8LL) - (((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((((/* implicit */int) (unsigned short)31)) & (((/* implicit */int) var_2))))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_16 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((1), (((/* implicit */int) var_8))))), (10LL)))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (1977666035U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1]))))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_1])) >> (((5982304893073412253LL) - (5982304893073412224LL))))))))) : (min((11LL), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)198)))))))));
                                arr_17 [(_Bool)1] [i_1] [i_2] [i_3 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_15 [i_1]))))) ? (((((/* implicit */int) (unsigned char)50)) * (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_9 [i_1]))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)199))))) ? (10LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) arr_2 [(unsigned char)3] [i_3])))))))) : (max((((/* implicit */long long int) (+(((/* implicit */int) arr_14 [i_0] [i_1 - 1] [i_2] [i_2] [4] [i_3] [i_3]))))), (((((/* implicit */_Bool) var_8)) ? (5982304893073412253LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_4 + 2])))))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) -593606165401327034LL);
            }
        } 
    } 
}

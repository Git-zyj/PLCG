/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168624
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
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) min((var_19), (((/* implicit */unsigned char) ((298370051U) != (((/* implicit */unsigned int) ((/* implicit */int) var_19)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [6] [i_1] [6] &= arr_3 [i_0];
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (short i_3 = 4; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_21 = (+(((((/* implicit */int) ((arr_16 [i_0] [i_0] [i_2] [i_3] [i_4] [19ULL]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238)))))) >> (((max((arr_13 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_15)))) - (9118377263134191986ULL))))));
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) var_5)))))) || (((/* implicit */_Bool) ((((((/* implicit */int) ((signed char) (unsigned char)242))) + (2147483647))) >> ((((+(((/* implicit */int) var_19)))) - (162))))))));
                                var_23 += (-((-(min((1293146824), (((/* implicit */int) var_2)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) var_15))))) ? (((/* implicit */unsigned long long int) 3996597256U)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30))) ^ (var_10)))))) ? (var_4) : (((/* implicit */int) (signed char)4))));
    var_25 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) % (var_3)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)63)) != (((/* implicit */int) var_7))))))))));
    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(var_6)))) + (((((/* implicit */_Bool) var_19)) ? (var_0) : (((/* implicit */unsigned int) var_8))))))) ? (((/* implicit */unsigned long long int) 298370046U)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) ^ (min((((/* implicit */unsigned long long int) var_6)), (var_12))))))))));
}

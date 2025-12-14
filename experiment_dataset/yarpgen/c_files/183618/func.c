/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183618
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
    for (signed char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [(unsigned short)4] [0U] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */int) var_14)) + (((/* implicit */int) var_10))))));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) -3247208511793816109LL))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0 + 1] [i_0] [10] [(unsigned char)1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_7)) - (80)))))) && (((/* implicit */_Bool) var_16)))))));
                                var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)252)))) >> (((-580097632) + (580097634)))))) ? (((unsigned int) var_13)) : (((/* implicit */unsigned int) min(((+(((/* implicit */int) var_17)))), ((((_Bool)1) ? (((/* implicit */int) (signed char)-1)) : (-848622509))))))));
                                var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((signed char) 848622504))) : (((/* implicit */int) var_7)))) & (max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12)))), (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
                var_21 = (~(((/* implicit */int) var_14)));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((signed char) ((int) (unsigned char)89)));
}

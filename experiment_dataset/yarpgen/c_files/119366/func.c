/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119366
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
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
                var_19 ^= (-(((((/* implicit */_Bool) 365257139434563564LL)) ? (arr_6 [(signed char)5] [i_0]) : (2025427167))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [11U] [i_2] [i_1] [i_1] [i_0])) ? (max((-168350809), (((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_1])))) : (((int) min((((/* implicit */long long int) (_Bool)1)), (var_14))))));
                            var_22 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)1920)) ? (2025427155) : (((/* implicit */int) (_Bool)1)))) : ((~(-2025427156))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (var_0) : (max((((/* implicit */int) var_12)), (2025427174)))));
    var_24 = ((/* implicit */long long int) 2025427155);
    var_25 = var_5;
    var_26 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -2025427179))));
}

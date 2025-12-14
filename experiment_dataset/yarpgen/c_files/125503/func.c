/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125503
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
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) max((var_0), (var_0))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_13 [23LL] [(_Bool)1] [(_Bool)1] [12LL] [i_2] [(_Bool)1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [(signed char)16] [i_3 - 2] [i_3 + 1]))));
                                var_17 += ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_11 [21LL] [(signed char)22] [1LL] [(_Bool)1] [(_Bool)1] [i_3 - 1] [i_3 + 1])) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : ((~(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (((~(var_13))) >= (arr_5 [(_Bool)0] [i_1] [i_1]))))));
                                var_18 ^= ((/* implicit */_Bool) ((arr_5 [(_Bool)1] [18LL] [i_1]) & (((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_11)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = var_12;
    /* LoopNest 2 */
    for (long long int i_5 = 1; i_5 < 20; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_20 &= arr_9 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(signed char)15];
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_4 [(_Bool)1] [12LL]))));
                            var_22 ^= ((/* implicit */_Bool) (((((-(((/* implicit */int) (signed char)-29)))) * ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) << (((((min((((/* implicit */long long int) ((((/* implicit */_Bool) -1235219077277331834LL)) || (((/* implicit */_Bool) -7LL))))), (arr_1 [(signed char)8]))) + (5574196692366962372LL))) - (24LL)))));
                        }
                    } 
                } 
                arr_23 [i_5] = ((/* implicit */long long int) (-((+(((/* implicit */int) var_12))))));
            }
        } 
    } 
}

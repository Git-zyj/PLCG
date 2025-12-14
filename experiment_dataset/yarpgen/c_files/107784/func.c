/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107784
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
    var_20 = ((/* implicit */signed char) var_18);
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [(signed char)9] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 - 1])) >= (((/* implicit */int) arr_4 [i_0 + 1])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 |= ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-20))) == (-2664532447237925388LL))) ? (((((/* implicit */_Bool) arr_10 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0] [i_3] [i_4])) ? (((/* implicit */int) (short)-30940)) : (((/* implicit */int) arr_10 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_3] [i_0 - 2] [i_0 - 2])))) : (((((/* implicit */_Bool) (unsigned short)3822)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (unsigned short)24166))))));
                                var_22 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1] [i_0])) ? (((arr_13 [i_0] [i_0] [i_2] [i_3] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((var_18) / (var_19))))), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2] [(unsigned char)2] [i_4]))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_1] [i_0] [i_0])) ? (((((/* implicit */_Bool) 17)) ? (4193611559636972143LL) : (-6740348975788221220LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)3827)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), (6810162354894311218LL)))) ? (((/* implicit */int) var_12)) : (((var_9) ^ (((/* implicit */int) var_11))))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)254)), (4951269682317891620LL)))))))));
}

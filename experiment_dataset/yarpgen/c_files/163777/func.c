/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163777
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) == (((((((/* implicit */int) (unsigned char)208)) == (((/* implicit */int) (unsigned char)111)))) ? (((((/* implicit */_Bool) var_5)) ? (var_17) : (((/* implicit */int) (unsigned char)182)))) : (var_14)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_20 ^= (+(arr_0 [i_2]));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_13 [15LL] [15LL] [i_2] [(unsigned char)2] [(unsigned char)2] [i_1] [i_2] = 3959606944862512766LL;
                                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_15)) : (424066254)))) ? (((((/* implicit */_Bool) arr_10 [i_4 + 2] [14] [i_4] [1LL] [(unsigned char)23] [i_3])) ? (((/* implicit */long long int) var_14)) : (var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (424066249) : (-424066251)))));
                                arr_14 [i_0] [i_1 - 1] [i_1] [i_3] [i_2] = max((5308304998274813644LL), (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_1 + 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

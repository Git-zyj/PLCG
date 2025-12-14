/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117138
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((arr_5 [(unsigned char)9] [i_1 - 1] [i_2 - 1] [(signed char)6]) ? (((/* implicit */int) var_0)) : (var_10)))) && (((/* implicit */_Bool) min((arr_1 [i_0]), (var_6))))))) != (((((/* implicit */int) var_8)) - (((/* implicit */int) var_6))))));
                    var_18 = ((/* implicit */unsigned char) arr_3 [i_2 + 1] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) >= (var_14)))) != (((((/* implicit */int) var_4)) & (((/* implicit */int) var_5)))))))));
    var_20 = ((/* implicit */_Bool) ((unsigned char) max(((((_Bool)1) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) var_4))))))));
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) && (((/* implicit */_Bool) var_0))));
                var_22 = ((/* implicit */short) ((((min((-3841231414204896070LL), (var_13))) + (9223372036854775807LL))) << (((min((var_1), (((((/* implicit */long long int) ((/* implicit */int) var_11))) & (var_16))))) - (24LL)))));
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((short) arr_10 [i_4] [i_4] [i_3]))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 10U)))))) : (var_7))) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232))))))));
            }
        } 
    } 
}

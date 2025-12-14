/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159332
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
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_17 ^= ((/* implicit */int) (!((!(((/* implicit */_Bool) var_4))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) max((max((((/* implicit */signed char) var_14)), (arr_3 [i_0] [2U]))), (((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_3)))))));
                            var_19 ^= ((/* implicit */long long int) ((((1556647069862982661ULL) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))) - (max((min((16890097003846568957ULL), (((/* implicit */unsigned long long int) (short)-1)))), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(var_4)))), (((((16890097003846568951ULL) << (((((/* implicit */int) (unsigned char)252)) - (214))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            {
                var_21 = ((/* implicit */short) var_2);
                arr_18 [i_5] = ((/* implicit */int) ((((/* implicit */int) var_10)) >= ((+(((/* implicit */int) arr_13 [i_5]))))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) < (((/* implicit */int) var_10)))) ? (((((((/* implicit */_Bool) 16890097003846568951ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (16890097003846568951ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) == (((/* implicit */unsigned long long int) var_9))))))));
    var_23 = ((/* implicit */unsigned int) var_11);
}

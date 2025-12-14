/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123268
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
    var_18 = ((/* implicit */unsigned char) (+(min((max((((/* implicit */unsigned long long int) (unsigned char)226)), (3150616520577843486ULL))), (((/* implicit */unsigned long long int) var_12))))));
    var_19 = ((/* implicit */int) ((((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (3150616520577843486ULL)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_6 [i_0 - 2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) max((max((arr_5 [i_2 - 2] [i_0] [i_0 - 2]), (arr_5 [i_2 - 3] [i_0] [i_0 - 2]))), (((/* implicit */int) var_6))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_4 [(_Bool)0] [(_Bool)0] [i_2 + 2] [i_2 + 2])))) ? ((-(15296127553131708105ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 3150616520577843461ULL))))) + (((/* implicit */int) min((var_9), ((_Bool)1)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 1) 
                    {
                        {
                            var_21 &= ((/* implicit */unsigned char) var_5);
                            arr_17 [i_6 + 3] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_4 - 1])), (arr_12 [i_6 + 1] [i_6 + 2])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_8 [i_4 - 1])) ? (((/* implicit */unsigned long long int) arr_12 [i_6 + 2] [i_6 + 3])) : (arr_1 [i_4])))));
                            arr_18 [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) (~((-(((((arr_2 [i_4] [i_4]) + (2147483647))) >> (((/* implicit */int) var_1))))))));
                        }
                    } 
                } 
                arr_19 [i_3] [i_4] = ((/* implicit */int) (~(((((/* implicit */_Bool) var_8)) ? (arr_7 [i_4 - 1] [i_4 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
                var_22 = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) (+(((/* implicit */int) var_0))))), (((long long int) var_16)))), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) 3150616520577843486ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4] [i_4] [i_4] [i_3] [i_3] [i_3]))) : (arr_1 [i_4])))))));
                var_23 = ((/* implicit */int) min((var_13), (((/* implicit */long long int) arr_5 [i_3] [i_4] [i_3]))));
                arr_20 [i_4] [i_4] = min((max((1567622929), ((-(((/* implicit */int) var_5)))))), ((-((+(((/* implicit */int) arr_0 [(unsigned char)21])))))));
            }
        } 
    } 
}

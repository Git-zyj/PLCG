/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145110
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) var_2);
                var_17 = ((17074680569835575958ULL) >= (((/* implicit */unsigned long long int) ((((-661173145190588434LL) + (9223372036854775807LL))) >> (((((3983261357U) >> (((((/* implicit */int) (unsigned short)31302)) - (31293))))) - (7779796U)))))));
                var_18 *= ((/* implicit */_Bool) (~((~((~(((/* implicit */int) var_0))))))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */int) var_11)) != (((/* implicit */int) var_15)))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_16)))))))) & (((/* implicit */int) var_11))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        for (unsigned int i_3 = 1; i_3 < 17; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    for (unsigned int i_5 = 3; i_5 < 17; i_5 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) (~((~(-661173145190588428LL)))));
                            var_21 ^= ((/* implicit */_Bool) (-(((((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) / (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (var_14)))))));
                            var_22 = ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((/* implicit */int) (short)-30692)) & (((/* implicit */int) var_0))))));
                            arr_17 [i_4] |= ((/* implicit */_Bool) (-(var_7)));
                        }
                    } 
                } 
                var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_13))))))) ^ (var_9)));
                var_24 = ((/* implicit */unsigned short) (~(var_5)));
                arr_18 [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) var_15)) % (((/* implicit */int) ((((/* implicit */_Bool) -661173145190588428LL)) && (((/* implicit */_Bool) (~(661173145190588409LL)))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) -661173145190588427LL)) + (var_2)));
    var_26 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)11))))) >= (((var_14) | (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
}

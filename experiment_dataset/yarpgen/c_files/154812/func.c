/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154812
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
    var_12 = ((/* implicit */unsigned int) min((min((((/* implicit */signed char) ((((/* implicit */int) (signed char)-26)) < (((/* implicit */int) var_0))))), (var_3))), (((/* implicit */signed char) ((min((3408515586532688065ULL), (((/* implicit */unsigned long long int) 16LL)))) > ((+(15038228487176863580ULL))))))));
    var_13 = ((/* implicit */unsigned long long int) var_4);
    var_14 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) ((short) max((arr_0 [i_0] [i_1 + 2]), (((/* implicit */unsigned long long int) var_1)))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) min((15038228487176863580ULL), (((/* implicit */unsigned long long int) arr_8 [i_1 + 2] [i_0] [i_2] [i_3] [i_3 + 1]))));
                            arr_10 [i_0] [i_1 + 1] = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)25)))))) % (arr_4 [i_2 - 2]));
                            var_17 = ((/* implicit */short) (~(((/* implicit */int) (signed char)-1))));
                            var_18 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (17954420402374394883ULL))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)213))) * (492323671335156754ULL)))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1 + 1] = ((/* implicit */signed char) ((((unsigned long long int) max((((/* implicit */int) var_0)), (var_7)))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned char)230), (((/* implicit */unsigned char) var_1))))) * (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_0] [i_1 - 2])))))))));
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((5916484701640765804LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)31)))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_1 - 1] [i_0]), (arr_6 [i_0] [i_1 + 1] [i_0])))) ? (((15347704007184565819ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_1 - 2] [i_1 + 1] [i_0]))))));
            }
        } 
    } 
    var_20 = ((845398816U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
}

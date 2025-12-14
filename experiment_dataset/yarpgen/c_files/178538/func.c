/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178538
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
    var_17 &= ((((/* implicit */_Bool) (unsigned short)19037)) ? ((~(min((7510977894505066797ULL), (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))));
    var_18 = ((/* implicit */signed char) ((unsigned char) var_2));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_0] [0LL] [i_3] [i_3] &= ((/* implicit */signed char) var_8);
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_4 + 2] [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_6)) > (((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1] [i_0] [i_4])))), (max(((_Bool)1), ((_Bool)1)))));
                            }
                        } 
                    } 
                    var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((var_0), (var_4))), (((/* implicit */signed char) (_Bool)1))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-124)), (1099511627775LL)))) ? ((-(var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), (var_5))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_3 [i_0 + 1] [6LL] [i_0 + 1]))))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [i_0 + 1] [i_0 + 1]) | (((/* implicit */unsigned long long int) 3023502661U))))) ? (max((((/* implicit */int) (_Bool)1)), (-1079565590))) : (-1079565590)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) / (var_16)));
}

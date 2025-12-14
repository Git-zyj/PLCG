/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163294
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
    var_11 = -4022037454792169620LL;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        var_12 += ((/* implicit */unsigned char) (-(max((arr_1 [(_Bool)1]), (((/* implicit */unsigned long long int) 0LL))))));
        var_13 = ((/* implicit */_Bool) 4099929980U);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */_Bool) max((max((arr_12 [3U] [i_1] [i_2] [i_3] [i_3]), (((/* implicit */short) (signed char)41)))), (max((arr_12 [i_0 + 3] [i_0] [i_1] [3LL] [3LL]), (arr_12 [i_0] [i_1] [i_2] [i_2] [i_3])))));
                        arr_14 [(short)0] [i_0] [(_Bool)1] [i_2] [(short)0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65515)) && (((/* implicit */_Bool) var_0))))), (max((((/* implicit */unsigned long long int) var_0)), (arr_1 [i_0])))));
                        /* LoopSeq 1 */
                        for (int i_4 = 3; i_4 < 16; i_4 += 1) 
                        {
                            arr_17 [3LL] [i_0] [i_0] [(unsigned char)0] [i_4 - 3] = ((/* implicit */signed char) arr_8 [i_4 + 1]);
                            var_15 = ((/* implicit */long long int) min((var_15), (var_8)));
                            var_16 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 16822811995310761117ULL)) && (((/* implicit */_Bool) 0ULL))))))))));
                        }
                        var_17 = ((/* implicit */unsigned int) (((+(arr_3 [i_0 + 1]))) == (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                    }
                    var_18 = ((/* implicit */_Bool) (-(max((arr_3 [(short)0]), (((/* implicit */unsigned int) min((((/* implicit */signed char) var_1)), ((signed char)41))))))));
                    var_19 = ((/* implicit */short) min((((/* implicit */long long int) var_1)), (var_9)));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((max((((/* implicit */int) ((((/* implicit */int) (signed char)-39)) >= (((/* implicit */int) var_10))))), ((-(((/* implicit */int) var_1)))))) >> (((var_6) - (679723557U))))))));
    var_21 = ((/* implicit */short) var_9);
}

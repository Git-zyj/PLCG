/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11664
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1073741823LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-118))) : (7746543103127245748LL)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) (+(((((/* implicit */long long int) 1192675436)) - (-579458671161979326LL)))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) 1125899906842623LL);
                                var_21 = ((((((var_17) - (((/* implicit */long long int) ((/* implicit */int) var_10))))) - (((-7746543103127245777LL) - (((/* implicit */long long int) var_12)))))) - (((((/* implicit */long long int) ((/* implicit */int) var_0))) + (var_14))));
                            }
                        } 
                    } 
                    var_22 = max((max((((/* implicit */int) (short)8658)), (arr_11 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 3] [i_1 + 2] [i_1]))), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_11 [i_2] [i_1] [i_1 - 4] [i_0] [(signed char)9] [i_0]) / (-128005879)))) && (((/* implicit */_Bool) var_12))))));
                    arr_15 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) var_5);
                    /* LoopNest 2 */
                    for (short i_5 = 3; i_5 < 15; i_5 += 3) 
                    {
                        for (int i_6 = 2; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) var_0);
                                var_24 = ((/* implicit */long long int) ((unsigned short) (-(var_1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        for (short i_8 = 1; i_8 < 17; i_8 += 3) 
        {
            for (short i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                {
                    arr_30 [i_7] [i_7] = (i_7 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? ((-(((((/* implicit */int) arr_22 [i_7])) << (((((/* implicit */int) arr_25 [i_7] [i_7] [i_9])) - (32))))))) : (((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? ((-(((((/* implicit */int) arr_22 [i_7])) << (((((((((/* implicit */int) arr_25 [i_7] [i_7] [i_9])) - (32))) + (114))) - (7))))))) : (((/* implicit */int) var_0)))));
                    var_25 = ((/* implicit */unsigned short) ((int) max((((/* implicit */long long int) var_12)), (min((var_17), (var_17))))));
                    arr_31 [i_7] [i_8] [i_7] [(short)15] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) && (((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (-263935478))))))));
                }
            } 
        } 
    } 
}

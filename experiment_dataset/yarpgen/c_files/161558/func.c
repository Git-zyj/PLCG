/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161558
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) 3069034562U))));
        var_19 += ((/* implicit */int) var_2);
        var_20 -= ((/* implicit */_Bool) 2810022194948043832LL);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_21 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1]))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 21; i_2 += 3) 
        {
            for (int i_3 = 3; i_3 < 20; i_3 += 1) 
            {
                {
                    var_22 = var_16;
                    arr_13 [i_3] [i_3] [i_3] [i_1] = ((/* implicit */signed char) (_Bool)0);
                }
            } 
        } 
        var_23 = ((/* implicit */int) (_Bool)1);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            for (signed char i_5 = 2; i_5 < 21; i_5 += 2) 
            {
                {
                    var_24 = ((/* implicit */_Bool) ((unsigned int) arr_8 [i_4] [i_5 + 2] [i_5 + 2]));
                    var_25 += ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_0)))) ? ((~(((/* implicit */int) arr_6 [i_4] [i_1])))) : (((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 21; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 4; i_7 < 22; i_7 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */int) max((var_26), (((((/* implicit */int) (_Bool)1)) ^ (arr_19 [i_7 - 2] [i_7] [i_7 - 2] [i_7 - 2] [i_7 - 2])))));
                                var_27 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) var_10)) || (var_6)))));
                                var_28 = (-(2136762946U));
                                arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (signed char)81);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_29 = ((/* implicit */signed char) (~(((unsigned int) (-(var_12))))));
    var_30 &= ((/* implicit */unsigned char) (~((~((~(var_12)))))));
}

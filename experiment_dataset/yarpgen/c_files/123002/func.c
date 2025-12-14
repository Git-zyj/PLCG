/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123002
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((unsigned short) ((unsigned short) arr_6 [i_0 - 1] [i_1] [i_0 - 1])));
                                arr_13 [i_2] [i_2] [i_2] [i_2] [i_1] [i_2] |= ((/* implicit */_Bool) (+(((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                                arr_14 [i_4] [i_4] [i_1] [i_1] [0U] [16U] = ((/* implicit */_Bool) (-(var_4)));
                                var_19 ^= ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_2] [i_3] [i_0 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_4] [(unsigned short)16] [i_0 - 1] [i_2] [i_4]))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4102)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4102))) : (0U)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (short)26930))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) 229376ULL);
                            var_22 = ((/* implicit */_Bool) min((var_22), ((_Bool)1)));
                            var_23 = (-((+(((/* implicit */int) (short)-26930)))));
                        }
                    } 
                } 
                var_24 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 383597991)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_5))));
                var_25 = ((/* implicit */long long int) ((signed char) 4294967295U));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        for (short i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            {
                arr_25 [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_14)) * (((/* implicit */int) var_10)))) / (((/* implicit */int) ((_Bool) var_5)))))) >= (var_6)));
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_8] [i_8])) + (((/* implicit */int) ((unsigned short) arr_20 [6U] [i_8]))))))));
            }
        } 
    } 
    var_27 &= ((/* implicit */long long int) var_14);
}

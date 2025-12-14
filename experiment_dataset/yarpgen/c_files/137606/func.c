/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137606
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
    var_18 = ((/* implicit */short) var_14);
    var_19 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((unsigned short) (_Bool)1)))));
        var_21 ^= min((max((max((((/* implicit */unsigned int) (unsigned char)202)), (var_1))), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) (_Bool)1)));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((long long int) 1273737245)) - (min((((((/* implicit */_Bool) (signed char)112)) ? (-4938178927575560918LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-121))))))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_23 &= ((/* implicit */_Bool) (unsigned short)11793);
        /* LoopNest 2 */
        for (short i_2 = 4; i_2 < 15; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    arr_12 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 3; i_4 < 13; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_24 -= ((unsigned short) (short)-29989);
                                var_25 *= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) != (var_13)))) : (((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 15; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            {
                                arr_22 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned int) (unsigned short)45999);
                                var_26 += ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)54680))));
                                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (+(343300362U))))));
                            }
                        } 
                    } 
                    arr_23 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)4945)) == (((/* implicit */int) var_12))));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178133
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_8 [i_0 - 2])))) % (((/* implicit */int) arr_8 [i_2]))));
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_7 [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0 + 1]), (arr_7 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1])))) < (((/* implicit */int) ((short) max((arr_0 [i_0 + 1] [i_1]), ((short)-2748)))))));
                }
            } 
        } 
    } 
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (max((11431003240787730034ULL), (var_0))) : (var_0)))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)2758))))))) : (max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_0))), (((((/* implicit */_Bool) var_7)) ? (0ULL) : (0ULL))))));
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        for (short i_7 = 3; i_7 < 18; i_7 += 2) 
                        {
                            {
                                var_20 -= (short)2758;
                                arr_24 [i_4] [i_6] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_19 [i_5] [i_6] [i_7 + 2])) ? (((/* implicit */int) arr_19 [i_4] [i_5] [i_4])) : (((/* implicit */int) (signed char)58)))));
                                arr_25 [i_3] [i_4] [i_3] [i_5] [i_6] [i_7 - 1] = ((/* implicit */signed char) var_4);
                                arr_26 [i_3] [i_4] [i_5] [i_4] [i_6] [i_7 - 3] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_12 [i_7 - 3])))) * (((((/* implicit */_Bool) arr_18 [i_3] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3]))) : (arr_18 [i_3] [i_3] [i_3])))));
                                arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((var_16), (((/* implicit */unsigned long long int) (short)32256)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32761)) > (((/* implicit */int) (signed char)-127)))))))) ? (max((min((var_8), (((/* implicit */unsigned long long int) arr_12 [i_3])))), (var_10))) : (var_6)));
                            }
                        } 
                    } 
                    var_21 = var_13;
                }
            } 
        } 
    } 
}

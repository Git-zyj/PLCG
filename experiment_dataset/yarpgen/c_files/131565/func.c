/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131565
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) (short)32756)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)-31153)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)105))) : (var_3)))))))))));
                    var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned int) var_4)))) : (((var_0) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_4] = ((/* implicit */_Bool) var_7);
                                var_14 += ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((4294967271U) << (((248920946U) - (248920924U)))))))) * ((+(var_9)))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((unsigned long long int) var_5))))) ? (4294967269U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        arr_18 [21U] [i_5] = ((/* implicit */unsigned char) (+(((int) arr_17 [i_5] [i_5]))));
        arr_19 [i_5] = ((/* implicit */unsigned long long int) var_6);
        arr_20 [i_5] [i_5] = ((/* implicit */signed char) (((+(((/* implicit */int) arr_15 [i_5])))) <= ((+(((/* implicit */int) (unsigned char)186))))));
        arr_21 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_5] [i_5])) <= (((/* implicit */int) (_Bool)1))));
    }
    var_17 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (var_4)));
}

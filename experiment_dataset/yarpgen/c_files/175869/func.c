/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175869
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
    var_17 = ((/* implicit */int) min((var_17), (((((((/* implicit */int) (signed char)117)) >= (((/* implicit */int) (signed char)79)))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) 309939614U))))), (((((/* implicit */int) (signed char)-88)) + (((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_16)) : (var_11)))))));
    var_18 = ((/* implicit */unsigned int) -4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((unsigned char) 875138827U));
                arr_6 [i_1] [i_1] = (!(((/* implicit */_Bool) var_11)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) min(((-(((/* implicit */int) var_5)))), ((~(((arr_12 [i_0] [i_1] [i_2] [i_3] [i_3]) ? (519064244) : (((/* implicit */int) (_Bool)1))))))));
                            arr_13 [i_1] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) -519064260)), (18446744073709551615ULL))) > (((/* implicit */unsigned long long int) -519064244))));
                            var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 1430870233U)) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) var_3)))) == (((/* implicit */int) (unsigned short)27889))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_0 + 2] [i_1])) : (((/* implicit */int) (unsigned short)57440))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)117))))));
                        }
                    } 
                } 
                arr_14 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) 1060449336U)))))) ? (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)44536)) : (((/* implicit */int) var_8)))), (((/* implicit */int) (_Bool)1)))) : (((((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */int) var_14)))) + (-67108864)))));
            }
        } 
    } 
    var_21 += ((/* implicit */unsigned int) var_13);
}

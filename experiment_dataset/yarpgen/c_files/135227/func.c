/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135227
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
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_15)) & (((/* implicit */int) var_14)))));
                    arr_6 [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) (unsigned short)25557))))) ? (((2120752772U) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) (signed char)-45)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((short) var_8))) : (((((/* implicit */_Bool) 2174214524U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)96)))))))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((short) 2120752782U))) / (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-28365))) == (2174214490U))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (short)-27760))) ? (((/* implicit */int) ((_Bool) 2174214525U))) : (((((/* implicit */int) var_9)) / (((/* implicit */int) var_6))))));
                                arr_12 [i_0] [(signed char)5] [i_2] [i_3] = ((/* implicit */unsigned short) 2120752782U);
                                arr_13 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) (signed char)73))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_16)))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) 2174214513U);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) (signed char)-68);
    var_22 = ((/* implicit */_Bool) var_1);
}

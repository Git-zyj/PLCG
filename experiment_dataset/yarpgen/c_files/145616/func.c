/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145616
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_13 |= ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)124)), (139160250U)))) ? (min(((~(((/* implicit */int) var_9)))), (min((2077168655), (((/* implicit */int) arr_1 [i_0 + 2])))))) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0]))));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) max((((/* implicit */int) arr_0 [i_0] [i_0])), ((~(((/* implicit */int) var_5)))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 21; i_2 += 2) 
        {
            for (int i_3 = 1; i_3 < 21; i_3 += 2) 
            {
                for (unsigned int i_4 = 1; i_4 < 19; i_4 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) < (((/* implicit */int) arr_4 [i_1]))));
                        var_17 = (+(((/* implicit */int) var_5)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 21; i_5 += 2) 
        {
            for (short i_6 = 4; i_6 < 21; i_6 += 2) 
            {
                {
                    var_18 = ((/* implicit */int) min((((/* implicit */unsigned int) (signed char)124)), ((-(max((1414327586U), (((/* implicit */unsigned int) arr_15 [i_1] [i_6]))))))));
                    var_19 ^= ((/* implicit */signed char) max((((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-117))))) ^ ((~(139160250U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) (unsigned short)40529)) : (2147483647))))));
                }
            } 
        } 
        var_20 = (signed char)114;
    }
    for (int i_7 = 1; i_7 < 16; i_7 += 2) 
    {
        var_21 |= ((/* implicit */int) (~(((min((((/* implicit */unsigned int) arr_11 [i_7])), (4155807046U))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_7] [i_7] [i_7]))) / (var_12)))))));
        arr_19 [i_7] [i_7] = (signed char)123;
    }
    var_22 ^= ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)));
    var_23 ^= (+(((((/* implicit */_Bool) (+(4155807046U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4155807046U)))))) : ((+(var_12))))));
}

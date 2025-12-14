/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126921
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
                        var_17 = (-(min((var_4), (((/* implicit */unsigned int) var_14)))));
                        var_18 = ((/* implicit */signed char) (~(4294967295U)));
                    }
                } 
            } 
        } 
        arr_12 [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_12)))))))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? ((~(((/* implicit */int) (unsigned char)69)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))))))));
        arr_13 [i_0 - 2] [i_0 - 2] = ((/* implicit */int) (signed char)97);
    }
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (_Bool)1))));
}

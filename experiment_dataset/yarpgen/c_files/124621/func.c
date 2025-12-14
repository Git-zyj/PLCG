/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124621
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) ? ((~((+(((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? ((-(((/* implicit */int) var_1)))) : (((var_5) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_11))))) < (((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? ((~(var_2))) : (max((((/* implicit */unsigned int) var_5)), (var_2)))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned long long int) max((((var_5) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))))))));
        var_14 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (((/* implicit */int) ((signed char) var_3))) : ((~(((/* implicit */int) var_0))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) var_0);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned char) var_1));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))) ? ((~(((/* implicit */int) var_8)))) : ((~(((/* implicit */int) var_1))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                {
                    arr_12 [i_3] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))));
                    arr_13 [i_1] [i_3] [i_2] [i_2] = ((/* implicit */signed char) (+((+(((/* implicit */int) (signed char)55))))));
                }
            } 
        } 
        arr_14 [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
    }
    for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        arr_17 [i_4] [i_4] = ((/* implicit */signed char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_12) << (((((/* implicit */int) var_0)) - (79))))))))), (var_1)));
        arr_18 [i_4] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) var_0)))))))));
        var_16 = ((/* implicit */unsigned int) var_9);
        var_17 = (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) ((signed char) (unsigned short)37676)))))));
    }
    var_18 += (-((~(min((((/* implicit */unsigned int) var_10)), (var_6))))));
}

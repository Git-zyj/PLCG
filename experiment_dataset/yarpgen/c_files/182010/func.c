/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182010
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
    var_17 = ((/* implicit */unsigned char) var_4);
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) && (((var_11) && (((/* implicit */_Bool) var_12))))))) - (var_7)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((var_2) >= (((/* implicit */long long int) ((/* implicit */int) var_6)))))) : (var_1)));
        var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_16)) : (var_7)))) || ((!(((/* implicit */_Bool) var_15))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [9ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(var_13))) | (var_14)))) ? ((~(((/* implicit */int) var_10)))) : ((~(var_9)))));
        var_21 = ((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
        /* LoopNest 3 */
        for (short i_2 = 2; i_2 < 9; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */long long int) var_13))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_3))))) : ((~(var_15))))))));
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((/* implicit */int) var_0)))))))) : (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (var_13))) - (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12)))))))))));
                    }
                } 
            } 
        } 
        arr_14 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) var_3)) ? (var_7) : (var_1))) : (((/* implicit */int) ((var_7) < (((/* implicit */int) var_3)))))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))));
    }
}

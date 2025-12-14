/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123378
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_16 -= ((/* implicit */short) 1718187287U);
        arr_4 [i_0] = ((/* implicit */long long int) min((max((var_14), ((~(var_14))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)31)), (var_2)))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 8; i_1 += 2) 
    {
        arr_7 [i_1] = max((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) arr_1 [i_1 + 2])) : (arr_6 [i_1]))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) / (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (~((+(max((((/* implicit */long long int) arr_0 [i_1] [i_1 + 1])), (7965890345165286105LL))))))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 8; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) ((short) (+(8822666552613419846LL))));
                        var_19 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) arr_2 [i_1 + 2])))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [i_1 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) arr_8 [i_1]))))))))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_10 [i_1 + 1]), (arr_10 [i_1 + 1])))) ? (((/* implicit */int) max((arr_10 [i_1 + 1]), (arr_10 [i_1 + 1])))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)111))))));
                        var_21 = ((/* implicit */unsigned int) arr_1 [i_2]);
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned char) var_13);
}

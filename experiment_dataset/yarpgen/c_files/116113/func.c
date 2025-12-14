/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116113
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_17 += ((/* implicit */short) min((((((/* implicit */_Bool) max((var_13), (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)-2882)))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) 638100418)), (var_10))))));
        var_18 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))));
        var_19 += ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_8 [i_3] [(_Bool)1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) (_Bool)1))))) ? (max((((/* implicit */unsigned int) (unsigned short)10597)), (4294967295U))) : (26U))) < (((((/* implicit */unsigned int) ((/* implicit */int) (short)-32767))) + (min((((/* implicit */unsigned int) (unsigned char)62)), (4294967295U)))))));
                        var_20 = 7U;
                        var_21 -= ((/* implicit */signed char) var_0);
                    }
                } 
            } 
        } 
    }
    var_22 -= min(((((!(((/* implicit */_Bool) var_16)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)11)) && (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) ((short) (unsigned short)61672))))), (((int) min((((/* implicit */long long int) var_2)), (-2086504689594997156LL)))));
}

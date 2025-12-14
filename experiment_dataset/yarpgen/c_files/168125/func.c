/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168125
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
    var_11 = ((/* implicit */short) ((unsigned char) ((unsigned long long int) max((var_1), (((/* implicit */long long int) var_8))))));
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) var_0))));
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_7))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) 2243823146U);
        var_14 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((unsigned long long int) min((var_9), (22ULL)))) >= (((/* implicit */unsigned long long int) var_1)))))));
        var_16 = ((/* implicit */unsigned long long int) (!(((max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (var_7))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-18831)))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(min((arr_5 [i_1]), (arr_5 [i_1]))))))));
        arr_7 [i_1] = ((/* implicit */signed char) var_9);
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (signed char i_3 = 4; i_3 < 20; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    {
                        arr_15 [i_1] = ((((/* implicit */_Bool) (~(var_8)))) ? (((unsigned long long int) arr_13 [i_4] [6] [i_2] [i_1])) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) (short)-18831)))))));
                        arr_16 [i_1] [13] [(unsigned char)5] [i_4] = ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) arr_10 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(short)6] [i_4]))) : (arr_8 [15U] [i_4]))), (max((22ULL), (((/* implicit */unsigned long long int) arr_6 [i_3])))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))));
                        arr_17 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)10))))) ? (((((/* implicit */_Bool) 22ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_3 - 2]))))) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                    }
                } 
            } 
        } 
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146510
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
    var_12 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (393564939U)))))) < ((+(((1023ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31744)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0 + 1])), (4294967285U)))))))))));
        var_14 = ((/* implicit */int) arr_0 [i_0 + 1]);
    }
    for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) min((var_3), (var_10))))));
        var_16 = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_2)))) != ((~(((/* implicit */int) var_8))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) arr_5 [i_1 - 1]);
    }
    /* vectorizable */
    for (unsigned short i_2 = 2; i_2 < 9; i_2 += 4) 
    {
        var_17 = ((/* implicit */int) max((var_17), ((+(((/* implicit */int) (unsigned short)33818))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (unsigned char i_4 = 2; i_4 < 8; i_4 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((arr_5 [i_2 + 2]) % (((/* implicit */int) (unsigned char)246))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) ^ (arr_5 [i_2 - 1])));
                }
            } 
        } 
        arr_15 [i_2 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_2 - 2])) : (((/* implicit */int) var_6))));
    }
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) var_2)))), (((((/* implicit */_Bool) var_11)) && (var_5))))))));
}

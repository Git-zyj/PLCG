/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147282
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
    var_14 = ((/* implicit */unsigned long long int) var_3);
    var_15 = var_1;
    var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_0))))) ? ((+(((/* implicit */int) (signed char)71)))) : (((/* implicit */int) (signed char)-97))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)111)))))))) : (max(((~(var_9))), (((/* implicit */long long int) var_6))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-84)) & (((/* implicit */int) (signed char)-97)))))))) <= (((/* implicit */int) (signed char)-97))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)3499))))), (var_10))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)3])))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_6 [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23774)) ? (((((/* implicit */int) (signed char)-97)) / (((/* implicit */int) var_5)))) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) -6130707585020584038LL)) ? (((/* implicit */int) (signed char)-88)) : (((int) (short)3512)))) : (((/* implicit */int) arr_4 [i_1] [i_1]))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_1] [i_2] [i_2] = ((/* implicit */int) ((short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0))))))));
            var_17 = ((/* implicit */unsigned int) (signed char)74);
            arr_11 [i_2] = ((/* implicit */signed char) var_13);
            arr_12 [i_2] [i_2] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)3526))))))) & (((/* implicit */int) ((short) ((signed char) var_2))))));
        }
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]))));
        arr_13 [i_1] |= ((/* implicit */_Bool) ((var_0) ? (2297637006768738990ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0)))))));
    }
    for (signed char i_3 = 3; i_3 < 15; i_3 += 4) 
    {
        arr_16 [i_3] = ((/* implicit */int) (!(var_7)));
        arr_17 [i_3] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_4))))));
        var_19 = ((/* implicit */unsigned int) max((((((((/* implicit */int) var_5)) >= (((/* implicit */int) (unsigned short)248)))) ? (max((4095LL), (6423803805756748648LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) var_3))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_10))) && (((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) ((arr_15 [i_3]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))))))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114250
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
    var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */int) min(((short)(-32767 - 1)), ((short)-32751)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32761))))));
    var_14 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_1 + 4] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_1 - 1] [i_2 + 1] [i_2 + 3]))) ? (((((/* implicit */_Bool) -1688724980)) ? (((/* implicit */int) (short)-26497)) : (((/* implicit */int) (unsigned char)149)))) : (((/* implicit */int) arr_4 [i_1 + 4] [i_2 + 2] [i_2 - 2]))));
                        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) arr_3 [i_3] [i_2]))));
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (short)32757)) ? (4795483436776330956ULL) : (((/* implicit */unsigned long long int) 2147483647))));
                        arr_12 [i_0] [i_1 - 2] [i_2 + 3] [i_3] = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_1 + 3] [i_3])))), (((((/* implicit */_Bool) (short)32759)) ? (((/* implicit */int) arr_4 [i_3] [i_2] [i_1])) : (((/* implicit */int) var_2)))))), (((/* implicit */int) arr_0 [i_3]))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]);
        arr_14 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (min((((/* implicit */unsigned long long int) (short)-2179)), (12464454947160314983ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0])) >= (((/* implicit */int) arr_3 [i_0] [i_0]))))))));
        arr_15 [i_0] = ((/* implicit */_Bool) ((int) max((arr_2 [i_0] [i_0] [i_0]), ((short)4581))));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))));
    }
}

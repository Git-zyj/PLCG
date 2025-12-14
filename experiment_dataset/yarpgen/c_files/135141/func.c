/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135141
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
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))) && (arr_2 [i_0] [i_0])));
        var_16 += ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */int) ((var_10) ? (((((arr_2 [i_0] [i_0]) ? (arr_3 [i_1]) : (arr_6 [i_0]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((0) - (7)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)8261))))) : (var_14)))));
            arr_7 [i_1] = ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 1969664224974507879ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-15769)))))) ? ((~(((/* implicit */int) arr_5 [i_0] [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54937)) ? (((/* implicit */int) (unsigned short)54929)) : (((/* implicit */int) (short)-15769))))) ? ((~(((/* implicit */int) arr_2 [i_1] [3ULL])))) : (((/* implicit */int) var_8)))));
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_1)) & (-16)))))) ? (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))) : (((/* implicit */int) var_5))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 12; i_2 += 1) 
        {
            arr_10 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (unsigned short)20754);
            var_19 = ((/* implicit */int) arr_9 [i_2 + 1]);
            arr_11 [i_0] [i_0] [(unsigned short)12] = ((/* implicit */int) (unsigned short)54937);
            arr_12 [i_0] [i_0] = ((/* implicit */int) arr_3 [i_0]);
        }
    }
    var_20 = ((((-12) - (((/* implicit */int) (signed char)-7)))) >= (((/* implicit */int) var_5)));
    var_21 = (+(((((/* implicit */_Bool) (unsigned short)54924)) ? (((/* implicit */int) var_10)) : ((-(591839660))))));
    var_22 -= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
}

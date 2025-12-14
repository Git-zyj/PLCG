/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143543
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
    var_11 = ((/* implicit */_Bool) (unsigned char)7);
    var_12 = (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)244)) >= (((((/* implicit */_Bool) (short)17517)) ? (-1466622449) : (((/* implicit */int) (unsigned char)11))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [(_Bool)1] [i_1] |= ((/* implicit */int) ((((((/* implicit */_Bool) 7676020067195678538ULL)) ? (((/* implicit */int) (short)-29)) : ((-(((/* implicit */int) arr_5 [(_Bool)1] [i_0])))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21566)) ? (((/* implicit */int) (unsigned char)7)) : (-768541509)))) ? (((/* implicit */int) min(((unsigned char)244), (var_10)))) : (((/* implicit */int) ((short) var_2)))))));
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (min((arr_0 [i_0] [i_1]), (9088621680868457922ULL))) : ((-(arr_0 [i_0] [i_1]))))))));
                var_14 -= ((/* implicit */_Bool) var_1);
            }
        } 
    } 
    var_15 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)245)), ((short)-997)))), (((((/* implicit */_Bool) (unsigned char)219)) ? (((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)996))) : (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)208)) ? (var_7) : (var_7))))))));
}

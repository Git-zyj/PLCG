/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165283
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
    var_17 = ((/* implicit */_Bool) min((max(((~(393995199U))), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) (signed char)32))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (short)-5602))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)21);
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned int) arr_1 [10U]));
        var_19 *= ((/* implicit */unsigned int) (signed char)-81);
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_20 *= ((/* implicit */short) max((min((((unsigned int) arr_5 [i_1])), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) (unsigned char)234))));
        arr_6 [i_1] = ((/* implicit */unsigned int) ((signed char) (unsigned char)234));
        var_21 = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((arr_0 [i_1]), (((/* implicit */short) arr_5 [i_1]))))) ? (((/* implicit */int) arr_5 [i_1])) : ((~(((/* implicit */int) (signed char)-25)))))), ((-((+(((/* implicit */int) (unsigned char)229))))))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)21)) ? (max((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-3325))))), (arr_4 [i_1] [i_1]))) : (((unsigned int) ((((/* implicit */_Bool) 3900972108U)) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
    {
        var_23 *= ((/* implicit */short) max((max((((/* implicit */unsigned int) (short)30293)), (((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6074))) : (arr_10 [i_2]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)5)), (arr_0 [i_2])))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((((/* implicit */_Bool) 1411812924U)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_7 [i_2] [i_2])))))))));
        arr_11 [(short)16] = ((/* implicit */unsigned short) arr_5 [i_2]);
    }
    /* vectorizable */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)5812)) ? ((+(((/* implicit */int) (short)-25538)))) : (((/* implicit */int) ((unsigned char) (unsigned short)14924))))))));
        arr_15 [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)14906))));
    }
}

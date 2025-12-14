/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175146
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) - (((((/* implicit */int) var_8)) >> (((((var_1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))) - (216)))))));
    var_14 = ((/* implicit */_Bool) max((var_14), (var_4)));
    var_15 = var_7;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */int) arr_1 [(unsigned char)6])) | (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0])))) | (((/* implicit */int) max((((unsigned char) arr_0 [i_0] [i_0])), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)92)) != (((/* implicit */int) arr_1 [i_0]))))))))));
        arr_5 [i_0] = ((/* implicit */_Bool) (unsigned short)7385);
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (unsigned char)13))) & (((/* implicit */int) (unsigned char)244))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)26185)) * (((/* implicit */int) (unsigned char)7))));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_18 = ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_8 [i_2])));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)30768)) : (((/* implicit */int) arr_6 [i_1] [i_2])))) : (((/* implicit */int) arr_8 [i_1]))));
        }
        var_20 -= ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
        var_21 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_8 [i_1])))) + (((/* implicit */int) max((arr_8 [i_1]), (arr_8 [i_1]))))));
        var_22 -= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) < (((/* implicit */int) arr_9 [i_1] [i_1] [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_6 [(unsigned char)4] [i_1])) % (((/* implicit */int) arr_9 [i_1] [i_1] [i_1])))))));
        arr_11 [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? ((+(((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) arr_7 [i_1]))))))) : (((((/* implicit */_Bool) min((arr_10 [i_1] [i_1] [i_1]), (arr_10 [i_1] [i_1] [i_1])))) ? (((/* implicit */int) (unsigned char)66)) : ((-(((/* implicit */int) arr_8 [i_1]))))))));
    }
}

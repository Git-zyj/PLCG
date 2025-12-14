/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140598
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_0))) >> (((var_2) + (737110439)))));
    var_13 = ((/* implicit */unsigned char) (~(((int) var_0))));
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_1 [i_0]))) + (((/* implicit */int) (unsigned short)47177))));
        arr_2 [i_0] = ((/* implicit */unsigned char) min((arr_0 [i_0 - 1]), (min((arr_0 [i_0]), (arr_0 [i_0 - 1])))));
        arr_3 [i_0] = ((/* implicit */int) (_Bool)1);
        var_15 = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) var_5)) : (var_7)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) min((1002402187), (((((/* implicit */int) (unsigned short)41684)) * (((/* implicit */int) arr_4 [i_1] [i_1]))))));
        arr_8 [i_1] [17] = ((/* implicit */unsigned short) (((-(((/* implicit */int) max((arr_7 [i_1]), (((/* implicit */unsigned short) arr_5 [i_1]))))))) % (max((((/* implicit */int) arr_5 [i_1])), (max((0), (((/* implicit */int) (_Bool)1))))))));
        var_17 = ((/* implicit */unsigned char) arr_4 [i_1] [i_1]);
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_1] [i_1]) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((arr_7 [i_1]), (((/* implicit */unsigned short) arr_6 [i_1] [11]))))) : (((((/* implicit */int) arr_4 [i_1] [i_1])) * (((/* implicit */int) (unsigned short)41684))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned short) var_2);
        var_18 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)41684)) % (((/* implicit */int) arr_10 [i_2] [(_Bool)1]))))) ? (max((((/* implicit */int) var_8)), (-13))) : (var_2)))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((var_3) | (((/* implicit */int) arr_6 [i_2] [(unsigned short)15])))))) : (((/* implicit */int) arr_0 [i_2]))));
    }
    var_20 = ((/* implicit */_Bool) max((((min((var_6), ((_Bool)1))) ? (((/* implicit */int) ((var_6) && (((/* implicit */_Bool) 421228447))))) : (min((((/* implicit */int) var_1)), (-1294988673))))), (var_11)));
}

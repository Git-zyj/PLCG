/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117331
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_1 [i_0] [i_0])))) ? ((-(arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [i_0])));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned long long int) var_14)), (arr_1 [i_0] [i_0]))))) / (max((arr_1 [i_0] [i_0]), (((137438953471ULL) / (((/* implicit */unsigned long long int) var_17))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_5)) + (min((((unsigned long long int) var_5)), (max((((/* implicit */unsigned long long int) -639183853)), (arr_1 [i_0] [(_Bool)1])))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_5 [(_Bool)1] = ((/* implicit */long long int) var_4);
        var_22 = (+(max((max((-1), (((/* implicit */int) arr_4 [i_1])))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 - 1])))))));
        var_23 -= ((/* implicit */int) ((unsigned char) (~(((unsigned long long int) var_7)))));
    }
    for (int i_2 = 2; i_2 < 17; i_2 += 1) 
    {
        var_24 -= ((/* implicit */long long int) arr_7 [i_2]);
        var_25 = ((/* implicit */unsigned char) arr_9 [(unsigned char)3]);
        var_26 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_7 [i_2])), (arr_8 [i_2 + 1] [i_2 - 1])));
        var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_12))));
    }
    var_28 = 639183836;
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186630
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [(unsigned short)10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [(unsigned short)8] [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)56)))) : (((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_18 -= arr_1 [i_0];
    }
    for (unsigned char i_1 = 2; i_1 < 23; i_1 += 4) 
    {
        arr_7 [(unsigned short)15] |= ((/* implicit */unsigned char) (unsigned short)42926);
        arr_8 [i_1] = min((((/* implicit */unsigned short) (unsigned char)40)), ((unsigned short)675));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_6 [i_1])))) > (((((/* implicit */_Bool) max((((/* implicit */short) arr_4 [i_1])), (var_8)))) ? (((((/* implicit */_Bool) arr_4 [(unsigned short)0])) ? (((/* implicit */int) arr_6 [(unsigned char)17])) : (((/* implicit */int) arr_5 [i_1] [(unsigned char)3])))) : (((((/* implicit */int) arr_6 [i_1])) - (((/* implicit */int) var_10))))))));
        var_19 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) (unsigned char)1))))) ? (((((/* implicit */_Bool) (unsigned short)35155)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)0)))) : (((((/* implicit */int) arr_4 [i_1])) * (((/* implicit */int) var_6))))))));
    }
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((min(((~(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) var_7)))) % ((~((~(((/* implicit */int) var_1)))))))))));
}

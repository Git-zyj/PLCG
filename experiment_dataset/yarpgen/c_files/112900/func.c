/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112900
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
    for (unsigned long long int i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0 + 1] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            arr_8 [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) << (((((arr_0 [(unsigned short)11]) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) + (2317856408299777152LL)))))));
            arr_9 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_0])))), (max((((/* implicit */int) arr_1 [i_1])), (var_14)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : ((+(((((-1680785958648529403LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_12)) - (46685)))))))));
        }
        for (unsigned char i_2 = 1; i_2 < 16; i_2 += 4) 
        {
            arr_12 [i_2] = ((/* implicit */_Bool) (unsigned char)138);
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) var_10);
            arr_14 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_5 [i_2])), (((((arr_0 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) | (((/* implicit */long long int) min((var_10), (((/* implicit */int) (signed char)76)))))))));
        }
    }
    var_18 = ((/* implicit */unsigned short) ((_Bool) (unsigned char)149));
    var_19 = ((/* implicit */unsigned char) var_7);
}

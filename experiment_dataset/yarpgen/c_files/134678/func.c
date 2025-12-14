/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134678
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
    var_14 = ((/* implicit */unsigned short) ((((max((((/* implicit */long long int) var_4)), (var_11))) & (((/* implicit */long long int) var_1)))) == (var_11)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) (-(arr_0 [i_0] [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) arr_4 [i_1]);
        arr_7 [(unsigned char)15] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65522))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) var_12)), ((signed char)96))))) - (0ULL)))));
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((+(var_13)))))) ? ((-(((/* implicit */int) arr_1 [i_1] [i_1])))) : (arr_4 [i_1])));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-97))));
        arr_10 [i_1] = ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((short)16812), (((/* implicit */short) var_12)))))))), (var_0)));
    }
}

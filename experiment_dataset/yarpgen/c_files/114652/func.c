/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114652
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_4 [(unsigned short)8] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_0 [i_0]))) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (0)));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) max((arr_3 [i_0]), (((/* implicit */unsigned short) (signed char)(-127 - 1))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_10 [i_1] = ((/* implicit */unsigned char) ((_Bool) max((((/* implicit */unsigned int) (unsigned char)143)), (min((((/* implicit */unsigned int) var_6)), (4294967285U))))));
        arr_11 [i_1] = ((/* implicit */_Bool) -129660654);
        arr_12 [i_1 + 1] = ((/* implicit */long long int) (-((-(((/* implicit */int) (signed char)-107))))));
        arr_13 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) <= (arr_7 [i_1 + 1])))), (arr_8 [i_1])));
    }
    for (unsigned char i_2 = 2; i_2 < 12; i_2 += 4) 
    {
        arr_17 [i_2] |= ((/* implicit */_Bool) ((((int) (+(var_5)))) << ((~(-1)))));
        arr_18 [i_2] [4LL] = ((/* implicit */long long int) 129660659);
    }
    var_14 = ((/* implicit */short) ((int) 129660659));
    var_15 = ((/* implicit */unsigned char) max((max((((/* implicit */int) var_1)), ((+(129660659))))), (((/* implicit */int) min((((unsigned char) (short)-32741)), (((/* implicit */unsigned char) (_Bool)1)))))));
}

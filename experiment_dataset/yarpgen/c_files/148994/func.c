/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148994
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
    var_17 = (_Bool)1;
    var_18 = ((/* implicit */_Bool) min((var_18), ((!(((/* implicit */_Bool) 5620403937760190738ULL))))));
    var_19 = ((/* implicit */_Bool) ((unsigned long long int) (((!(((/* implicit */_Bool) (short)-807)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)1)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */int) ((_Bool) arr_2 [i_0]))) | (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) (unsigned short)65528))));
        var_20 = ((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) (unsigned char)255))))) % (((var_16) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))));
        var_21 = ((/* implicit */unsigned int) (_Bool)1);
    }
    var_22 = ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (2831624561U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (max((((/* implicit */unsigned long long int) 2831624552U)), (((7838600201957559806ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)34))))))));
}

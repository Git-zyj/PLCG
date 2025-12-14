/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174577
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) var_5))));
    var_11 = ((/* implicit */unsigned long long int) var_1);
    var_12 = ((/* implicit */long long int) ((((2485952236908687483ULL) >> (((-175431909) + (175431953))))) / (((/* implicit */unsigned long long int) 9223372036854775804LL))));
    var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((8355840U), (((/* implicit */unsigned int) (_Bool)1))))))) ? (((((((/* implicit */int) (_Bool)1)) == (684147808))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) var_7))))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_8)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) (short)12439);
        var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) == (((/* implicit */unsigned long long int) (~(((532541070U) ^ (((/* implicit */unsigned int) -1)))))))));
        var_16 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (arr_0 [i_0] [i_0 + 3])))) : ((-(min((arr_1 [i_0 + 1]), (((/* implicit */unsigned long long int) (_Bool)1)))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151833
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
    var_14 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8145217848287513460LL))))) : (((/* implicit */int) min(((short)5876), (((/* implicit */short) (unsigned char)172)))))))), (((((/* implicit */_Bool) (short)-2294)) ? ((-(1931868951751348427LL))) : (1931868951751348427LL)))));
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((1931868951751348427LL) / (((/* implicit */long long int) ((/* implicit */int) var_8))))) / (((/* implicit */long long int) ((unsigned int) var_5)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) * (((((/* implicit */long long int) 242598364)) / (-1931868951751348421LL)))))) ? ((-(((/* implicit */int) var_7)))) : ((-(((/* implicit */int) var_9))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_17 += max((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) var_5))))) || (((/* implicit */_Bool) ((unsigned int) var_6)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_0 [8LL])), ((unsigned char)62)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)46), (arr_3 [i_0]))))) : (max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) 4217770447U)))))));
        arr_4 [i_0] = ((((/* implicit */int) min((((unsigned char) var_9)), (arr_2 [i_0] [i_0])))) % ((~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_3 [i_0]))))))));
    }
}

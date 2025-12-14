/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184801
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [(unsigned short)4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5329)) ? (1152239657364493262ULL) : (7182967864754586234ULL)));
        var_13 = ((/* implicit */int) arr_1 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            arr_5 [(unsigned short)11] = (unsigned char)236;
            var_14 *= ((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) > (((((/* implicit */int) (short)94)) ^ (((/* implicit */int) (short)5438))))));
        }
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) arr_3 [i_0] [5ULL]))));
    }
    var_16 &= ((/* implicit */int) max((var_11), (((/* implicit */unsigned short) (short)-16104))));
    var_17 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)160)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 769064153U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))) : (6120699072371577415ULL)))) ? ((-(((/* implicit */int) (unsigned short)15572)))) : (((int) (_Bool)1)))) : (((/* implicit */int) var_9))));
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */int) var_3)), ((~(((/* implicit */int) var_0))))));
}

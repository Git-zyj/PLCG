/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154646
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_14))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) min((max((arr_0 [i_0]), (arr_0 [i_0]))), (((/* implicit */int) arr_1 [i_0 + 1]))));
        var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) (signed char)31)), (-2068134817)));
        var_19 = 2147483647;
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_8 [i_1] = min(((_Bool)1), ((_Bool)1));
        arr_9 [17U] = ((/* implicit */unsigned char) (((!(max(((_Bool)0), ((_Bool)1))))) ? ((+((+(((/* implicit */int) arr_4 [i_1] [i_1])))))) : (((/* implicit */int) arr_4 [i_1] [i_1]))));
        var_20 ^= ((/* implicit */signed char) max((min((((/* implicit */unsigned int) arr_6 [i_1])), ((~(var_13))))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_5)))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_6 [i_1]), (arr_4 [i_1] [i_1]))))) | ((+(min((((/* implicit */unsigned int) arr_6 [i_1])), (134217727U)))))));
    }
    var_22 = ((/* implicit */unsigned char) var_10);
}

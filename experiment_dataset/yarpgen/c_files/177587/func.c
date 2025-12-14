/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177587
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
    var_15 = ((/* implicit */long long int) ((((((/* implicit */int) var_6)) << (((/* implicit */int) var_3)))) ^ (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) -1967104616))))))));
    var_16 = ((/* implicit */unsigned char) ((unsigned int) (+(((/* implicit */int) var_6)))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) 1967104616);
        var_18 = ((/* implicit */long long int) (~(((((((/* implicit */unsigned int) 1967104608)) ^ (var_8))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) arr_2 [i_0]))))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0]);
            arr_7 [i_0] [i_1] = ((/* implicit */short) arr_5 [i_0] [i_1 - 3] [i_1]);
        }
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 17; i_2 += 4) 
    {
        var_19 |= (+(((/* implicit */int) var_11)));
        arr_10 [i_2] [i_2] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) -1967104628)))) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_2)) : (1967104626))) : (((/* implicit */int) ((signed char) var_4)))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) 1967104615)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) arr_4 [11])))))))));
        arr_11 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_2 - 2])) | (((/* implicit */int) var_3))));
    }
    var_21 = ((/* implicit */long long int) ((((((/* implicit */int) ((unsigned short) (signed char)102))) < (min((((/* implicit */int) (signed char)123)), (1967104615))))) ? (((/* implicit */int) ((-2396941643370651408LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4)))))) : (((/* implicit */int) var_3))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13795
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
    var_18 &= ((/* implicit */unsigned short) var_1);
    var_19 &= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)18864))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min((((long long int) max((var_15), (((/* implicit */short) var_1))))), (((/* implicit */long long int) (~(((/* implicit */int) (short)-32746))))))))));
        arr_3 [i_0] [i_0 + 3] &= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((arr_2 [i_0 + 2] [i_0 + 2]), (arr_1 [i_0 + 3])))), (max((var_6), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0] [i_0])))))))));
        var_21 &= min(((~((~(var_0))))), (((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */unsigned short) (short)0)), ((unsigned short)1919))))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min((min(((-(((/* implicit */int) var_10)))), (((((/* implicit */_Bool) 4847619182009906096LL)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)45984)))))), ((+((+(((/* implicit */int) arr_0 [i_0])))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) min(((~(min((-6447981609172527787LL), (((/* implicit */long long int) (short)31581)))))), (((/* implicit */long long int) min((arr_4 [i_1]), (arr_4 [i_1])))))))));
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) min((arr_4 [i_1]), (var_8)))), (min((var_0), (var_6))))))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        var_25 &= var_15;
        arr_8 [(unsigned short)4] [(unsigned short)4] &= ((/* implicit */unsigned char) (~((-(((/* implicit */int) var_3))))));
    }
    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (-(var_12))))));
    var_27 = ((/* implicit */long long int) max((var_27), (min((min((4847619182009906096LL), (-4847619182009906097LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_14))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))) : (max((((/* implicit */unsigned int) var_3)), (var_12))))))))));
}

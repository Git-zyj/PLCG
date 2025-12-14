/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181101
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2323361594799845048LL)) ? (((/* implicit */int) (short)-9679)) : (var_2))) - (var_2)))) ? ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)38)))))) : (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_1)))))))))));
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((unsigned short) var_10)))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [4]))))) + (((unsigned int) var_7)))) * (((/* implicit */unsigned int) (-(((((/* implicit */int) arr_1 [2])) * (((/* implicit */int) var_0))))))))))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_0 [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */int) arr_3 [i_1] [i_1]);
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_4 [i_1]))));
    }
    for (int i_2 = 1; i_2 < 15; i_2 += 4) 
    {
        var_21 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_2 + 3]))))) ? (((/* implicit */int) ((unsigned short) arr_4 [i_2 + 3]))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_11)))));
        var_22 = (_Bool)1;
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2 - 1])) - (((/* implicit */int) (short)9678))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_2 + 1])));
        var_24 = ((((/* implicit */_Bool) (-(var_13)))) || (((/* implicit */_Bool) max((arr_5 [i_2 - 1] [i_2 - 1]), (arr_5 [i_2 + 3] [i_2 - 1])))));
        var_25 = ((/* implicit */int) max((((/* implicit */unsigned char) ((var_13) > (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_2] [i_2])))))))), (min((arr_6 [i_2 + 3] [i_2 + 3]), (((/* implicit */unsigned char) arr_3 [i_2] [i_2 + 1]))))));
    }
    for (long long int i_3 = 3; i_3 < 22; i_3 += 2) 
    {
        var_26 = ((/* implicit */int) var_13);
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) max((arr_8 [i_3 - 1]), (((/* implicit */long long int) (short)-9679))))) || (((/* implicit */_Bool) arr_8 [i_3 - 2])))))));
        var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_3]))));
    }
    var_29 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) var_9))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178581
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
    var_11 = ((/* implicit */short) var_1);
    /* LoopSeq 3 */
    for (short i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) arr_1 [i_0 + 2]))))) ? (min((arr_0 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0 + 3])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_2))))))));
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) arr_0 [i_0 + 3]))))))));
    }
    for (unsigned char i_1 = 2; i_1 < 10; i_1 += 2) 
    {
        var_14 = ((/* implicit */short) (+(2298514535U)));
        var_15 = ((/* implicit */unsigned int) var_2);
        var_16 = ((/* implicit */signed char) arr_2 [i_1 + 1] [i_1]);
        var_17 = ((/* implicit */short) ((unsigned char) (+(arr_2 [i_1 - 2] [i_1]))));
    }
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (arr_7 [i_2] [i_2]) : (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_2]))))))) / (max((((long long int) (_Bool)1)), (((/* implicit */long long int) ((-532620448) & (((/* implicit */int) arr_1 [i_2]))))))))))));
        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (min((((/* implicit */unsigned int) arr_5 [i_2] [i_2])), (arr_0 [i_2]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (arr_0 [5LL]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned int) var_5)), (arr_0 [i_2]))) <= (((/* implicit */unsigned int) -532620448))))))));
    }
}

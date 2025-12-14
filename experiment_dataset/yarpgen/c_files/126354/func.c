/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126354
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_18))))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)181))))), (((long long int) -1579060779))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_1 [14])))) ? ((~(arr_2 [i_0] [(unsigned char)13]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_10))))));
        var_21 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((short) (_Bool)1)))));
        var_22 = (~((+(((/* implicit */int) (_Bool)1)))));
    }
}

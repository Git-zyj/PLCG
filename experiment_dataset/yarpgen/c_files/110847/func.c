/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110847
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
    var_18 = var_4;
    var_19 = ((/* implicit */signed char) var_6);
    var_20 |= ((/* implicit */unsigned int) (((((!(var_5))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)44)) ? (309199262) : (((/* implicit */int) var_0))))))) ? (var_2) : (((/* implicit */unsigned long long int) var_6))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)38197)) ? (max((((/* implicit */unsigned long long int) (signed char)82)), (16383ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [(_Bool)1]))))), (arr_2 [i_0]))))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((signed char) var_2)))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_6 [(signed char)6] |= ((/* implicit */unsigned char) var_12);
        var_23 = ((/* implicit */unsigned int) arr_0 [i_1]);
        arr_7 [i_1] |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_1)))) ? (((unsigned long long int) var_13)) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_10), (((/* implicit */unsigned char) arr_3 [i_1] [i_1]))))))));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (arr_2 [i_1])))) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_8)))) + (((/* implicit */int) (unsigned char)216))))) : ((+(((12645414660655675463ULL) + (var_2)))))));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_3 [i_1] [i_1]))) ? (((unsigned long long int) ((_Bool) arr_1 [i_1] [(signed char)18]))) : (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_12)))))))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 3) 
    {
        var_26 = ((/* implicit */short) (~(arr_2 [i_2 + 1])));
        var_27 ^= ((/* implicit */signed char) var_13);
    }
}

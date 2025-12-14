/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123436
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned char) arr_1 [i_1]);
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) 0)) : (4294967295ULL)))) ? (min((((((/* implicit */_Bool) 18446744069414584314ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (6539570617017521496ULL))), (4294967329ULL))) : (((/* implicit */unsigned long long int) 1132079334)))))));
                var_16 = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 2] [i_0] [i_1 - 2]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 1 */
    for (long long int i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */int) var_5);
        arr_9 [i_2] = ((/* implicit */long long int) min((((/* implicit */int) max((arr_7 [i_2 - 1] [i_2 - 2]), (arr_7 [i_2 - 1] [i_2 - 1])))), (max((arr_6 [i_2 - 2]), (arr_6 [i_2 + 1])))));
        var_18 = ((/* implicit */unsigned int) arr_6 [i_2 + 1]);
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) arr_7 [1U] [i_2]);
        arr_11 [5ULL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 + 1] [i_2 - 2]))) : (11809175605886029534ULL)))) ? ((-(var_10))) : (((/* implicit */int) arr_7 [i_2 + 1] [i_2 - 2])));
    }
    var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (-1132079363)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */unsigned long long int) var_11))))) ? (min((((/* implicit */int) var_8)), (var_11))) : (var_10))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104673
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
    for (unsigned long long int i_0 = 4; i_0 < 7; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0 + 2]))) % (4132745599032412784LL))));
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)194)))))) : (max((((/* implicit */long long int) arr_2 [2U] [i_0 - 2])), (var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)203))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1910022405U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_2)))) ? (((long long int) (unsigned char)255)) : (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)122)), (var_0)))))))))));
    }
    var_13 = var_0;
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_3))));
}

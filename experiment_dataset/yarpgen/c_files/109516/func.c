/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109516
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
    var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_1)), (((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_15))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)50405))))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) + (max(((~(var_2))), (((/* implicit */unsigned int) ((1090013214) | (((/* implicit */int) (unsigned short)37822))))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_12))))) == ((+(((/* implicit */int) arr_0 [i_0])))))))) == (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)204))) / (((9223372036854775803LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)512)))))))));
    }
}

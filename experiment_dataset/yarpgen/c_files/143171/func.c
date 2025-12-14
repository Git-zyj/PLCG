/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143171
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
    var_12 += ((/* implicit */unsigned long long int) (+(var_11)));
    var_13 = ((/* implicit */unsigned int) min((var_13), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1771851006U)))))) : (var_11)))));
    var_14 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8))) : (2114951609U)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((arr_0 [i_0]) >> (((2147483648U) - (2147483608U)))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), ((-(((/* implicit */int) arr_1 [i_0]))))))) + (((unsigned int) 1771851022U))));
        arr_4 [i_0] = min((((((/* implicit */_Bool) 3221225472U)) ? (1771851018U) : (213816379U))), ((((_Bool)1) ? (2180015676U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)79))))));
    }
}

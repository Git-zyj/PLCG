/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161110
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
    var_11 = ((/* implicit */int) ((((((/* implicit */_Bool) 145226648)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((unsigned long long int) var_4)))) ^ (((((/* implicit */_Bool) var_4)) ? (max((var_1), (var_5))) : ((+(var_9)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-32759))));
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) > (min((((/* implicit */int) ((((/* implicit */_Bool) (short)-32756)) || (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))), (774270658)))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) min((min((((((/* implicit */unsigned long long int) -1366601666)) + (var_6))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-32754))))))), (((/* implicit */unsigned long long int) ((unsigned char) (~(var_3)))))));
}

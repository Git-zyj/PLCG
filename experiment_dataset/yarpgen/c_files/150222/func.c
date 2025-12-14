/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150222
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
    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (((+(var_3))) == (((/* implicit */int) ((unsigned char) var_15)))))), (var_4)));
    var_18 = ((/* implicit */unsigned char) (unsigned short)5025);
    var_19 = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(arr_3 [i_0])))), (var_12)));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_1 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))) : ((+(-8040979576497962564LL)))));
            }
        } 
    } 
}

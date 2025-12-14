/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100003
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
    var_20 = var_0;
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_2 [i_1 - 3] [i_1 + 3] [i_0 + 1]) == ((~(-1549753707))))))));
                arr_4 [i_0] [i_1] = ((/* implicit */short) (+(((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (min((var_11), (((/* implicit */unsigned short) (unsigned char)17))))))) < (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_5)))))))))));
}

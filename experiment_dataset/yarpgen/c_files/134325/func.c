/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134325
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                var_10 += ((/* implicit */unsigned char) arr_3 [(unsigned char)8] [i_1]);
                var_11 -= ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_1 + 1]))))), (((long long int) (unsigned char)255))));
                var_12 *= ((/* implicit */unsigned long long int) (unsigned char)61);
                var_13 = ((/* implicit */signed char) (((+(-672858238))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
            }
        } 
    } 
    var_14 &= ((/* implicit */unsigned char) var_3);
    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned int) -672858226)) * (2156055521U)));
}

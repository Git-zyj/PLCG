/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150873
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_1] = min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) (unsigned char)255))))), (min((((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) (unsigned char)1))))), (0))));
                arr_5 [(signed char)5] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_13)) : (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_13))) % (((/* implicit */int) (unsigned short)20)))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (_Bool)1)), (13025300563245685153ULL)));
            }
        } 
    } 
    var_17 = ((/* implicit */int) min(((+(min((((/* implicit */long long int) (unsigned char)3)), ((-9223372036854775807LL - 1LL)))))), (((/* implicit */long long int) ((min((var_8), (((/* implicit */unsigned int) var_1)))) <= (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & (var_3)))))))));
}

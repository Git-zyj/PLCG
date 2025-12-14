/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168828
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                var_18 |= ((/* implicit */unsigned char) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(-2147483644)))))))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) 5616475334633606892LL);
                var_19 = ((/* implicit */signed char) (-(12288)));
                var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 - 1]))))), (var_5)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)91)) <= (((/* implicit */int) var_7))));
    var_22 = ((/* implicit */unsigned short) max((var_22), (var_2)));
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_17))) / ((-9223372036854775807LL - 1LL))))) ? (-268435456) : (var_12)));
}

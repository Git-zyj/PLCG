/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161498
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
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)67)) - ((+(((/* implicit */int) (short)-32254))))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((unsigned long long int) (((!(((/* implicit */_Bool) 9223372036854775807LL)))) ? (var_11) : (((/* implicit */unsigned long long int) ((unsigned int) (signed char)6))))));
                    var_17 = ((/* implicit */signed char) ((min((((/* implicit */long long int) (signed char)89)), (-8468248348858242888LL))) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) 2335404274U))))), (arr_0 [i_0])))))));
                    arr_7 [i_1 + 2] [i_1 + 2] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 1] [i_1 + 1] [i_1 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */long long int) (signed char)-110)), (var_8))) > (((/* implicit */long long int) var_6)))))) : ((~(arr_1 [i_2] [i_0])))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-68)) & (((/* implicit */int) arr_0 [i_1 + 1]))))) <= (2673139321U)));
                }
            } 
        } 
    } 
    var_19 ^= ((/* implicit */signed char) (((((+(var_7))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))))) ? (var_9) : (var_9)));
}

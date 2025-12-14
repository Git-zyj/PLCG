/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184544
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) > (((((/* implicit */_Bool) (~(((/* implicit */int) (short)1))))) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) (short)-5))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_5 [9] = ((/* implicit */unsigned char) (-(((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 3] [i_0 + 3])))))));
                arr_6 [i_0] [4] = ((/* implicit */signed char) ((((/* implicit */int) ((((_Bool) var_9)) && (max((var_3), (var_7)))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) (short)-29)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_3 [i_0] [i_1]))))));
                var_11 = ((unsigned long long int) (unsigned short)30030);
                var_12 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) (short)30)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))) : (((((/* implicit */int) (short)-51)) % (arr_0 [17LL] [9ULL])))))) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (arr_0 [i_0] [i_0])));
                var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) ((unsigned long long int) var_0))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) (short)30617)))))) ? (((((_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-28))))) : (((((/* implicit */_Bool) 14031896828050419714ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) var_9)))))));
}

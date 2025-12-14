/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154673
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
    for (short i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) ((2097151LL) + (((/* implicit */long long int) ((/* implicit */int) ((short) ((11738430886822389077ULL) + (((/* implicit */unsigned long long int) -8778975576703756729LL)))))))));
                var_13 ^= ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                arr_6 [2LL] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (signed char)-76)))), ((~(((/* implicit */int) (signed char)52))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (min((((/* implicit */int) ((signed char) arr_2 [i_0 + 1]))), (((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) arr_0 [13] [i_1]))))))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-76)) + (((/* implicit */int) (signed char)65))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-60), (((/* implicit */signed char) (_Bool)1)))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_6)))))) ? (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) ((_Bool) 12548669)))))));
}

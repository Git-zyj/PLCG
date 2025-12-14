/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181524
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
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (unsigned short)58702))));
    var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) var_5))));
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)17274))))))) ? (((/* implicit */int) ((-1130299855) > (((/* implicit */int) max(((unsigned short)46532), (((/* implicit */unsigned short) var_13)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58702)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46168))) : (1357262085535041755LL)))) ? (min((((/* implicit */int) var_13)), (6))) : (((/* implicit */int) min(((unsigned short)58702), (((/* implicit */unsigned short) (signed char)21))))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) 935081722))))) ? (((/* implicit */int) arr_3 [i_0])) : ((-(((/* implicit */int) (unsigned short)46158)))))) + (2147483647))) >> (((max((((((((/* implicit */int) (short)-888)) + (2147483647))) >> (((((/* implicit */int) arr_3 [i_0])) + (110))))), (((((/* implicit */int) (unsigned short)58706)) >> (((((/* implicit */int) var_12)) - (48765))))))) - (2097141)))));
                var_18 = ((/* implicit */int) min((12853511176637495719ULL), (((/* implicit */unsigned long long int) ((((arr_2 [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                var_19 = ((/* implicit */unsigned long long int) (_Bool)1);
                var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)56)), (((((/* implicit */_Bool) (short)-4407)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_11);
}

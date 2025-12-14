/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106612
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
    var_19 -= ((/* implicit */signed char) var_4);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */signed char) var_2)), (var_7))))));
        var_20 |= ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) & (arr_2 [i_0] [i_0])))), (arr_1 [(_Bool)1] [(_Bool)1]))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)255)), (-537266936)))) ? (max((var_5), (((/* implicit */unsigned long long int) (~(var_13)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 1601766522)), (-6506150794605700824LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_4))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (max((((((/* implicit */_Bool) var_6)) ? (var_0) : (arr_1 [i_1] [14U]))), (arr_1 [(_Bool)1] [(_Bool)1])))));
    }
    for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) (!((_Bool)0)));
        var_23 = ((/* implicit */int) (-(max((((/* implicit */long long int) var_8)), (arr_8 [(_Bool)1])))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15)))))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((unsigned int) 2593088626297893279ULL))))) ? (((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) var_6)))))) : (arr_8 [i_2])));
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)1))))))) ? (min((var_18), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((((unsigned int) var_12)) >> ((((((_Bool)1) ? (1336711715181674470LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59650))))) - (1336711715181674457LL))))))));
    }
}

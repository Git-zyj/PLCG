/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180672
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        arr_4 [i_0] = var_9;
        var_18 ^= ((/* implicit */signed char) max((((((/* implicit */int) max(((signed char)-127), (var_3)))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 576460752303423487LL))))) : (((/* implicit */int) (signed char)-1))))));
        var_19 += ((signed char) max(((+(-8585871200092093570LL))), (-5103487558255255254LL)));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) -3969228225050067348LL)) ? (-8585871200092093566LL) : (-8061311933563629849LL)))))) ? (max((((long long int) var_10)), (((long long int) var_7)))) : (max(((~(576460752303423477LL))), (((((/* implicit */_Bool) 576460752303423452LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_10)))))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        arr_8 [i_1] = var_2;
        arr_9 [i_1] = -576460752303423487LL;
        var_21 ^= ((/* implicit */signed char) min((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)111))) : (var_13))) < (max((-8291503717987898342LL), (arr_5 [i_1]))))), (((arr_7 [i_1]) >= (arr_7 [19LL])))));
        var_22 = ((var_10) | (((/* implicit */long long int) (-((+(((/* implicit */int) (signed char)58))))))));
    }
    var_23 = 8585871200092093570LL;
    var_24 = (((!(((/* implicit */_Bool) (~(var_13)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_16))))))) : (var_2));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178100
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
    var_10 = ((/* implicit */unsigned short) (~(-1684154295)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) ((max((var_1), (((/* implicit */unsigned long long int) var_0)))) == ((~(var_1)))));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_0);
                arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)33508)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (254U)))) : (((var_6) >> (((var_2) - (2844122723U)))))));
                arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (var_8)))) ? (max((((/* implicit */unsigned long long int) var_4)), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65535)))))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) (+(5330607325907454302LL)))) || (((/* implicit */_Bool) var_0)))))));
            }
        } 
    } 
    var_11 = ((/* implicit */signed char) var_8);
}

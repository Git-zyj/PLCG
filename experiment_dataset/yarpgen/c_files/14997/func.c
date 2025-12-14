/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14997
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
    var_11 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)11250)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)80))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) (unsigned char)134))))) | (-3992113687322084505LL)))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_3))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121)))))) ? (((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) (unsigned char)119)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((min((((/* implicit */long long int) (unsigned char)132)), (arr_3 [i_0] [(unsigned short)14]))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)135)) == (((/* implicit */int) arr_2 [i_0])))))))) ? (((/* implicit */int) ((arr_6 [i_0]) > (((((/* implicit */_Bool) -8385464124840969176LL)) ? (var_5) : (1946926431)))))) : (((int) 8385464124840969176LL))));
                var_14 ^= ((/* implicit */short) arr_5 [i_0]);
            }
        } 
    } 
    var_15 = var_8;
}

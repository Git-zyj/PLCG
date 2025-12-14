/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115566
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((long long int) min((-763074807512950770LL), (min((-4134253405987364436LL), (((/* implicit */long long int) var_16)))))));
                    var_19 = var_15;
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((var_14) ^ (var_10))), (max((var_10), (((/* implicit */long long int) (unsigned char)8))))))) ? (((((((((/* implicit */_Bool) -4179650772499888118LL)) ? (-4179650772499888118LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) + (9223372036854775807LL))) >> (((((/* implicit */long long int) ((/* implicit */int) var_16))) & (var_8))))) : (max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)195))))), (var_12)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned char) (((~(var_2))) | (3202435193694212891LL)));
                var_22 = ((unsigned char) max((((((/* implicit */_Bool) 4893994449404587157LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) : (-844466506025517262LL))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) (unsigned char)230)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) != (var_15)))) : (((/* implicit */int) var_0)))), (max((((((/* implicit */int) var_17)) + (((/* implicit */int) var_0)))), (((/* implicit */int) var_3))))));
}

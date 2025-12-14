/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100937
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
    var_18 = ((/* implicit */signed char) (+(var_13)));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) var_17))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */signed char) max((min((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) (signed char)-9))))), (11964613U))), (((/* implicit */unsigned int) ((4057365433U) <= (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)0))))))))));
                var_21 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (357549667248978065LL))) >> ((((~(((/* implicit */int) (short)-3210)))) - (3182)))))) ? (min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)112)))), ((~(arr_4 [i_0]))))) : ((~(-96479023))));
            }
        } 
    } 
    var_22 *= ((/* implicit */short) max((((((/* implicit */unsigned int) var_16)) % (((((/* implicit */_Bool) -357549667248978066LL)) ? (237601859U) : (4057365433U))))), (((/* implicit */unsigned int) max(((-(((/* implicit */int) (short)14757)))), (((((/* implicit */int) (signed char)-119)) % (2147483647))))))));
}

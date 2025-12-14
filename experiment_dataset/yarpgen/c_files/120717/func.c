/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120717
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
    var_17 = ((/* implicit */signed char) var_7);
    var_18 = ((/* implicit */short) var_14);
    var_19 = ((/* implicit */unsigned short) ((((((unsigned long long int) (_Bool)1)) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)19350)))))) || (((/* implicit */_Bool) ((min((var_14), (((/* implicit */long long int) var_1)))) ^ (((/* implicit */long long int) var_2)))))));
    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_6) ? (var_11) : (((/* implicit */int) var_4))))) && (((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_4)))))) || (((/* implicit */_Bool) ((short) (_Bool)1)))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 511)) ? (((/* implicit */int) (unsigned short)57426)) : (((/* implicit */int) (unsigned short)19350))));
                    var_22 = (((((((~(((/* implicit */int) (unsigned short)19350)))) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_2])) << (((12355923514017023118ULL) - (12355923514017023114ULL))))))) << ((((-((+(-782547064))))) - (782547061))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((signed char) ((signed char) var_0)));
                }
            } 
        } 
    } 
}

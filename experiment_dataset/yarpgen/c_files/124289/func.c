/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124289
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((unsigned short) var_4)))));
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_0)), ((+(((/* implicit */int) (short)7921))))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)30501))) % (18446744073709551612ULL))) - ((-(18446744073709551608ULL))))) : (((/* implicit */unsigned long long int) min((215630462U), (((/* implicit */unsigned int) (short)32767))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39379))) : (1524823859U)));
                var_16 = ((/* implicit */short) max((var_16), ((short)8189)));
                var_17 ^= ((/* implicit */short) max((11ULL), (18446744073709551596ULL)));
                var_18 |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_1])), (5260065435529584418ULL)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (18446744073709551596ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                var_19 -= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47789)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))) : (2770143413U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)5436))) : (((2907854653U) >> (((((/* implicit */int) (short)-31192)) + (31194)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_10)) <= ((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) ((((-27) + (2147483647))) >> (((var_5) - (785379636107655419ULL)))))) : (((((/* implicit */unsigned long long int) var_4)) - (var_12))))))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (int i_3 = 2; i_3 < 19; i_3 += 4) 
        {
            {
                var_21 ^= ((/* implicit */short) (~(((arr_0 [i_3 + 1]) * (((/* implicit */unsigned long long int) 1387112637U))))));
                var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3 - 2])) ? (arr_0 [i_3 + 2]) : (arr_0 [i_3 + 3]))))));
            }
        } 
    } 
}

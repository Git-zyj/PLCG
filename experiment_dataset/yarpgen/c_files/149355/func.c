/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149355
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
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 3]))) : (arr_1 [i_0 + 3]))) << ((((+(((((/* implicit */_Bool) 151701020)) ? (((/* implicit */int) (short)2048)) : (-1589070788))))) - (1986))));
                var_11 = ((/* implicit */short) max((1470518948), (((/* implicit */int) (short)-28040))));
                var_12 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18304)) ? (6618986638978516619ULL) : (arr_1 [i_1])))) ? (var_3) : (761580127927805547ULL)));
                var_13 += ((/* implicit */short) ((((((/* implicit */_Bool) 11827757434731034997ULL)) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 3])) : (arr_4 [i_0]))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) 0)) > (arr_5 [i_1]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) min((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) var_9))));
    var_15 = ((/* implicit */short) (~(((((/* implicit */_Bool) 17685163945781746074ULL)) ? (1470518942) : (((/* implicit */int) (short)21905))))));
    var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */unsigned long long int) var_8)), (var_3))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (var_3))))) <= (((/* implicit */unsigned long long int) ((((var_0) + (var_0))) + ((~(((/* implicit */int) var_6)))))))));
    var_17 = ((/* implicit */short) max((var_17), (var_2)));
}

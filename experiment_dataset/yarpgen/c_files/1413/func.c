/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1413
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((unsigned int) 822163667)), (((/* implicit */unsigned int) (short)29172))))) ? (var_6) : (min(((+(var_6))), (((/* implicit */int) var_7))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)11056)), (((unsigned int) (unsigned char)215))));
                    var_13 = ((((/* implicit */_Bool) min((min((arr_8 [i_2]), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) max(((unsigned char)199), (((/* implicit */unsigned char) (signed char)43)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)59)), ((short)6344))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (134654995472429518ULL))));
                    arr_9 [(signed char)16] [16LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((unsigned char) (unsigned char)68)), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_2)))))))) ? (((/* implicit */int) max((min((var_4), (((/* implicit */short) arr_4 [i_0 + 2] [i_1 + 1])))), (arr_1 [i_0] [i_2 - 3])))) : ((-(((/* implicit */int) max((var_8), (arr_5 [i_0]))))))));
                    var_14 = ((/* implicit */_Bool) min((4901746490986489661LL), (-4901746490986489662LL)));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) (short)6344);
}

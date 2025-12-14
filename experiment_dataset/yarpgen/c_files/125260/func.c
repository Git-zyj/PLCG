/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125260
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
    var_16 = ((/* implicit */int) var_13);
    var_17 = ((/* implicit */unsigned short) min(((+(var_9))), (((/* implicit */unsigned long long int) min((((/* implicit */short) ((((/* implicit */_Bool) 6948933166364274208ULL)) || (((/* implicit */_Bool) var_10))))), ((short)0))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((min((min((((/* implicit */unsigned int) arr_4 [i_0])), (var_15))), (((/* implicit */unsigned int) ((unsigned char) (short)-8155))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))));
                    var_18 = ((/* implicit */short) min((235187710642871564ULL), (arr_3 [i_0] [i_0] [i_0])));
                    arr_8 [i_2] [i_2] |= ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_0 [i_0] [i_2 - 1])))), ((+(((/* implicit */int) arr_0 [i_2] [i_2 - 2]))))));
                }
            } 
        } 
    } 
    var_19 = var_15;
}

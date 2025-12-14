/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128156
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
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                var_14 = ((/* implicit */_Bool) 8741155508094167792LL);
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) 15822770644959499391ULL))));
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((min((((/* implicit */int) ((8741155508094167795LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))), (325635027))) + (((/* implicit */int) min((((-979065210) >= (((/* implicit */int) arr_5 [i_1])))), ((_Bool)1)))))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))), (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_1]))))), ((-(var_4)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 10U)) ? (-8741155508094167787LL) : (8741155508094167807LL))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)48579)))))))) ? (var_4) : (((/* implicit */unsigned long long int) min(((-(var_2))), ((+(((/* implicit */int) (_Bool)1)))))))));
    var_18 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-29938))))), ((-(((/* implicit */int) (signed char)-28))))));
}

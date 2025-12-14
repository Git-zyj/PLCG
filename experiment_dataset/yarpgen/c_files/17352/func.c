/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17352
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
    var_11 = ((/* implicit */short) max((((/* implicit */unsigned int) var_2)), ((~(min((var_4), (var_4)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */int) (!(((549755748352ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-96)))))))) > (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1] [i_2] [i_0]))))), (arr_7 [i_2] [i_2] [i_2] [i_2 - 3]))))));
                    var_13 = ((/* implicit */unsigned int) var_9);
                    var_14 = ((/* implicit */unsigned short) 18068926470999466699ULL);
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (+(((((/* implicit */_Bool) ((unsigned short) (signed char)-114))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) 2849884446U))))))))))));
                    arr_9 [0U] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) arr_0 [i_1 - 1])))));
                }
            } 
        } 
    } 
}

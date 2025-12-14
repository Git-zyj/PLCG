/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152267
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
    var_14 = ((/* implicit */short) max((var_14), (var_6)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */short) ((unsigned char) (+((-(((/* implicit */int) var_11)))))));
                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) min((arr_2 [(_Bool)1]), (((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) + (((/* implicit */int) min((((/* implicit */short) var_7)), (arr_0 [(_Bool)1] [i_0])))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_8))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (10124484132693541465ULL)));
}

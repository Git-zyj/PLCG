/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168532
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (!(var_8))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) 3791175352U)) ? (-2891118494036837394LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7405387497529480302LL)) || (var_7))))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) max((((((var_4) + (9223372036854775807LL))) >> (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */long long int) min((0), (((/* implicit */int) arr_2 [i_0])))))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (~((~(arr_6 [i_0] [i_0] [i_0])))));
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((int) (+(arr_6 [i_0] [i_1] [i_1])))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) min((7520193813515502017ULL), (((/* implicit */unsigned long long int) var_2))));
}

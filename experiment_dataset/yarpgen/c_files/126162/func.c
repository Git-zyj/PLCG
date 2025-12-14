/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126162
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (signed char)-114))));
    var_20 = ((/* implicit */long long int) min((var_20), (((((/* implicit */_Bool) min((-1), (((/* implicit */int) (signed char)119))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1300))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_17)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65513))))) : (((0LL) & (((/* implicit */long long int) var_1))))))))));
    var_21 = ((/* implicit */signed char) (unsigned char)255);
    var_22 = ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            {
                var_23 = var_1;
                var_24 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) 384)), (12233675477412168934ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)46082)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) / (((((/* implicit */_Bool) (unsigned short)40853)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14981))) : (arr_3 [i_0]))))))));
                arr_5 [i_0] = ((/* implicit */short) ((unsigned long long int) max(((~(arr_2 [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [(short)4]))))))));
            }
        } 
    } 
}

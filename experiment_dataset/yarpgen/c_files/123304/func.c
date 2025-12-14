/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123304
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 = ((arr_1 [i_0] [i_0]) ? (-917958430) : (((/* implicit */int) max((((/* implicit */signed char) arr_1 [i_0] [i_0])), (max((arr_2 [i_0] [i_1]), (((/* implicit */signed char) arr_3 [i_1] [i_0] [i_0]))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) min((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_1])))), ((unsigned short)34422)));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) 6260145184647474505LL);
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((var_12), (((/* implicit */short) min(((signed char)-45), ((signed char)62))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
}

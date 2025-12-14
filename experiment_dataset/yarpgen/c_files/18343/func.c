/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18343
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
    var_11 = ((/* implicit */signed char) var_4);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) ((((((-4153930568048328742LL) + (9223372036854775807LL))) >> (((/* implicit */int) (signed char)37)))) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        var_12 = ((/* implicit */unsigned int) (_Bool)1);
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (unsigned char)250))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 4; i_1 < 14; i_1 += 2) 
    {
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            {
                var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(min((arr_9 [i_1] [i_2]), (arr_9 [i_1] [i_1]))))))));
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) & (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (-754024925) : (((/* implicit */int) (unsigned char)128))))));
            }
        } 
    } 
}

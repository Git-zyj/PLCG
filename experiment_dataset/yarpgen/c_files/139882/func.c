/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139882
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [(_Bool)1] = var_10;
                arr_6 [(unsigned short)0] [5LL] [(unsigned short)7] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((-7223668705631814403LL), (((/* implicit */long long int) arr_1 [1U]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [4LL] [i_1]))))) : (((/* implicit */int) arr_4 [i_0]))))), (((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_1])) ? (((arr_1 [i_0]) ? (((/* implicit */long long int) 5U)) : (-858425681150336667LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-79)))))))));
            }
        } 
    } 
    var_19 = var_10;
    var_20 ^= var_16;
    var_21 = ((/* implicit */unsigned char) ((unsigned int) var_10));
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                arr_11 [i_3] = (+(min((min((4294967290U), (((/* implicit */unsigned int) arr_4 [(signed char)9])))), (((/* implicit */unsigned int) min(((_Bool)1), (arr_4 [i_2 - 1])))))));
                arr_12 [i_2 - 1] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                var_22 += ((/* implicit */unsigned int) max((((var_6) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 - 1]))) : (min((((/* implicit */long long int) var_3)), (-4360245352826453363LL))))), (arr_2 [i_2] [i_3 - 1])));
            }
        } 
    } 
}

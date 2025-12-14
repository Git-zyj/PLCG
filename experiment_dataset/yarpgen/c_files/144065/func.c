/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144065
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_10 |= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)162)), (var_5)))) && (((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_4)) : (arr_4 [i_0]))))))));
                var_11 = ((/* implicit */short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((2998393288U) * (arr_3 [i_0])))) : (arr_1 [i_1 - 3] [i_0])))));
            }
        } 
    } 
    var_12 += ((/* implicit */unsigned int) min((((/* implicit */long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) -3998617311389349535LL))))), (min((var_1), (var_0)))))), (var_6)));
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (+((~(((((/* implicit */int) var_4)) | (((/* implicit */int) var_4)))))))))));
    var_14 += ((short) (~(((5078906672818728186ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27256)))))));
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 8; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_15 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)32745)))))));
                arr_12 [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_9))));
            }
        } 
    } 
}

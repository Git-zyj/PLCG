/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141905
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
    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) var_18)))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_17)) | ((-(((var_3) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))))));
    var_21 = ((/* implicit */unsigned char) max(((+((~(var_4))))), (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [9] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)51)) || ((_Bool)1))))))) : (((arr_3 [17LL] [17LL]) - (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), (var_3)))))))));
                var_22 = ((/* implicit */short) (~(((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_18))))) | (max((var_10), (((/* implicit */long long int) var_15))))))));
                arr_6 [(unsigned short)13] [i_0 + 1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_14))) | (1143261885U)))))), (arr_1 [1ULL])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 3; i_2 < 18; i_2 += 3) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                arr_12 [i_3] = ((/* implicit */long long int) max((((/* implicit */int) var_14)), ((((((~(((/* implicit */int) var_7)))) + (2147483647))) >> (((384629287033955783LL) - (384629287033955778LL)))))));
                arr_13 [i_3] [i_3] [i_3 - 1] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)0))))), (min((((/* implicit */unsigned long long int) (short)32767)), (arr_11 [i_3]))))), (arr_10 [i_3])));
            }
        } 
    } 
}

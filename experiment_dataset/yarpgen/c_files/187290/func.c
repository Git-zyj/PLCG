/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187290
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
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 = min((max((arr_5 [i_0 + 2] [i_0 + 2] [(signed char)4]), (arr_5 [i_0 + 2] [i_0] [i_0 + 2]))), (((/* implicit */long long int) (+(((/* implicit */int) var_5))))));
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) -219964710874210733LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))))) ? (((/* implicit */int) (unsigned short)31880)) : (((/* implicit */int) (signed char)-121))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (~(-219964710874210718LL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) 
    {
        for (unsigned short i_3 = 4; i_3 < 13; i_3 += 3) 
        {
            {
                arr_12 [i_3] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2])) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2 + 4] [i_2 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_4)))) && (((/* implicit */_Bool) arr_0 [i_3] [i_3])))))));
                var_20 = (~(((/* implicit */int) ((signed char) (signed char)-98))));
                arr_13 [i_3] [i_2] [8ULL] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_2]))))) ? (((long long int) var_4)) : (var_3)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_17);
}

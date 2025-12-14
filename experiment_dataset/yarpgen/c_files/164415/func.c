/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164415
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))) ? (max((-6554614509951446205LL), (((/* implicit */long long int) (signed char)-38)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
    var_13 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((((((/* implicit */int) var_4)) + (27))) - (10)))))) ? (((/* implicit */int) min((((/* implicit */signed char) var_0)), ((signed char)-24)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))))), ((-(((/* implicit */int) var_10))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)32640))))))) ? (((/* implicit */int) max((var_3), (max((var_6), (((/* implicit */unsigned short) var_4))))))) : ((((!((_Bool)1))) ? (((/* implicit */int) max((((/* implicit */signed char) var_7)), (arr_0 [i_0] [i_1])))) : (((arr_2 [i_1]) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) var_11))))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) max((var_10), (((/* implicit */unsigned short) arr_0 [i_0] [i_1])))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18162)) ? (((/* implicit */int) (unsigned short)32895)) : (((/* implicit */int) (signed char)37)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((signed char) max(((!(((/* implicit */_Bool) (short)18168)))), (var_7))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113989
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
    var_12 *= ((/* implicit */int) var_5);
    var_13 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)88)), (var_10)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!((_Bool)1))))))));
    var_14 = ((/* implicit */unsigned short) (short)1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((((_Bool)0) ? (((/* implicit */int) arr_0 [i_2] [i_0 - 2])) : (((/* implicit */int) var_6))))))) ? (((/* implicit */int) ((unsigned short) var_1))) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) min(((unsigned short)22272), ((unsigned short)22277))))))));
                    arr_8 [i_1] [i_2] [i_0] [13] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned char) var_3))))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0])) : (((/* implicit */int) var_5))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (var_2)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */long long int) arr_6 [22LL] [i_2])) : (arr_3 [i_1])))) ? (min((((/* implicit */unsigned long long int) 33521664)), (11090949668077572460ULL))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-88))) : (var_0)))))));
                }
            } 
        } 
    } 
}

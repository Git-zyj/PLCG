/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180326
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
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((((/* implicit */int) (_Bool)1)) & (818994941));
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)-32763)))) || ((((_Bool)0) || ((_Bool)1)))))), (((((/* implicit */_Bool) (~(16140901064495857664ULL)))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) 3698330633U)) : (8397296440241392153ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)1)))))))));
                arr_5 [i_0] &= ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))) * (((((/* implicit */unsigned int) ((/* implicit */int) (short)1))) / (11U)))))));
                arr_6 [i_1] [i_0] [i_0] = (-(3115869997U));
            }
        } 
    } 
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (1179097299U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) (+(-1597214101350034504LL)))) : (min((4637044379384706514ULL), (13809699694324845102ULL)))))) || (((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (short)-7)) : (((/* implicit */int) (short)-2443)))) & (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
    var_12 = ((/* implicit */signed char) (+(((/* implicit */int) min((var_7), ((!(((/* implicit */_Bool) (unsigned short)57140)))))))));
}

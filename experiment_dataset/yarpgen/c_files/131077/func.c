/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131077
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
    var_17 = ((/* implicit */short) var_6);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [(unsigned char)6] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 147770939585516697LL)) ? (arr_2 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((+(arr_6 [i_2] [i_1] [i_1])))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_2]))) + (2147417871U))))));
                    var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57749))) <= (arr_2 [i_0]))))));
                    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_5 [i_2] [i_2] [(unsigned char)4] [(unsigned short)0]), (arr_5 [i_2] [i_1] [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((_Bool) var_11));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102059
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) arr_4 [i_1] [i_0] [i_0])), (3936522797584381148LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-20221)) ? (((/* implicit */int) (short)-20200)) : (((/* implicit */int) (short)-20243))))) : (arr_3 [i_0] [i_0])));
                arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_3), (((/* implicit */short) arr_4 [i_1] [i_0] [i_0]))))) ? ((-(var_10))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20188)) ? (((/* implicit */int) (short)20204)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) min((arr_4 [i_0] [(short)3] [(short)3]), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (arr_2 [i_0] [i_1]))))))));
                var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
            }
        } 
    } 
    var_20 = 10517435462064380175ULL;
}

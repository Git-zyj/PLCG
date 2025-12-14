/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146722
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
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((var_4), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) var_3))))))) == (var_1)));
    var_20 = ((/* implicit */int) max((((/* implicit */signed char) (!(((22155072988915337LL) != (((/* implicit */long long int) 0))))))), (min((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-68))))), (var_3)))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
                var_22 = ((/* implicit */unsigned long long int) (signed char)-68);
                var_23 = ((/* implicit */unsigned short) arr_2 [i_0 + 3]);
                var_24 = ((/* implicit */short) (-(((((/* implicit */unsigned int) max((((/* implicit */int) arr_3 [i_0])), (2147483645)))) / (arr_0 [i_0 + 1])))));
                arr_6 [i_0] [i_0] [3U] = ((/* implicit */int) (-((+(arr_0 [i_0 + 1])))));
            }
        } 
    } 
}

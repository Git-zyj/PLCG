/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100858
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                var_10 = (+(min((max((((/* implicit */int) arr_5 [i_1] [i_1 - 1])), (arr_3 [i_0]))), (((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */short) (_Bool)1))))))));
                arr_7 [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) (unsigned char)115);
                var_11 += ((/* implicit */short) (~(10448256508188656847ULL)));
                var_12 = ((/* implicit */_Bool) arr_0 [i_0]);
                var_13 *= ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_0])) != (((/* implicit */int) arr_6 [i_0]))))), (arr_6 [i_0])));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) (short)0);
}

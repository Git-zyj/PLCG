/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169972
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_2))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) max((-1), (2147483647))))));
                var_14 *= arr_0 [i_0];
                var_15 = ((/* implicit */int) (+(11336737595613051166ULL)));
                var_16 *= ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (((int) max((((/* implicit */unsigned short) arr_5 [i_1])), (arr_4 [i_0] [i_0 - 2] [i_0]))))));
                var_17 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)249)) / (-1484094332)));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((short) var_1)))))));
}

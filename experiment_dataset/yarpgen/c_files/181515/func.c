/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181515
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [20] [20] [i_0] = ((/* implicit */short) var_6);
                    var_19 &= ((/* implicit */_Bool) arr_5 [(unsigned char)5] [(_Bool)1] [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) ((max((((((/* implicit */_Bool) var_14)) ? (9007199221186560ULL) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)20))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
}

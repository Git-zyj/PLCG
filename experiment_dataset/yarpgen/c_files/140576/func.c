/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140576
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] = max((((signed char) var_1)), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))))));
                    var_12 = ((/* implicit */signed char) (~(max((435233712466595873ULL), (((((/* implicit */unsigned long long int) arr_0 [i_0])) / (17713384561270292120ULL)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) (((~(max((var_0), (((/* implicit */unsigned int) -731261730)))))) >= (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) (unsigned short)38886)) != (((/* implicit */int) var_8))))), (-87172231))))));
    var_14 = ((/* implicit */short) var_10);
    var_15 = ((/* implicit */_Bool) ((short) (((-(((/* implicit */int) var_9)))) ^ (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (_Bool)1))))))));
}

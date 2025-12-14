/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151257
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
    var_17 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) arr_0 [i_0] [i_1]);
                    arr_8 [(unsigned char)2] [(_Bool)0] [i_2 + 1] |= ((/* implicit */short) ((unsigned short) arr_2 [(_Bool)1] [i_2]));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) var_2);
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(63LL)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((unsigned short) (~(57LL))))))))));
}

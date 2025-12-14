/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178913
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
    var_15 = ((/* implicit */unsigned int) (unsigned short)0);
    var_16 += ((/* implicit */unsigned short) 3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)-8606)))) && (((/* implicit */_Bool) ((unsigned int) arr_0 [i_0])))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_2 [i_0]))) * (max((6), (((/* implicit */int) (_Bool)0))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) (unsigned short)6663))));
                    var_19 = ((/* implicit */_Bool) ((-6139239998266553104LL) ^ (((/* implicit */long long int) 3655189655U))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((unsigned short) (signed char)96));
    var_21 = ((/* implicit */short) ((((/* implicit */int) var_6)) % (var_10)));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158503
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1])))))) : (max((arr_4 [i_1 - 1]), (((/* implicit */long long int) arr_1 [i_1 - 1]))))));
                var_16 *= ((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_1]))));
                var_17 = ((/* implicit */unsigned long long int) var_14);
                var_18 = ((/* implicit */_Bool) ((long long int) var_7));
                var_19 = (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(short)6])) && (((/* implicit */_Bool) var_10)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_4)), ((unsigned char)33)))), (max(((unsigned short)50612), (((/* implicit */unsigned short) var_8)))))))) == (max((((17892312646487350748ULL) / (((/* implicit */unsigned long long int) -8415423554867305154LL)))), (((/* implicit */unsigned long long int) ((_Bool) var_12)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168066
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) var_6))));
    var_11 = var_3;
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */long long int) arr_2 [i_1] [i_1]);
                var_12 = ((/* implicit */short) ((max((arr_3 [i_0 - 2] [i_0] [7ULL]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65535))))))) == (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_1 [i_0 - 1] [i_0 - 1])), ((-(arr_2 [(unsigned char)9] [(unsigned char)9]))))))));
                var_13 = ((/* implicit */unsigned long long int) (unsigned short)29742);
            }
        } 
    } 
    var_14 += ((/* implicit */int) (short)32760);
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (short)-32760)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && ((!(((/* implicit */_Bool) 1236900470515889384ULL)))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) % (max((3155504890U), (((/* implicit */unsigned int) (short)-22290))))))));
}

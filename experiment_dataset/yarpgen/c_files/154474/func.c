/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154474
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
    var_14 = ((/* implicit */int) ((-1LL) / (((/* implicit */long long int) 3098234483U))));
    var_15 = ((/* implicit */unsigned short) max((((((3098234475U) <= (((/* implicit */unsigned int) 2147483645)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_13))))) : (min((((/* implicit */unsigned long long int) var_9)), (7321005513818911565ULL))))), (((/* implicit */unsigned long long int) var_10))));
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */int) ((max((arr_3 [i_0]), (((/* implicit */int) (!((_Bool)1)))))) <= (((/* implicit */int) max((min(((unsigned short)16), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) min((var_8), (var_11)))))))));
                var_17 = ((/* implicit */unsigned long long int) max((((unsigned short) arr_4 [i_0])), (((/* implicit */unsigned short) max((((68971836U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))), (((arr_3 [i_1]) != (arr_3 [i_0]))))))));
            }
        } 
    } 
    var_18 -= ((/* implicit */unsigned long long int) (unsigned char)207);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100037
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_9))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_1 [i_0] [0LL]))))))));
                var_10 += ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)23681)) << (((/* implicit */int) (_Bool)1))));
                var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_2 [(_Bool)1])) - (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((_Bool) arr_1 [6U] [i_1])))))) || (((/* implicit */_Bool) (+(2127978311)))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), ((unsigned short)23681))), (((/* implicit */unsigned short) arr_0 [i_0] [i_1 + 2]))));
            }
        } 
    } 
    var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_3))))));
}

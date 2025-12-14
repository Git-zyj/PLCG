/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128051
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
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_14))))) | (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_9))))))))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((short) var_3)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((max((var_11), (var_11))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) > (var_11)))))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((unsigned int) 4288080166U)) >> ((((-(((((/* implicit */_Bool) 1155845069)) ? (4284883729946554116LL) : (((/* implicit */long long int) 2698611334U)))))) + (4284883729946554124LL))))))));
                var_23 = ((/* implicit */unsigned int) (!((!((!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1]))))))));
            }
        } 
    } 
}

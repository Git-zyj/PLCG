/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178636
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) var_9);
        arr_4 [i_0] = ((/* implicit */unsigned char) max((min((((/* implicit */int) ((short) var_7))), ((((_Bool)1) ? (1431226565) : (((/* implicit */int) var_11)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((int) (_Bool)1)) : (((/* implicit */int) var_8))))));
    }
    var_14 = ((/* implicit */_Bool) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)17419)))));
    var_15 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((max(((short)-28798), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (!(((/* implicit */_Bool) var_6))))))))));
}

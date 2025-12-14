/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142147
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
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) (unsigned short)37639))))))))));
    var_15 = ((((/* implicit */_Bool) 5634167275076748663ULL)) ? (-24855103) : (1339757942));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        var_16 = (unsigned char)138;
        var_17 = ((/* implicit */short) var_8);
        var_18 *= ((/* implicit */_Bool) (+((~(15590041567211436524ULL)))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_19 = arr_4 [i_0] [i_1] [i_1];
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((((/* implicit */int) var_13)) / (((/* implicit */int) arr_4 [i_1] [i_1] [i_0])))) : (((int) arr_4 [i_0] [20] [i_1]))));
            var_21 -= ((/* implicit */_Bool) var_3);
            var_22 = ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0]);
        }
    }
}

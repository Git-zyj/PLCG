/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130835
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
    var_12 |= ((/* implicit */long long int) var_1);
    var_13 |= ((/* implicit */unsigned char) ((unsigned int) var_3));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) var_7);
        var_14 = ((/* implicit */_Bool) (~((+(min((6045669832182720690LL), (((/* implicit */long long int) arr_1 [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) 6045669832182720701LL)))));
                    var_15 *= ((/* implicit */unsigned char) (-((~((+(((/* implicit */int) (unsigned short)60175))))))));
                    var_16 *= ((/* implicit */unsigned char) arr_1 [i_0]);
                    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_8)))) ? ((+(-6045669832182720690LL))) : (((/* implicit */long long int) (-(406477391U)))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 62U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1024))) : (var_8)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)38433)) == (((/* implicit */int) (_Bool)0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)16368))))))))));
                }
            } 
        } 
    }
    var_18 = 72057593501057024LL;
}

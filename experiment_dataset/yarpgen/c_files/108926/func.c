/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108926
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
    for (int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) (~(var_15)));
                var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1658674960028729421LL)) ? (arr_0 [i_0]) : (((/* implicit */int) var_3))))))) ? ((+((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)79))) : (-1726152475260587146LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
                var_18 = ((/* implicit */unsigned int) (~(min((-1726152475260587159LL), (((/* implicit */long long int) (unsigned short)13124))))));
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_16))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 4; i_2 < 17; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) 1726152475260587146LL);
        var_21 = ((/* implicit */unsigned long long int) (short)255);
        arr_11 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2 - 4] [i_2 - 4])))))));
    }
    var_22 *= ((/* implicit */unsigned int) var_11);
}

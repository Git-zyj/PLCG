/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160748
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
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_2 [i_0 + 1] [i_2 - 1])))) ? ((-(arr_3 [i_2 - 1]))) : (((int) ((unsigned short) arr_4 [i_0])))));
                    var_15 = ((/* implicit */int) var_0);
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((15041048322099768871ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_13), (((/* implicit */unsigned short) (short)-18307)))))))) << (((((((/* implicit */_Bool) arr_2 [i_2] [12ULL])) ? (((/* implicit */int) max(((unsigned char)20), ((unsigned char)253)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)18387))))))) - (245))))))));
                }
            } 
        } 
    } 
    var_17 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((min((var_7), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((-30LL) + (9223372036854775807LL))) << (((((((/* implicit */int) var_5)) + (30831))) - (19)))))))))));
    var_18 = ((/* implicit */unsigned char) ((unsigned long long int) (((~(((/* implicit */int) (unsigned short)43321)))) > (((/* implicit */int) max(((unsigned short)11557), ((unsigned short)65509)))))));
}

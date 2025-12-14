/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11928
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
    var_19 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
    var_20 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2143449634U)) ? ((+(15226984522243440047ULL))) : (((/* implicit */unsigned long long int) ((2151517666U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)5416))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) -1688883642)) : (5947162569516379568LL)))) : (var_18));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) ((2143449634U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)31722)))));
                var_21 = ((/* implicit */unsigned short) var_2);
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((((/* implicit */int) (unsigned short)4)) - (((/* implicit */int) (unsigned char)0))))))));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (short)5413))));
            }
        } 
    } 
}

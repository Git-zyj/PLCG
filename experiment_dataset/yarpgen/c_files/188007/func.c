/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188007
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_5 [i_0] [(unsigned char)1] [13ULL] [i_0]))));
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((min((((/* implicit */unsigned long long int) (signed char)56)), (var_11))) > ((+(2503436364087298251ULL))))) ? ((+(var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) ((((/* implicit */int) (short)-31175)) != (((/* implicit */int) arr_5 [i_2] [i_2] [i_0] [i_0]))))) : (((/* implicit */int) ((signed char) arr_2 [i_0] [i_0])))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((long long int) max((((/* implicit */unsigned short) var_5)), (var_16)))) * (((/* implicit */long long int) ((/* implicit */int) var_16)))));
}

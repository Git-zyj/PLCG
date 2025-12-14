/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117433
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
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -8607508167707577684LL)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) (_Bool)1);
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned short) (short)28516));
                arr_8 [i_1] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((long long int) max((573406564U), (3721560720U))))), (((unsigned long long int) -120279394))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1235)) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (9344784732620312639ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1240))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned short)65532)))))) : (((/* implicit */int) (short)17206))));
    var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) 4294967295U))), (max((((/* implicit */unsigned short) (short)-1240)), ((unsigned short)20316))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116446
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
    var_15 = ((/* implicit */unsigned char) var_1);
    var_16 = ((/* implicit */short) (((~(2681944724295453153ULL))) < (((/* implicit */unsigned long long int) 3731270835U))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~(1204154839))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_2 + 3] [18ULL] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_7))))))), (min((arr_13 [i_0]), (arr_13 [i_0])))));
                            arr_15 [i_3] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_6);
                            arr_16 [i_0] [(unsigned char)23] [i_1] [i_0] = ((((/* implicit */_Bool) (+(1204154839)))) ? (max((1990206533U), (((/* implicit */unsigned int) -1204154852)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
                            arr_17 [i_0] = max((((short) (~(((/* implicit */int) arr_6 [i_0] [i_0]))))), (var_1));
                            arr_18 [i_0] = ((/* implicit */unsigned int) var_2);
                        }
                    } 
                } 
                arr_19 [i_0] [(_Bool)0] = ((/* implicit */signed char) arr_8 [i_0] [i_0]);
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189382
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
    var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) << (((/* implicit */int) var_8))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (unsigned char)252))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)-7010))))) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])))) % (((/* implicit */int) arr_10 [i_3] [i_2] [i_1] [i_0])))))));
                            arr_11 [i_0] [i_3] [i_0] [i_0] [i_0] = var_2;
                            var_17 = ((((/* implicit */_Bool) var_7)) ? (((8330603367224289649ULL) - ((~(var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28078))));
                        }
                    } 
                } 
                var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (var_7) : (arr_2 [i_0] [i_1] [i_0])))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_0])))) : (((((/* implicit */_Bool) (short)-6999)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7118856396198867312ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_0]))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_1])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))))));
            }
        } 
    } 
}

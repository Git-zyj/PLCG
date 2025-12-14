/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163227
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(4553469308352198188ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))))) || (((/* implicit */_Bool) max(((~(((/* implicit */int) var_9)))), (((/* implicit */int) ((signed char) 980761160192907348ULL))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_12 [i_1] [(short)8] = ((/* implicit */short) (~(((/* implicit */int) arr_1 [(unsigned short)5]))));
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (1984120281U) : (((/* implicit */unsigned int) (((((~(((/* implicit */int) arr_9 [i_1] [(_Bool)1] [i_1])))) + (2147483647))) << (((((/* implicit */int) arr_4 [i_3] [i_1])) - (80))))))));
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))))));
            }
        } 
    } 
    var_13 = ((((/* implicit */_Bool) (((~(-4669142708148255234LL))) / (((/* implicit */long long int) (~(((/* implicit */int) (short)31352)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_5)))))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */short) var_1)), ((short)(-32767 - 1))))), (var_6))));
    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 2147483647)) > (1152921504606846976ULL)))), ((-(var_2))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102844
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 2])) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 2])) ? (var_7) : (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_1])))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)31139))))))))));
                var_15 = ((/* implicit */int) 31457280U);
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) (_Bool)0);
    var_17 = ((/* implicit */signed char) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_2 = 4; i_2 < 18; i_2 += 4) 
    {
        var_18 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_2 + 1]))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            arr_11 [i_2] [i_2] [i_3] = ((/* implicit */long long int) var_6);
            var_19 = ((/* implicit */unsigned char) var_0);
        }
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_4 [i_2 - 3] [i_2] [4]))));
        arr_12 [i_2] = (((!(var_13))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 7300581505135243250LL)))));
        var_21 = ((/* implicit */unsigned int) arr_5 [i_2 - 3]);
    }
}

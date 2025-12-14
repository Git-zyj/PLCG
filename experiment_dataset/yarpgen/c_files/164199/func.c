/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164199
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_11 -= ((/* implicit */unsigned char) 10577441256948044269ULL);
                arr_6 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)13459))));
                arr_7 [i_0] [i_0] = ((max(((+(var_7))), (((/* implicit */long long int) min((arr_5 [i_0] [i_1]), (((/* implicit */int) arr_2 [i_0] [i_0]))))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_10)))) ? (max((((/* implicit */long long int) var_2)), (var_4))) : (((var_1) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                var_12 = ((/* implicit */signed char) arr_4 [(signed char)9] [i_0]);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_4);
}

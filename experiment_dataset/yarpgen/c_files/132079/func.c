/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132079
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) max(((signed char)91), (((/* implicit */signed char) var_7))))))));
                    arr_9 [i_0] [i_1] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) <= (-1214569466824218332LL)))) >> (((((/* implicit */int) min((((/* implicit */short) arr_5 [i_0] [i_0])), ((short)25920)))) + (106))))))))) : (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) <= (-1214569466824218332LL)))) >> (((((((/* implicit */int) min((((/* implicit */short) arr_5 [i_0] [i_0])), ((short)25920)))) + (106))) - (23)))))))));
                    var_21 = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_0]);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_4);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186743
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
    var_19 = ((/* implicit */_Bool) (((~(var_7))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_13) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)58853)))))))));
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned short) ((signed char) var_8))))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (short)-13811))) * (min((((/* implicit */unsigned int) (unsigned short)50527)), (53625339U))))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) (-(11430221855269155204ULL)));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((max((arr_2 [i_0] [i_0 + 1]), (((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */int) arr_4 [(short)11] [(short)11] [i_1])))))) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))) < ((~(7153494298194161966ULL))))))));
                var_21 = ((/* implicit */unsigned short) arr_0 [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) min((((/* implicit */long long int) var_6)), ((-9223372036854775807LL - 1LL)))))) && (max(((!(((/* implicit */_Bool) var_0)))), (((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_3)))))))))));
}

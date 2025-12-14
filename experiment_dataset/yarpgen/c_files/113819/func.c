/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113819
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
    var_15 = ((/* implicit */unsigned int) (_Bool)1);
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_8))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (-9223372036854775807LL - 1LL))))) ^ (((((/* implicit */_Bool) (short)19882)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-19880))) : (arr_1 [i_0 + 2])))));
        arr_3 [i_0 + 2] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (max((arr_1 [i_0 + 1]), (var_0)))));
        var_17 = ((/* implicit */int) arr_0 [i_0]);
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) 17645678912031817861ULL);
        arr_7 [i_1] [14] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_4 [i_1] [i_1])) | (((/* implicit */int) arr_5 [i_1] [i_1])))), (((1557182631) & (((/* implicit */int) arr_5 [(short)22] [i_1]))))));
        var_18 = arr_4 [i_1] [21U];
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((((min((((/* implicit */int) arr_5 [i_1] [i_1])), (1557182631))) ^ (((/* implicit */int) arr_5 [i_1] [i_1])))), (((/* implicit */int) (unsigned char)155)))))));
    }
    for (int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */long long int) arr_10 [i_2]);
        var_20 &= ((/* implicit */unsigned long long int) ((signed char) (signed char)72));
    }
    var_21 = ((/* implicit */short) var_8);
    var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) ((int) var_10)))));
}

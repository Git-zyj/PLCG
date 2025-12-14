/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141263
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) - (var_11))))))))));
    var_14 = ((/* implicit */short) var_11);
    var_15 = ((/* implicit */short) max((((_Bool) 13800980514008901174ULL)), (var_4)));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) ((short) ((long long int) var_6)));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((((long long int) var_6)), (max(((~(-1998002522545834241LL))), (((/* implicit */long long int) arr_3 [(unsigned short)16])))))))));
        var_18 += ((/* implicit */_Bool) arr_0 [(unsigned char)12]);
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned short) var_12));
        arr_9 [i_1] = ((/* implicit */_Bool) arr_3 [(_Bool)1]);
        var_19 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)0]))) / ((~(max((var_5), (((/* implicit */long long int) arr_2 [4LL] [4LL]))))))));
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) var_5);
    }
    for (long long int i_2 = 4; i_2 < 15; i_2 += 1) 
    {
        var_20 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [12LL])) != (((/* implicit */int) (!(((_Bool) (unsigned char)162)))))));
        arr_13 [i_2] [i_2 - 4] = ((/* implicit */long long int) var_10);
    }
    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        var_21 = ((144112989052600320LL) << (((/* implicit */int) (_Bool)1)));
        arr_17 [i_3] = ((_Bool) arr_14 [i_3]);
    }
}

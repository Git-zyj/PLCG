/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110431
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
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) (_Bool)1)))))));
                var_21 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_2 [18ULL])), (((((/* implicit */_Bool) ((arr_0 [i_1]) ? (var_19) : (8485594957837676975ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2]))) : (6566318071247459119ULL)))));
                var_22 += ((/* implicit */signed char) (+(((arr_0 [i_0 + 2]) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (612391288)))));
            }
        } 
    } 
    var_23 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) -89708471))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : ((~(4999545518894095926ULL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) var_15)), (var_11))))))) : (max((696343130), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)224)))))))));
    var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) -612391284)) ? (((/* implicit */unsigned long long int) -5416497946281274974LL)) : (var_2))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 696343130)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (5416497946281274973LL)))))))) / (var_3)));
    var_25 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : ((~(18127410428815600634ULL))))), (5559669814669689273ULL)));
    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) var_14))));
}

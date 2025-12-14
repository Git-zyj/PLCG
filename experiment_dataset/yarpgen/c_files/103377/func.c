/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103377
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (var_6)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (_Bool)1);
        var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (~(((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)243)))) || (((/* implicit */_Bool) ((arr_2 [(_Bool)1]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)195))) : (2521299999986353209LL))))))))))));
        var_12 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) -1763669809719285208LL)), (3206633922233910100ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
        var_13 = ((/* implicit */long long int) ((-6270728853547326947LL) > (((/* implicit */long long int) 4294967295U))));
    }
    for (long long int i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [(unsigned char)8]))))), (var_6)));
        arr_7 [6LL] [6LL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_5 [(_Bool)1])) : (((/* implicit */int) (_Bool)1))))))) - (3214537566U)));
    }
    for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        var_15 = ((/* implicit */_Bool) var_5);
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)245))));
        var_17 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 274877906943LL)) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) arr_1 [(unsigned short)10]))))));
        var_18 = max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)9));
    }
}

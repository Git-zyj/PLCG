/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164645
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
    var_19 = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)47)))), (((/* implicit */int) ((_Bool) var_0))))), (((/* implicit */int) var_12))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_20 = var_13;
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))));
        var_22 = (~(((/* implicit */int) (unsigned char)0)));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-124))));
        var_23 = ((/* implicit */int) 262016U);
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) ((unsigned int) var_13));
        var_25 &= ((/* implicit */unsigned int) ((_Bool) (unsigned short)55450));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] [i_3] = ((/* implicit */short) arr_7 [i_3]);
        var_26 = ((/* implicit */int) arr_11 [i_3]);
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned int) arr_4 [i_3 - 1] [i_3 - 1]))))) ? (max((((((/* implicit */unsigned long long int) var_16)) | (var_18))), (min((arr_11 [i_3]), (var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 419746042U))))))));
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_12), ((unsigned char)253)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_10 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))) : (((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3]))) > (arr_11 [i_3]))), (((_Bool) arr_11 [i_3 - 1])))))));
        var_29 = ((/* implicit */int) (!(((((((/* implicit */_Bool) 248504012)) || (((/* implicit */_Bool) var_3)))) && (((_Bool) arr_14 [i_3] [i_3 - 1]))))));
    }
}

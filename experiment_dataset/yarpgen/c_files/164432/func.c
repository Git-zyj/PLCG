/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164432
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
    var_18 = (~(var_4));
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (+(var_9))))));
    var_20 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */int) var_17)))) / ((~(((/* implicit */int) var_16))))))) ? (((((((/* implicit */int) (short)15189)) | (((/* implicit */int) (short)7936)))) / (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_6)) ? (max((var_2), (var_2))) : (((/* implicit */int) var_12)))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_21 = ((/* implicit */int) (((~(var_4))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1356588473))))))));
        var_22 = (~(arr_0 [i_0] [i_0]));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((((arr_1 [(unsigned char)9] [9ULL]) - (4947159352685765273ULL))) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_1])))))));
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1990802961)) && (((((/* implicit */unsigned long long int) var_9)) >= (((((/* implicit */_Bool) 6923918699540409645ULL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))))))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 2) 
    {
        var_25 &= ((/* implicit */_Bool) (+((-(((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_8)))))))));
        var_26 &= ((/* implicit */int) var_10);
        var_27 -= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((int) var_9))) && ((!(((/* implicit */_Bool) arr_2 [i_2]))))))) % (((/* implicit */int) arr_2 [i_2]))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173953
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
    var_17 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 3483603302U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-122)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-122)))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-14198)) ^ (((/* implicit */int) var_15)))) * (((/* implicit */int) ((((/* implicit */int) (short)14209)) >= (((/* implicit */int) (unsigned short)23574)))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) * (((((/* implicit */_Bool) var_15)) ? (4656758507514996946ULL) : (0ULL)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_18 &= ((/* implicit */signed char) var_6);
        arr_3 [i_0] = ((/* implicit */int) max((((2477695262U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((unsigned char) arr_0 [i_0] [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [(_Bool)1] [i_1] = ((/* implicit */int) min(((+(arr_2 [i_1]))), (((/* implicit */long long int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) arr_1 [i_1])))))));
        var_19 = ((((/* implicit */int) arr_4 [i_1] [i_1])) % ((+(((/* implicit */int) arr_4 [i_1] [i_1])))));
        arr_7 [i_1] [i_1] |= ((/* implicit */unsigned int) min(((short)14197), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [(_Bool)1]) < (((/* implicit */long long int) ((/* implicit */int) (short)4092))))))) == (((1817272052U) >> (((((/* implicit */int) (short)4095)) - (4078))))))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((var_10) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_14))))))) < (((long long int) var_1))));
    }
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(max((-8255211502287912174LL), (((/* implicit */long long int) var_11))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (min((var_2), (((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
    var_22 = ((/* implicit */_Bool) var_14);
}

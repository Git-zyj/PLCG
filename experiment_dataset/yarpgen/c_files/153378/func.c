/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153378
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
    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) var_16)) | (var_9))) / (((/* implicit */unsigned long long int) (((-(var_16))) % (-473142889))))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_11), (((/* implicit */short) (_Bool)1))))) | (((/* implicit */int) var_6))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) 3731989649U);
        var_22 = ((/* implicit */long long int) ((signed char) var_4));
        arr_2 [(_Bool)1] &= ((/* implicit */long long int) (-(11ULL)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((17LL) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))) != (arr_5 [i_1] [i_1])))))));
        var_24 = ((/* implicit */unsigned int) max(((~(arr_5 [i_1] [i_1]))), (((/* implicit */long long int) (((-(arr_3 [i_1] [i_1]))) > (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-17768))))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        var_25 += var_3;
        var_26 = ((/* implicit */_Bool) min((((/* implicit */long long int) max(((-(((/* implicit */int) (unsigned char)179)))), (var_5)))), (((min((((/* implicit */long long int) var_0)), (4LL))) - (((/* implicit */long long int) arr_8 [i_2] [i_2]))))));
        var_27 *= ((/* implicit */signed char) (_Bool)1);
    }
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        var_28 = (+(((((/* implicit */int) ((0LL) >= (arr_5 [i_3] [i_3])))) * (((/* implicit */int) (signed char)20)))));
        var_29 = ((/* implicit */long long int) (unsigned short)65530);
        var_30 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-((-(arr_9 [i_3])))))) ? ((+((+(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_2))));
    }
}

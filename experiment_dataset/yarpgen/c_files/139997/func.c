/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139997
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
    var_10 = ((/* implicit */unsigned int) var_3);
    var_11 = ((/* implicit */unsigned short) var_8);
    var_12 = ((/* implicit */unsigned long long int) ((long long int) var_3));
    var_13 = ((/* implicit */unsigned long long int) max(((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (2894087735661496324LL))))), (((/* implicit */long long int) max((((/* implicit */int) var_8)), (var_0))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_14 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_2)))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (((+(((/* implicit */int) arr_1 [i_0])))) >> (((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (short)32767)) : (var_0))) - (32749)))));
    }
    for (unsigned int i_1 = 2; i_1 < 9; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) min((((((((/* implicit */int) min(((short)9056), (((/* implicit */short) var_8))))) + (2147483647))) >> (((var_6) - (512669477U))))), ((~(((/* implicit */int) arr_1 [i_1]))))));
        var_16 = ((/* implicit */unsigned int) arr_1 [i_1]);
    }
    for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 2) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((unsigned short) 12014774846156787883ULL)))));
        var_18 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min(((unsigned short)30362), (((/* implicit */unsigned short) (short)6344))))), (arr_9 [(unsigned char)4])));
        var_19 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [(_Bool)1])) & (((/* implicit */int) ((_Bool) arr_10 [(unsigned short)10])))));
        var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((int) ((unsigned int) arr_8 [i_2])))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551599ULL)))));
    }
}

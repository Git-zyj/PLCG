/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100372
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_0 [i_0])) - (233)))))) ? ((~(-104375522))) : ((~(((/* implicit */int) arr_0 [i_0])))))), ((+((+(((/* implicit */int) var_4))))))));
        var_18 = ((/* implicit */unsigned int) min((-104375522), (-104375526)));
        var_19 = ((/* implicit */unsigned short) (~(var_8)));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (-((-((-(var_11))))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] &= ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_1] [i_1]))));
        var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */unsigned long long int) -10LL)) : (8794407487276525849ULL))) : ((~(4219077353847567123ULL)))));
        arr_6 [i_1] = ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1])));
        arr_7 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 694004950)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_1]))))) ? ((~(var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1])))));
        arr_8 [i_1] = ((/* implicit */_Bool) arr_3 [i_1] [i_1]);
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) arr_1 [i_2]);
        var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 450389492U)) ? (max((((/* implicit */unsigned long long int) arr_9 [(signed char)18])), (arr_10 [i_2] [i_2 - 1]))) : (((/* implicit */unsigned long long int) arr_9 [14]))));
        arr_12 [i_2] [16ULL] = ((/* implicit */_Bool) (-((~(1881884566U)))));
    }
    var_24 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (18446744073709551609ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (((((/* implicit */_Bool) 255ULL)) ? (2U) : (3844577817U))))))));
    var_25 = ((/* implicit */unsigned char) var_8);
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) 4219077353847567118ULL)) ? (((((/* implicit */_Bool) (short)-1)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5937))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_17))) / (var_16))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) ((var_8) <= (((/* implicit */unsigned long long int) var_9))))), (max(((short)2047), (((/* implicit */short) (_Bool)1))))))))));
}

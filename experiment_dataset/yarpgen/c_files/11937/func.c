/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11937
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_19 &= ((/* implicit */int) max((((/* implicit */long long int) ((var_16) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) arr_0 [i_0 + 2]))))), (((min((((/* implicit */long long int) (short)32767)), (9223372036854775807LL))) - (max((70368744177663LL), (arr_2 [4])))))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) (unsigned short)65535)) : ((-2147483647 - 1))))) & ((~(arr_3 [2U])))))) ? (((((/* implicit */int) ((_Bool) var_16))) << (((((((/* implicit */_Bool) 3ULL)) ? (arr_2 [(short)22]) : (((/* implicit */long long int) arr_3 [18])))) + (3911664220299885496LL))))) : ((+(((((/* implicit */_Bool) arr_3 [(unsigned short)12])) ? (-1) : (((/* implicit */int) (unsigned short)255)))))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) 
    {
        arr_8 [(_Bool)1] = ((/* implicit */int) arr_2 [6LL]);
        var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((4294967293U), (((/* implicit */unsigned int) var_10))))), (((((((/* implicit */unsigned long long int) 9223372036854775801LL)) | (arr_4 [i_1]))) & (((/* implicit */unsigned long long int) 17))))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1])) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) arr_7 [(unsigned short)1] [i_1 + 2]))))) ? (max((((/* implicit */long long int) arr_1 [i_1])), (arr_6 [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_1]))))))) ? (((unsigned int) arr_4 [i_1 + 2])) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (~(arr_7 [i_1] [i_1 - 1])))))))))));
    }
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_14)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5))) : (var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) * (((/* implicit */int) var_10)))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13))))) - (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
    var_24 = ((/* implicit */unsigned short) ((long long int) var_18));
    var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(2251799545249792ULL)))) ? (((/* implicit */int) var_18)) : ((-(((/* implicit */int) var_2))))));
}

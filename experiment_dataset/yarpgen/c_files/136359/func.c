/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136359
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
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        var_11 = ((/* implicit */int) ((((/* implicit */_Bool) 8772117574261027133ULL)) && (((/* implicit */_Bool) 0ULL))));
        arr_2 [i_0] = (unsigned short)7593;
        var_12 += ((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_1 [(unsigned short)7]))));
        arr_3 [i_0 + 2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7591)) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0])))) : (8191330108525692600ULL)));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((int) arr_4 [i_1] [i_1])) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned short)57943)) : (((/* implicit */int) arr_4 [i_1] [i_1]))))));
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned short)7593)) : (((/* implicit */int) arr_5 [i_1] [i_1])))) % (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1]))))));
    }
    var_14 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_6))))) : (((int) -2147483637))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) (signed char)-1)))))) ^ (max((((/* implicit */unsigned long long int) 4294967295U)), (var_2)))))));
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_10))))), (((((/* implicit */unsigned long long int) ((long long int) (unsigned short)57942))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (255ULL))))))))));
}

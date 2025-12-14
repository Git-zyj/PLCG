/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157520
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
    var_19 = min((((/* implicit */unsigned long long int) min((381350119), (-381350123)))), (max((var_14), (((/* implicit */unsigned long long int) var_17)))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) -381350133)) | (3465361894491717659ULL)))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)143)) && (((/* implicit */_Bool) arr_2 [i_0])))))));
        arr_4 [i_0] |= ((/* implicit */short) min((((unsigned long long int) max(((signed char)31), (((/* implicit */signed char) arr_1 [i_0] [i_0]))))), (max((min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (arr_0 [i_0]))), (max((((/* implicit */unsigned long long int) var_17)), (142989288169013248ULL)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 3])) / (-381350143))))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) 381350131))) ^ (((unsigned long long int) -2147483643)))))));
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((-2147483644) > (((/* implicit */int) var_1))))) == (((/* implicit */int) arr_7 [i_1] [i_1 + 2]))));
        var_23 = ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (arr_2 [i_1 - 1]) : (arr_2 [i_1 - 2]));
        arr_9 [i_1] [i_1 - 1] = ((/* implicit */int) (~(arr_0 [i_1])));
    }
    for (unsigned short i_2 = 3; i_2 < 11; i_2 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || ((((+(((/* implicit */int) arr_1 [i_2] [i_2])))) > (arr_11 [i_2])))));
        arr_13 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) (unsigned char)156)) : (381350098)))) ? (((unsigned long long int) arr_12 [i_2] [i_2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 + 1])))))) ? (((/* implicit */int) ((unsigned char) (!(arr_1 [i_2] [i_2]))))) : (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_2])), ((unsigned short)65180)))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_2]))) < (14246971089852573993ULL)))))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119908
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (((((/* implicit */_Bool) 4412071672333428361ULL)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (_Bool)0))))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_7))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-50))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((17745161326611399452ULL) / (18446744073709551612ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_8))))) : (((4ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7)))))));
        var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(_Bool)1])) ? (((/* implicit */int) arr_4 [i_1])) : (1970094469)))) ? (((/* implicit */int) arr_4 [i_1])) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))));
    }
    for (unsigned short i_2 = 2; i_2 < 19; i_2 += 2) 
    {
        arr_7 [i_2] = ((/* implicit */_Bool) max((14034672401376123251ULL), (((/* implicit */unsigned long long int) (signed char)126))));
        arr_8 [i_2] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5221588938478994888LL)) ? (arr_5 [i_2] [i_2 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 + 1])))))) && (((/* implicit */_Bool) (+(var_4)))))));
    }
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8451)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)23726)))))));
    var_22 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_16)) <= (((/* implicit */int) ((unsigned short) var_16))))) ? (((/* implicit */int) ((((/* implicit */int) min(((unsigned short)57085), (((/* implicit */unsigned short) (unsigned char)240))))) < (((/* implicit */int) (_Bool)1))))) : (max(((+(((/* implicit */int) var_16)))), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_6)))))))));
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_10))))) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) var_5)))))))));
}

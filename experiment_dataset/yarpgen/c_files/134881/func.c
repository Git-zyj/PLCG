/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134881
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_12 = ((((/* implicit */_Bool) 18446744073709551584ULL)) ? (((int) arr_0 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */int) var_7)) == (arr_0 [i_0] [i_0])))));
        arr_2 [i_0] = ((/* implicit */long long int) (!(arr_1 [12U])));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)80)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) ? (((7961620410952062644ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-57))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_4)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)32002))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) (-((~(812923652)))));
        arr_8 [i_1] = ((/* implicit */long long int) arr_0 [i_1] [i_1]);
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        arr_11 [(unsigned short)4] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) var_9)))));
        var_13 = ((/* implicit */long long int) (_Bool)1);
        arr_12 [i_2] [i_2] = ((/* implicit */short) arr_10 [i_2]);
    }
    /* LoopSeq 1 */
    for (signed char i_3 = 2; i_3 < 7; i_3 += 3) 
    {
        var_14 += ((/* implicit */unsigned int) (signed char)-54);
        var_15 = ((/* implicit */long long int) ((min((arr_0 [i_3 - 1] [i_3]), (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) arr_10 [i_3]))));
    }
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (((long long int) 7961620410952062644ULL))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    var_17 ^= ((/* implicit */short) min((((/* implicit */unsigned int) var_7)), (var_3)));
}

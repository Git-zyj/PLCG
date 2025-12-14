/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165517
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
    var_15 = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) max((var_12), (var_12)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))) ? (((((/* implicit */_Bool) max((arr_2 [i_0] [0ULL]), (((/* implicit */long long int) arr_0 [i_0] [i_0]))))) ? (min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0] [18U])) ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) 1285801625)), (arr_2 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : (min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) arr_0 [3U] [i_0]))))))));
        var_17 *= ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_4 [i_1])), (arr_1 [(signed char)10] [6ULL])))) : (max((((/* implicit */unsigned long long int) arr_0 [i_1] [11U])), (arr_3 [i_1]))))), (min((((((/* implicit */_Bool) 10831394675038417114ULL)) ? (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1])) : (arr_3 [i_1]))), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) (((+(arr_1 [i_1] [i_1]))) == ((-(arr_1 [i_1] [i_1])))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((unsigned short) min((arr_0 [i_1] [12U]), (arr_0 [i_1] [(_Bool)1])))))));
        var_20 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_2 [i_1] [i_1])))) || (((/* implicit */_Bool) (+(arr_1 [i_1] [(unsigned short)15]))))))), (((((/* implicit */_Bool) arr_1 [3LL] [i_1])) ? (arr_1 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))));
        arr_6 [i_1] = min((((((/* implicit */_Bool) arr_4 [i_1])) ? (max((5469580833497881901LL), (arr_1 [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (arr_1 [i_1] [i_1]) : (arr_2 [i_1] [i_1]))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) && (((/* implicit */_Bool) arr_1 [i_1] [(unsigned short)19]))))), ((~(arr_2 [i_1] [i_1]))))));
    }
    var_21 |= ((/* implicit */long long int) var_13);
    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-((-(var_8))))))));
    var_23 = ((/* implicit */_Bool) var_10);
}

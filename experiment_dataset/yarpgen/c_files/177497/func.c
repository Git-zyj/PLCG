/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177497
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [2LL] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)151))));
        var_11 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)13)) ? (var_6) : (((/* implicit */int) (signed char)-14))))) || (((/* implicit */_Bool) arr_0 [i_0]))));
        var_12 = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1]))) == (arr_3 [i_1])))), (min((((/* implicit */unsigned int) (signed char)13)), (arr_4 [6ULL]))))))));
        /* LoopSeq 2 */
        for (int i_2 = 2; i_2 < 21; i_2 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned long long int) var_0);
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_1]))))), (((arr_6 [i_1] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_4 [(unsigned char)24])))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)7287)), (((long long int) var_4))))) : (((((/* implicit */_Bool) 11ULL)) ? (((/* implicit */unsigned long long int) (+(arr_4 [(signed char)6])))) : (arr_3 [i_1])))))));
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1] [i_1 + 3]))))) ? (((arr_6 [i_2] [i_1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (unsigned short)7312))))))) / ((+((~(-5472539274949612906LL))))))))));
        }
        for (int i_3 = 2; i_3 < 21; i_3 += 3) /* same iter space */
        {
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-26)) ^ (((/* implicit */int) (unsigned short)7312))));
            var_17 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
            arr_12 [i_3 + 1] [(unsigned short)24] |= ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) arr_4 [14])) / (((((/* implicit */_Bool) (unsigned short)40843)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)187))) : (arr_3 [i_3])))))));
        }
    }
    var_18 = ((/* implicit */_Bool) (unsigned short)39477);
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)39493)) ? (min((((/* implicit */unsigned int) min((var_7), (var_10)))), (((unsigned int) (short)2990)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29193))))))));
}

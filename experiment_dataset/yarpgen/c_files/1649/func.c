/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1649
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((unsigned char) -1396443735))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)114))) | (-2358246743320915192LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [14U])) / (((/* implicit */int) var_15)))))))));
        var_19 += ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_1 [i_0] [i_0])))) | (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
    {
        arr_4 [i_1] = ((unsigned short) (((!(((/* implicit */_Bool) var_16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-82))) : (arr_2 [i_1])));
        var_21 = ((/* implicit */unsigned char) ((1894690558) > (((/* implicit */int) var_15))));
    }
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) var_8);
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((/* implicit */int) arr_0 [i_2] [i_2])) : (((/* implicit */int) arr_0 [i_2] [i_2])))))))));
        var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-90)) ^ (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) (unsigned short)62565))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2]))))) : ((~(((/* implicit */int) ((unsigned char) var_1)))))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) (signed char)81)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_12))))), (((unsigned long long int) (signed char)-82))))));
    }
    var_26 ^= ((/* implicit */unsigned long long int) ((int) (~(10036407358078805450ULL))));
    var_27 = ((/* implicit */_Bool) -5197421184871634507LL);
    /* LoopSeq 1 */
    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 2) 
    {
        var_28 += ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) var_11)) / ((~(arr_2 [i_3]))))));
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((arr_9 [(_Bool)1]) ? (4264615430162012693LL) : (((/* implicit */long long int) ((/* implicit */int) (short)3968)))))))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_2)))) && (((/* implicit */_Bool) ((signed char) 8410336715630746144ULL)))))));
    }
}

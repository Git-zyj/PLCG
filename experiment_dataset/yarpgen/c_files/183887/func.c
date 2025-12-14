/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183887
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3833221930661657393LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)18028))))) / (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_9), (var_9)))) || (var_2)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (signed char)4))));
        arr_2 [(unsigned char)7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)64)), (((var_1) << (((((/* implicit */int) (short)-86)) + (149)))))))) ? (((((/* implicit */int) (short)-1)) | (((/* implicit */int) (short)-1)))) : ((+(arr_0 [i_0] [i_0 - 1])))));
        var_14 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) (unsigned char)0)))), (max((arr_1 [5ULL] [5ULL]), (arr_1 [i_0] [i_0])))));
    }
    var_15 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + (var_9)));
    /* LoopSeq 3 */
    for (short i_1 = 4; i_1 < 22; i_1 += 4) /* same iter space */
    {
        arr_7 [18] [i_1] = ((/* implicit */int) (-(arr_3 [i_1 - 3])));
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_1 + 1])) - (((/* implicit */int) (unsigned char)26))));
    }
    for (short i_2 = 4; i_2 < 22; i_2 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) arr_6 [i_2]);
        arr_11 [i_2 - 2] = ((/* implicit */unsigned long long int) var_4);
    }
    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */signed char) var_3);
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) arr_5 [14LL])), (2535319690284618643ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (6583474874476150985LL) : (((/* implicit */long long int) arr_5 [i_3]))))))))));
        arr_16 [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3179777052U)) ? (((/* implicit */int) var_4)) : (arr_13 [i_3])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_13 [i_3]) : (((/* implicit */int) (short)9))))))));
    }
}

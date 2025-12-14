/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14858
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
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_7)))) ? ((-(((/* implicit */int) var_10)))) : ((-(((/* implicit */int) (short)(-32767 - 1)))))))) + (((((/* implicit */_Bool) 2355487546U)) ? (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned int) var_5)))) : (var_8)))));
    var_20 = ((/* implicit */unsigned short) var_14);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_2 [3] = ((((unsigned int) max((((/* implicit */unsigned int) (signed char)106)), (2355487546U)))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((var_14) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2]))))))));
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */unsigned short) ((18423560080788896386ULL) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) 2374890121156507868ULL))))))))));
        arr_4 [i_0 - 1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (signed char)-70)), (1939479750U)));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((unsigned short) var_2))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) min(((unsigned short)21632), (((/* implicit */unsigned short) (short)4227))))) >= (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)28057))))))) << (((max((((((/* implicit */long long int) var_8)) ^ (var_14))), (((/* implicit */long long int) (signed char)-85)))) + (86LL))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (~(((/* implicit */int) ((1939479739U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-2048)))))))))));
        arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-28062)))))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 23183992920655230ULL))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 7399780407723642331ULL)) ? (((/* implicit */int) (short)-6007)) : (((/* implicit */int) (_Bool)1))));
        var_25 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [(_Bool)1] [(short)5])) | (((int) var_6))));
    }
    var_26 = var_2;
}

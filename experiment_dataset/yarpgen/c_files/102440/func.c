/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102440
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
    var_15 -= ((/* implicit */_Bool) var_14);
    /* LoopSeq 4 */
    for (int i_0 = 4; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */unsigned long long int) min((var_8), (((/* implicit */int) arr_1 [i_0]))))), ((+(var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0]) && (((/* implicit */_Bool) ((8995101361953619251ULL) << (((/* implicit */int) arr_0 [i_0])))))))))));
        var_17 = ((/* implicit */unsigned int) min((var_17), ((+(max((((((/* implicit */_Bool) var_3)) ? (117440512U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned int) arr_1 [i_0 - 3]))))))));
        var_18 -= max(((~(((/* implicit */int) arr_0 [(unsigned char)4])))), (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_0 [(signed char)20])) : (((/* implicit */int) var_4)))));
    }
    for (int i_1 = 4; i_1 < 20; i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned char) arr_0 [(signed char)16]);
        arr_5 [i_1] = (+(((((/* implicit */_Bool) max((13584737135278953730ULL), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)2]))) : (arr_2 [i_1] [i_1]))));
    }
    for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) max((arr_6 [i_2]), (min((((/* implicit */unsigned char) arr_3 [i_2])), (arr_6 [i_2])))))), (var_11)));
        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) : (((((/* implicit */_Bool) 117440512U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) : (var_0))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_2] [i_2])) != (((unsigned long long int) var_13))))))));
        arr_9 [i_2] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-42)), (arr_6 [i_2]))))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_2 [i_2] [i_2])), (4862006938430597885ULL))) << ((((~(((/* implicit */int) arr_6 [i_2])))) + (289))))))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_3]))));
        var_21 = ((arr_12 [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3]))));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) (+(117440515U))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-59))) : (281406257233920LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_3])) > (((/* implicit */int) var_10)))))) : (arr_12 [i_3]))))));
        var_23 = ((/* implicit */unsigned short) arr_11 [i_3]);
    }
    var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64864)) ? (var_2) : (((/* implicit */unsigned long long int) var_12))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
}

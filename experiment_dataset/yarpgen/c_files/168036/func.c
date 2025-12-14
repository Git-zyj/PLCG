/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168036
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
    for (short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [7]))) & (min((((((/* implicit */_Bool) -6102752707861699182LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (2250700302057472LL))), (((/* implicit */long long int) arr_2 [i_0 + 1])))))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])), (((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) var_5))))))) ? (min((((/* implicit */int) arr_2 [i_0 + 1])), (((((/* implicit */int) (short)11064)) * (((/* implicit */int) arr_2 [(signed char)5])))))) : (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((var_3) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) arr_0 [(unsigned short)7])) : (((/* implicit */int) (_Bool)0))))))));
        var_20 = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1])))));
    }
    for (unsigned short i_1 = 2; i_1 < 12; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_1)) | (14208765334788577340ULL)))) ? (((arr_4 [i_1] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 2]))) : (arr_5 [0ULL]))) : (arr_5 [i_1 - 2])))) ? (((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1 - 1]))) : (((var_3) ? (arr_5 [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))))))) : ((~(((((/* implicit */_Bool) var_4)) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1])))))))));
        arr_7 [(signed char)0] = min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)32760)), (arr_5 [i_1])))) ? ((+(((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (short)21436)) : (((/* implicit */int) arr_4 [8U] [i_1])))))), (((/* implicit */int) var_12)));
        var_21 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)63)), (var_2)))), (arr_5 [i_1 - 2]))) % (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) | (arr_5 [i_1 - 1])))))) ? (((arr_4 [i_1] [i_1 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_11))) : ((~(max((arr_5 [i_1 - 2]), (((/* implicit */unsigned int) arr_4 [i_1 + 1] [i_1 + 1]))))))));
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((signed char) var_15))), ((+(((/* implicit */int) var_3))))))) ? (((max((13905570613306966204ULL), (((/* implicit */unsigned long long int) var_2)))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    var_23 ^= ((/* implicit */signed char) max((min((((/* implicit */unsigned short) var_16)), (min((((/* implicit */unsigned short) var_8)), ((unsigned short)61))))), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)32760)) ? (8070450532247928832ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))))) < (((/* implicit */unsigned long long int) var_17)))))));
    var_24 = ((/* implicit */long long int) (short)22971);
}

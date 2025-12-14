/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107583
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
    for (signed char i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        arr_2 [0ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)44042)) ? ((+(((/* implicit */int) (unsigned short)44042)))) : (((/* implicit */int) arr_0 [i_0] [0ULL])))))));
        var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)94))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)2)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-125)) > (((/* implicit */int) (signed char)125))))) : ((~(((/* implicit */int) arr_1 [i_0] [(signed char)4]))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775795LL)) ? (min((-5990327307894733017LL), (((/* implicit */long long int) arr_7 [i_2])))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)-113)) | (((/* implicit */int) (signed char)103)))))))) || (((/* implicit */_Bool) (-(-1161107652))))));
            arr_8 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -200322740)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (signed char)121))))) ? ((-(((/* implicit */int) (unsigned short)21490)))) : (((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_7 [2])) : (((/* implicit */int) arr_7 [i_2]))))))) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))))) : (max((((1989041966U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_2]))))), (((/* implicit */unsigned int) (unsigned short)44057))))));
            var_22 = ((/* implicit */int) max((var_22), ((+(((/* implicit */int) (unsigned short)65535))))));
            var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) arr_4 [14ULL]))))) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (unsigned short)65535)))) >> (((((/* implicit */int) ((unsigned char) arr_5 [i_2] [i_1]))) - (73)))));
        }
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)0)), (min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)124))) <= (5281883083402579707LL)))), (((((/* implicit */_Bool) 569334761634007813LL)) ? (((/* implicit */int) arr_6 [17U])) : (120673198))))))))));
        var_25 &= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_5 [i_1] [i_1]), (arr_7 [i_1])))))))));
        var_26 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_6 [i_1])) * (((/* implicit */int) arr_5 [i_1] [i_1])))), (((/* implicit */int) ((((/* implicit */unsigned int) 942622983)) <= (2591776485U))))));
    }
    var_27 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) -120673218))) & (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))))) ? (((/* implicit */int) min((max(((unsigned short)64923), ((unsigned short)18535))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 942622971)))))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)18538)), (3867889753884899657LL)))) ? (((/* implicit */int) (short)-1)) : (var_17)))));
}

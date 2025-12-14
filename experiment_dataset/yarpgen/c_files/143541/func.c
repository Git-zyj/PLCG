/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143541
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((3760284716147880040LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14960)))))) ? (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)50551)))) * (((/* implicit */int) max((((/* implicit */short) var_12)), (var_11)))))) : (((/* implicit */int) var_2))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (short)15496))))) - (((/* implicit */int) min((var_13), (((/* implicit */short) arr_0 [i_0])))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(arr_1 [i_0] [i_0]))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (signed char)7))))) : (((/* implicit */int) (unsigned char)46)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_8 [(signed char)15] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)14960)) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) arr_7 [i_1] [i_1])))) / (((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) (unsigned short)14955))))));
        var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((unsigned int) var_6)) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_6 [(unsigned char)16] [(unsigned char)16]))))))))));
        arr_9 [i_1] = ((/* implicit */short) (signed char)40);
    }
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */int) ((((_Bool) arr_13 [i_2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_2] [i_2])) : (((/* implicit */int) arr_1 [i_2] [(unsigned short)5])))))))) >= (((/* implicit */int) ((((/* implicit */int) (signed char)40)) <= (((/* implicit */int) arr_11 [i_2] [i_2])))))));
        arr_14 [(short)1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_12 [i_2]))) ? ((+(((/* implicit */int) arr_4 [i_2] [(short)10])))) : (((/* implicit */int) max(((signed char)49), (((/* implicit */signed char) arr_0 [i_2])))))))) - (max((1368001901U), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned short)50564)))))))));
    }
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_13))));
    var_18 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (unsigned short)65535)))) << (((((7279495598573607791LL) << (((((((/* implicit */int) var_10)) + (11))) - (1))))) - (7279495598573607790LL))))) >> (((((var_6) >> (((((/* implicit */int) var_13)) - (1034))))) >> (((((((/* implicit */int) (signed char)40)) | (((/* implicit */int) (short)-17848)))) + (17856)))))));
}

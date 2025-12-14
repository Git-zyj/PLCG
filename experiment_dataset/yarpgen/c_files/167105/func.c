/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167105
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
    var_12 = ((/* implicit */unsigned int) max(((+(max((var_3), (((/* implicit */int) var_0)))))), (((/* implicit */int) ((unsigned char) max((var_2), (var_9)))))));
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 24; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-35)) % (((/* implicit */int) (unsigned char)14))))))) ? (((/* implicit */int) min((min((arr_0 [(unsigned short)8]), (((/* implicit */unsigned short) (signed char)-11)))), (((/* implicit */unsigned short) arr_2 [(unsigned char)7] [i_0 - 3]))))) : (((/* implicit */int) ((arr_2 [i_0 + 1] [i_0 + 1]) && (arr_2 [(signed char)0] [1U])))))))));
        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_0 [9ULL]))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) ((signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)21] [(unsigned short)9]))) != (var_5))) ? ((~(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) min((-614451917), (((/* implicit */int) arr_3 [(signed char)19]))))))));
        var_17 = ((/* implicit */unsigned long long int) (_Bool)0);
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) min((arr_0 [(unsigned char)8]), (((/* implicit */unsigned short) (short)-18077))))) * (((/* implicit */int) ((((/* implicit */int) arr_2 [1ULL] [12ULL])) != (var_3)))))) + (((((/* implicit */_Bool) min((arr_0 [15LL]), (((/* implicit */unsigned short) arr_1 [(_Bool)1] [(_Bool)1]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_1]))))));
        var_18 = ((/* implicit */int) max((var_18), ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)63175))))));
    }
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (min((var_10), (((/* implicit */int) var_0)))) : (min((var_10), (((/* implicit */int) var_9))))))) ? (((((var_2) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))) & (((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (var_7)))))) : (((((/* implicit */_Bool) var_11)) ? (((int) (_Bool)1)) : (var_10)))));
}

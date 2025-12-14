/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173238
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_10)))) : (var_4)))), (var_8))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_8)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [(signed char)1]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (var_9))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0])) : (((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0])) - (5225)))))))));
        var_14 = arr_1 [i_0];
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = min((13657838348912642233ULL), (((/* implicit */unsigned long long int) arr_0 [i_1])));
        var_15 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1]))))));
        var_16 = arr_4 [i_1] [i_1];
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (4788905724796909404ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) * (420054006U))))))))));
        arr_7 [(unsigned char)16] [i_1] = ((/* implicit */signed char) ((arr_5 [i_1] [i_1]) + (((((/* implicit */_Bool) (unsigned short)50177)) ? (((/* implicit */int) (signed char)59)) : (arr_5 [i_1] [i_1])))));
    }
    for (signed char i_2 = 1; i_2 < 24; i_2 += 4) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_9 [i_2]) : (arr_9 [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [i_2]))))) : (((((/* implicit */_Bool) arr_8 [i_2])) ? (((((/* implicit */_Bool) (unsigned char)245)) ? (4788905724796909373ULL) : (arr_9 [i_2]))) : (((/* implicit */unsigned long long int) var_9))))));
        var_19 -= ((/* implicit */unsigned long long int) arr_8 [18ULL]);
        var_20 = ((/* implicit */unsigned long long int) (!(var_5)));
    }
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((4788905724796909379ULL), (((/* implicit */unsigned long long int) (short)32767))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_7)))))))));
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)0)) <= (((/* implicit */int) (short)32766)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))))));
}

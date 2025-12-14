/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137615
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
    var_10 = ((/* implicit */short) var_8);
    var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63163))) : (4090089010U)))) ? (((/* implicit */int) max((var_2), (var_2)))) : (((int) var_1)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned char) var_6));
        var_12 *= ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [(unsigned short)2]))));
        var_13 = ((/* implicit */unsigned char) (+(((arr_1 [i_0] [i_0]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0] [15]))))));
    }
    for (short i_1 = 1; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) ((var_1) ? (max((((/* implicit */long long int) (signed char)-4)), (6342225660186365954LL))) : ((((_Bool)1) ? (-1731796916803997780LL) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-12513)))))))));
        var_15 -= ((/* implicit */unsigned int) var_2);
        arr_7 [i_1] = ((/* implicit */_Bool) max((min((max((((/* implicit */unsigned short) var_9)), (var_3))), (((/* implicit */unsigned short) var_6)))), (arr_0 [(_Bool)0] [i_1])));
    }
    for (short i_2 = 1; i_2 < 22; i_2 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) arr_1 [i_2 - 1] [i_2 + 1]))));
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_2] [i_2])) : (((/* implicit */int) arr_5 [i_2])))), (((/* implicit */int) min((var_9), (arr_1 [i_2] [i_2]))))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_2 - 1])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) min((min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)202))), (min((arr_4 [i_2 + 1]), (((/* implicit */unsigned char) arr_1 [(_Bool)1] [i_2 - 1])))))))));
    }
}

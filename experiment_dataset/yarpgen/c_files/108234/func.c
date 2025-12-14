/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108234
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) arr_0 [(unsigned char)4]);
        var_15 = ((/* implicit */long long int) (-(max((min((9338693421781508725ULL), (((/* implicit */unsigned long long int) -708702711)))), (((/* implicit */unsigned long long int) ((_Bool) -7281618273397788898LL)))))));
    }
    var_16 = ((/* implicit */unsigned char) (-(var_13)));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)33569)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(-1)))), (min((15014057429193855570ULL), (4631270127091983369ULL))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_1 = 2; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_18 = (_Bool)1;
        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
    }
    for (short i_2 = 2; i_2 < 17; i_2 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) ((arr_4 [i_2 + 2]) != (min((arr_4 [i_2 + 2]), (((/* implicit */int) arr_5 [i_2]))))));
        arr_7 [i_2] = ((/* implicit */int) ((((((11063325926589224385ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17504))))) + (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))) : (var_2)))))) & (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_5 [i_2 + 2])), ((+(-1211447997))))))));
    }
    for (unsigned short i_3 = 3; i_3 < 22; i_3 += 3) 
    {
        arr_10 [i_3] = ((/* implicit */long long int) min((((((/* implicit */int) (short)-10)) & (((/* implicit */int) arr_8 [i_3 - 2])))), (((/* implicit */int) min((arr_9 [i_3 + 1]), (((/* implicit */unsigned char) (_Bool)1)))))));
        var_21 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_9 [i_3])))) <= (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-99)), ((unsigned short)42307))))));
        arr_11 [i_3] = ((/* implicit */unsigned char) min((((/* implicit */short) ((((/* implicit */unsigned long long int) max((-2057909592), (((/* implicit */int) (unsigned char)15))))) >= (min((9799636789764862158ULL), (((/* implicit */unsigned long long int) 1498465138U))))))), (var_0)));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173203
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
    var_14 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_9)), (min((((/* implicit */long long int) (signed char)45)), (var_3))))) < (((/* implicit */long long int) (-(1424580825))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) ((signed char) (unsigned short)43233))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 1073741823U)))) >= (arr_0 [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3221225471U)) ? (((/* implicit */int) (unsigned short)43233)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-46)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_11)))) : (3221225471U)));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_16 = ((/* implicit */signed char) max((((unsigned long long int) arr_1 [i_0] [i_0])), (((/* implicit */unsigned long long int) ((long long int) max((arr_6 [i_0] [i_1]), (((/* implicit */int) arr_1 [i_0] [i_1]))))))));
            var_17 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -1021513796)) ? (1073741825U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))))));
            arr_7 [i_1] [i_1] = ((/* implicit */signed char) (((+(((/* implicit */int) ((signed char) 753693655))))) | (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) != (var_8))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            arr_11 [i_0] [i_0] [i_0] = (+((+(((8993856674752195281ULL) - (((/* implicit */unsigned long long int) 753693655)))))));
            arr_12 [i_2] = ((/* implicit */signed char) ((short) ((unsigned char) ((((/* implicit */int) (unsigned short)48449)) >> (((((/* implicit */int) (short)-21028)) + (21043)))))));
        }
    }
    for (unsigned char i_3 = 2; i_3 < 18; i_3 += 1) 
    {
        arr_16 [(unsigned char)14] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (1073741827U))) * ((-(3221225468U)))));
        arr_17 [i_3 - 2] = ((/* implicit */signed char) ((((int) 1021513795)) != (((/* implicit */int) ((signed char) arr_8 [i_3 - 1])))));
        var_18 = ((/* implicit */_Bool) 1026481109U);
        var_19 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) ((((arr_6 [i_3] [22ULL]) + (2147483647))) << (((((/* implicit */int) arr_5 [(unsigned short)24])) - (191)))))), ((+(1073610752U))))), (3221225473U)));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160929
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (1265290530)))) ? ((+(-1265290554))) : (((((/* implicit */_Bool) -1265290553)) ? (-1265290572) : (801320916))))) | ((~(((/* implicit */int) (unsigned char)255))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((short) 8521215115264ULL));
            arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_13))) ? (max((arr_0 [(_Bool)1]), (arr_4 [i_0] [i_0] [(short)12]))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_4 [i_0] [i_1] [i_1]) : (6137624824803832851ULL)))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_5 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1982229595U))))))));
            var_21 = ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 801320916)) ? (((/* implicit */int) (unsigned short)41137)) : (((/* implicit */int) arr_2 [i_1])))))));
        }
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (max((((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) && (((/* implicit */_Bool) arr_2 [i_0])))))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 12; i_2 += 2) 
    {
        arr_11 [i_2] = (!((!(((/* implicit */_Bool) arr_7 [i_2] [i_2 - 1])))));
        var_23 = ((/* implicit */unsigned short) (+(((unsigned long long int) arr_7 [i_2] [i_2]))));
        arr_12 [i_2 + 1] = ((/* implicit */unsigned short) arr_8 [i_2 + 1]);
    }
    var_24 = (unsigned char)138;
}

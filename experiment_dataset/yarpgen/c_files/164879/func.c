/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164879
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
    var_10 = ((/* implicit */int) var_1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) (+(arr_1 [i_0])));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) % ((+(arr_1 [5])))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((short) arr_2 [i_0]));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        var_13 = min((((/* implicit */int) ((short) arr_4 [i_1] [i_1]))), (min((1725945284), (((/* implicit */int) (unsigned short)5533)))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) 7839936292627962090ULL))));
    }
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_4 [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2])))))))) : (min((((((/* implicit */_Bool) (unsigned short)1424)) ? (((/* implicit */unsigned long long int) arr_7 [i_2])) : (4929116585205930653ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17769901675911267443ULL)) ? (arr_4 [i_2] [i_2]) : (1725945282))))))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (+(((676842397798284172ULL) / (11650081214097503656ULL))))))));
    }
    var_17 = (~(((/* implicit */int) var_0)));
    var_18 -= ((/* implicit */short) (+(((((/* implicit */int) ((short) var_5))) * (((/* implicit */int) ((var_3) > (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5519))) * (((((/* implicit */unsigned long long int) var_3)) + (min((((/* implicit */unsigned long long int) var_7)), (676842397798284172ULL))))))))));
}

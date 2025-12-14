/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143474
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
    var_17 += ((/* implicit */long long int) var_5);
    var_18 = ((/* implicit */int) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-751)) > (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20847))))) < (((/* implicit */long long int) (+(arr_1 [i_0] [i_0])))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [(signed char)7]);
        arr_5 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) -3242503957229992978LL)) || (((/* implicit */_Bool) -929883186509602389LL)))))));
        var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_2 [i_0])))) && (((/* implicit */_Bool) arr_2 [i_0 + 3]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) arr_2 [i_1])), (min((var_10), (arr_6 [i_1] [2LL]))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)31))))) ? (((/* implicit */unsigned long long int) -929883186509602389LL)) : (((((/* implicit */_Bool) var_1)) ? (arr_7 [i_1]) : (arr_6 [(signed char)7] [i_1])))))));
        arr_9 [0U] [4LL] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1])) : (13672913383097624470ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 504403158265495552ULL)))))) : (arr_1 [i_1] [i_1])))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5408455476941531451ULL)) || (((/* implicit */_Bool) arr_1 [i_1] [(short)2]))))), (min((var_15), (((/* implicit */unsigned long long int) (signed char)-18))))))));
    }
}

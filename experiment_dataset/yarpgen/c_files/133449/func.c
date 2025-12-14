/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133449
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
    var_11 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_3)), ((unsigned char)99)))) && (((/* implicit */_Bool) ((short) var_8)))))), (((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)185))))) : ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_8)))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)41425)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) - (var_8)))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((short) min((var_0), (((/* implicit */long long int) -494031863)))))), ((~(((/* implicit */int) (_Bool)1))))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) var_3);
        arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned int) var_3))), (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_1)))))) ? (((/* implicit */int) min(((unsigned char)98), ((unsigned char)98)))) : (min((((arr_1 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_10)))), (((int) (_Bool)1))))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
    {
        var_13 *= ((/* implicit */unsigned long long int) var_2);
        var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min(((~(var_4))), (((/* implicit */long long int) -32116156))))), (min((((unsigned long long int) arr_8 [i_1] [i_1])), (min((arr_8 [i_1] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)53274))))))));
        var_15 = ((/* implicit */signed char) (((~(arr_8 [i_1] [i_1]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1))))));
    }
    for (int i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
    {
        arr_12 [i_2] [i_2] &= ((/* implicit */unsigned char) var_3);
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_7))))) ? (arr_9 [i_2]) : (arr_8 [i_2] [i_2]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (((((-(6243621800224843549LL))) < (((long long int) (unsigned char)138)))) ? ((-(((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) ((((/* implicit */long long int) ((arr_10 [i_2] [i_2]) / (arr_10 [i_2] [i_2])))) <= (-1489047523282348330LL)))))))));
        arr_14 [i_2] [i_2] &= ((/* implicit */short) max((((/* implicit */int) ((unsigned char) arr_7 [i_2] [i_2]))), (((int) arr_7 [i_2] [i_2]))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */int) (!(arr_11 [i_2])))) > (((/* implicit */int) max(((unsigned char)85), (((/* implicit */unsigned char) (_Bool)0)))))));
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)95)) >= (((/* implicit */int) (short)3496))));
}

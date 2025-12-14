/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152180
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
    var_19 = ((/* implicit */unsigned short) var_2);
    var_20 = ((/* implicit */unsigned short) (((+((+(var_17))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_3)), ((short)12577))))) == ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32077))) : (9054365622212833436ULL)))))))));
    var_21 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) ^ ((+(-8237617218845304614LL)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) ((long long int) ((short) (short)-31071)));
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
        var_24 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_4)) < (((/* implicit */int) var_11)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_0] [i_0 - 1]))));
        arr_4 [i_0 - 1] = ((/* implicit */int) (((-(((/* implicit */int) (unsigned short)27247)))) > (((/* implicit */int) ((var_14) > (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) /* same iter space */
    {
        var_25 &= min((((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) & (max((var_12), (((/* implicit */long long int) arr_0 [i_1])))))), (min(((+(var_10))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            arr_10 [i_1] = ((/* implicit */short) var_0);
            arr_11 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_5 [i_1]), (arr_5 [i_1])))) ? (max((var_8), (var_12))) : (min((var_6), (((/* implicit */long long int) arr_5 [i_1]))))));
            arr_12 [i_1] [i_2] [i_2] = ((/* implicit */int) ((((((562812514467840LL) / (((/* implicit */long long int) (~(((/* implicit */int) (short)29313))))))) + (9223372036854775807LL))) >> (((min((min((var_7), (((/* implicit */long long int) (short)-16400)))), (((/* implicit */long long int) ((-319684830) | (((/* implicit */int) var_13))))))) + (8321895244553956556LL)))));
        }
    }
}

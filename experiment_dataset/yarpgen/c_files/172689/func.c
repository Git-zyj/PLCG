/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172689
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
    var_10 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min(((unsigned short)10), (((/* implicit */unsigned short) (_Bool)0))))) : (min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */int) var_0)))))));
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))) - (min((var_8), (((/* implicit */unsigned long long int) var_1)))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_12 += ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) >> (((((/* implicit */int) arr_0 [i_0])) - (21424)))))) ? (((((/* implicit */_Bool) (unsigned short)10)) ? (1014119717) : (((/* implicit */int) (unsigned short)10)))) : (((/* implicit */int) var_1))))), ((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_8)))))));
        arr_2 [i_0] = ((/* implicit */signed char) (~(-5837092781203772886LL)));
    }
    for (short i_1 = 3; i_1 < 22; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            arr_9 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_3)))))) * (((unsigned int) var_1)))));
            arr_10 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 2])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_0)), ((unsigned short)65511)))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9)))) : (((long long int) (short)19839)))) : (((/* implicit */long long int) var_2))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_13 = ((/* implicit */signed char) (~(((/* implicit */int) arr_13 [i_3] [i_3] [i_3]))));
            var_14 -= ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_2));
            arr_15 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_7)) : (arr_4 [i_1 - 1])));
            arr_16 [i_1] [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_5))) ? (5837092781203772886LL) : (((/* implicit */long long int) ((/* implicit */int) (short)12373)))));
            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (+(((/* implicit */int) var_6)))))));
        }
        var_16 -= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [(short)22])) && (((/* implicit */_Bool) var_1)))))) : (var_2)))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        arr_20 [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
        var_17 = ((/* implicit */unsigned char) ((unsigned int) (_Bool)0));
    }
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_0))));
}

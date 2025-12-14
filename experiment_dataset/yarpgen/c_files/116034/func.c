/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116034
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
    var_14 = ((((/* implicit */_Bool) 16680499940189052962ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((((/* implicit */_Bool) 1766244133520498676ULL)) && (((/* implicit */_Bool) (signed char)103))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) var_9)) > (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (3615868482U)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -126878243))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((signed char) var_5))) ? (262112) : (((((/* implicit */_Bool) -1454721852)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1))))))));
        var_15 ^= ((/* implicit */signed char) ((5049861525754479020ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17138)))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (signed char)0))));
    }
    for (long long int i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_6 [i_1]))));
            var_18 = min(((+(((((/* implicit */_Bool) -1277774988)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))) : (3622941142U))))), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_2] [i_1]))) : (arr_5 [i_2]))))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 2; i_3 < 9; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    {
                        var_19 = ((/* implicit */short) 3054529307U);
                        arr_17 [i_4] = arr_16 [i_1 + 1] [i_2] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_2];
                    }
                } 
            } 
        }
        var_20 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))), (arr_12 [i_1 + 1])))));
        var_21 = ((/* implicit */_Bool) min((min((min((arr_5 [i_1]), (arr_5 [i_1]))), (((/* implicit */unsigned long long int) arr_6 [i_1 + 2])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1554480427)) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 1])))))) && (((/* implicit */_Bool) (~(1099511627520LL)))))))));
        arr_18 [i_1] = var_13;
    }
}

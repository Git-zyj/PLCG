/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15532
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_2))));
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_3))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) var_3);
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((~(arr_1 [i_0]))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (823696279U)))), ((+(arr_1 [i_0])))))));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 23; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                {
                    arr_11 [i_1] [i_2] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_0))))), (min((var_4), (((/* implicit */int) var_13))))))), (min((arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8)))))))));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_2 - 1] [i_3])) ? (arr_1 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3])))))))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (unsigned short i_5 = 1; i_5 < 23; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    {
                        arr_20 [i_1] [i_1] [i_6] = ((/* implicit */unsigned long long int) var_12);
                        arr_21 [i_1] [i_1] [i_5 + 1] [i_6] = ((/* implicit */short) ((unsigned int) arr_17 [i_1] [i_4] [i_5 + 1] [i_1]));
                        var_20 = ((/* implicit */_Bool) min((arr_3 [i_5 + 1]), (((/* implicit */long long int) (_Bool)0))));
                        var_21 = ((/* implicit */short) var_10);
                    }
                } 
            } 
        } 
    }
    for (signed char i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
    {
        arr_24 [i_7] = ((/* implicit */short) arr_6 [i_7]);
        var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (unsigned char)161)) % ((+(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_17 [3U] [3U] [i_7] [i_7]))));
    }
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_0)))) / ((-(((/* implicit */int) (_Bool)1))))))) : (var_14)));
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((max((var_2), (var_13))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (signed char)68)) ? (1006632960U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
}

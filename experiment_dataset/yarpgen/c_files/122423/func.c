/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122423
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
    var_10 |= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_9)) : ((-(var_0))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */int) var_3)))))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_11 += ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_2 [i_0 + 1] [i_0 + 1]) : (arr_2 [i_0 + 1] [i_0 + 1]))) < (((((/* implicit */_Bool) ((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) var_9)) ? (arr_2 [i_0] [i_0]) : (var_1)))))));
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) (+(var_0)))) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) | (((/* implicit */int) arr_0 [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_13 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)94)) ? (-185519878) : (((/* implicit */int) (short)-30084))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_4 [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))))));
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) arr_1 [i_0]))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 4) 
    {
        arr_10 [i_3] [i_3] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_0 [i_3 + 1])) ? (((var_1) | (((/* implicit */unsigned long long int) var_9)))) : (((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
        arr_11 [i_3] = ((/* implicit */long long int) arr_1 [i_3]);
        var_15 *= ((/* implicit */unsigned long long int) (((+((+(var_0))))) ^ (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) - ((-(((/* implicit */int) var_3)))))))));
    }
    for (short i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [i_4]))));
        arr_15 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_1) + (((/* implicit */unsigned long long int) (~(arr_12 [i_4]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_4] [i_4]))) ? ((+(((/* implicit */int) arr_5 [i_4] [i_4] [i_4] [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
        var_16 = ((/* implicit */short) ((var_9) ^ (((/* implicit */int) arr_6 [i_4]))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) min(((-(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))))))));
    }
    for (short i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (short i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (-((~(arr_16 [i_6] [i_6]))))))));
                        var_19 -= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_17 [i_7])) ? (arr_17 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (min((((/* implicit */long long int) arr_20 [i_8] [i_6] [i_6] [i_5])), (arr_17 [i_5])))));
                    }
                } 
            } 
        } 
        arr_24 [i_5] [i_5] = ((/* implicit */long long int) arr_19 [i_5] [i_5]);
    }
    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_5)), (min((((/* implicit */unsigned long long int) var_5)), ((+(var_6)))))));
    var_21 &= (+((+(max((var_6), (((/* implicit */unsigned long long int) var_3)))))));
    var_22 += ((/* implicit */unsigned long long int) ((signed char) var_9));
}

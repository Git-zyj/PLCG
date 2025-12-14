/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147369
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
    for (int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (arr_3 [i_0])))), (max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [(_Bool)1])))))))));
            var_12 = ((/* implicit */int) min((((((/* implicit */_Bool) 2576670934077600087ULL)) && (((/* implicit */_Bool) 14U)))), (min(((!(((/* implicit */_Bool) (signed char)85)))), (((var_10) == (((/* implicit */int) arr_1 [i_0]))))))));
        }
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (arr_3 [i_0]))))));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) (_Bool)1))))), (var_1)))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (signed char i_3 = 2; i_3 < 14; i_3 += 1) 
            {
                for (long long int i_4 = 3; i_4 < 15; i_4 += 4) 
                {
                    {
                        arr_14 [i_3] [i_2] = ((/* implicit */unsigned int) var_6);
                        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2794978571U)) ? (((/* implicit */unsigned long long int) 7014447221850811635LL)) : (2147483640ULL)));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned int) arr_3 [i_0]);
    }
    for (long long int i_5 = 3; i_5 < 19; i_5 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))))))));
        arr_17 [i_5] = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((((/* implicit */int) var_4)), (arr_16 [i_5] [i_5])))) && (((/* implicit */_Bool) ((arr_15 [i_5]) ? (2794978551U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5 - 3])))))))), ((((-(var_0))) >= (max((((/* implicit */unsigned int) arr_15 [i_5])), (var_0)))))));
        var_16 = ((/* implicit */int) max((var_8), (((/* implicit */unsigned char) ((((/* implicit */long long int) 1499988725U)) == (9223372036854775807LL))))));
        /* LoopNest 2 */
        for (short i_6 = 2; i_6 < 18; i_6 += 3) 
        {
            for (unsigned int i_7 = 1; i_7 < 19; i_7 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) var_11);
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 4; i_8 < 18; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            {
                                arr_28 [i_6] [i_6] [i_6] [i_6] [i_9] [i_6] = ((/* implicit */int) ((short) arr_24 [i_9] [i_6] [i_8] [11ULL] [i_6] [11ULL]));
                                arr_29 [i_5] [i_6] [i_7 - 1] [i_5] [i_5] [i_9] [i_6] = (i_6 % 2 == zero) ? (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_5] [i_5 - 3] [i_6] [i_5] [i_8] [i_9]))))))) >> (((min(((-(2794978562U))), (((/* implicit */unsigned int) arr_18 [i_6])))) - (802U)))))) : (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_5] [i_5 - 3] [i_6] [i_5] [i_8] [i_9]))))))) >> (((((min(((-(2794978562U))), (((/* implicit */unsigned int) arr_18 [i_6])))) - (802U))) - (1499987904U))))));
                                arr_30 [i_5] [i_5] [i_6] [i_5] [i_5] = ((/* implicit */int) arr_25 [i_5] [i_5] [i_7]);
                                arr_31 [(_Bool)1] [i_6] [i_7] [i_6] [i_9] [i_6] [i_8] = ((/* implicit */_Bool) max(((+((+(1732391280U))))), (((/* implicit */unsigned int) (+(max((var_9), (((/* implicit */int) arr_23 [i_5] [i_6] [i_6])))))))));
                            }
                        } 
                    } 
                    arr_32 [i_6] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? (((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_0)))) ? (((long long int) 4270152594U)) : (((9LL) >> (((9223372036854775807LL) - (9223372036854775746LL))))))))));
                }
            } 
        } 
    }
    var_18 *= ((/* implicit */_Bool) var_11);
    var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((var_10), (((/* implicit */int) var_5)))), ((~(var_9)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 2794978565U)) ? (((/* implicit */int) var_6)) : (var_3))) : (max((((/* implicit */int) var_4)), (var_3)))))) : (var_7)));
}

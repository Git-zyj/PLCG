/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119115
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 180572053U)))))));
        arr_3 [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((arr_2 [i_0]) && (((/* implicit */_Bool) arr_1 [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) var_15))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) var_11);
                            var_18 -= ((/* implicit */short) arr_14 [i_0] [i_1] [i_2] [i_3] [i_2]);
                            var_19 = 2737492758U;
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                for (int i_6 = 2; i_6 < 9; i_6 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_21 [i_7] [i_0] [i_5] [i_5] [i_6 - 1])) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))));
                            var_21 = ((((/* implicit */_Bool) arr_18 [i_6 + 2] [i_6 + 2] [i_6 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-113))) : (-625966776237441331LL));
                            var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 180572053U)) ? (2737492752U) : (2737492752U)));
                        }
                        var_23 = ((/* implicit */short) 2103230086U);
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_22 [i_1] [i_5] [2U])))) ? (((arr_8 [i_0] [i_1] [i_5]) / (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                    }
                } 
            } 
        }
        for (signed char i_8 = 2; i_8 < 10; i_8 += 4) 
        {
            arr_25 [i_0] [i_8] = ((/* implicit */short) ((max((arr_8 [i_0] [i_8] [i_8 - 2]), (arr_8 [i_0] [i_0] [i_8 - 2]))) != (((/* implicit */long long int) ((/* implicit */int) max((var_13), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)63)))))))))));
            var_25 += ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)-5165)) : (((/* implicit */int) (_Bool)1))));
        }
        var_26 = 1557474538U;
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
    {
        var_27 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : ((+(180572065U)))));
        var_28 += ((/* implicit */unsigned long long int) var_3);
    }
    var_29 = ((/* implicit */unsigned char) min((var_8), (((/* implicit */short) var_2))));
    var_30 = ((/* implicit */unsigned int) 72057319160020992LL);
    var_31 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_4)))) << ((+(((/* implicit */int) var_5))))));
    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1980977703392922881ULL)) ? (((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_11))))) * (var_7))) : (((unsigned int) (~(((/* implicit */int) var_12)))))));
}

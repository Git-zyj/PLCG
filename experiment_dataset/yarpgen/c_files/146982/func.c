/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146982
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
    var_19 = ((/* implicit */_Bool) ((35182224605184LL) + (((/* implicit */long long int) 2450403173U))));
    var_20 = ((/* implicit */unsigned int) (!(((max((-35182224605185LL), (-35182224605185LL))) <= (((/* implicit */long long int) (-(((/* implicit */int) var_17)))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) var_16);
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_7)), (-35182224605182LL)))))) ? ((+(7609974965373705662LL))) : (((((/* implicit */_Bool) 35182224605170LL)) ? (((/* implicit */long long int) 1127089425)) : (-1LL)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) -7609974965373705637LL);
                                var_24 = ((/* implicit */long long int) (short)0);
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_16))) + (var_14)));
                            }
                        } 
                    } 
                    arr_14 [i_1] = ((((/* implicit */_Bool) ((7609974965373705659LL) | (-6359471593154552455LL)))) ? (var_12) : (((/* implicit */long long int) ((unsigned int) var_18))));
                }
            } 
        } 
        var_25 -= ((/* implicit */signed char) ((9LL) > (2421367384395159651LL)));
    }
    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
    {
        var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (min((arr_4 [i_5] [3ULL] [i_5]), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((int) var_18)))));
        var_27 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_15 [i_5] [i_5])) * (((/* implicit */int) var_1))))));
        arr_18 [i_5] = ((/* implicit */_Bool) (((((~(arr_16 [i_5] [i_5]))) != (((/* implicit */int) var_18)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(576460752303423480LL)))) && (((/* implicit */_Bool) 35182224605184LL))))) : (((((/* implicit */_Bool) max((0LL), (((/* implicit */long long int) var_4))))) ? ((+(((/* implicit */int) arr_0 [i_5])))) : (((/* implicit */int) (signed char)-62))))));
        var_28 -= ((/* implicit */unsigned long long int) var_6);
        var_29 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_15 [i_5] [i_5])), (13462097639956899179ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [(short)1]))) : (((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_5] [i_5])) ? (-7609974965373705646LL) : (arr_9 [i_5] [i_5] [i_5] [i_5])))));
    }
    for (signed char i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            var_30 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) > (var_9)))), (-35182224605204LL)));
            var_31 -= ((/* implicit */unsigned int) var_16);
        }
        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) arr_19 [i_6] [i_6]))));
    }
    var_33 = ((/* implicit */signed char) max((((int) var_6)), (((/* implicit */int) var_1))));
}

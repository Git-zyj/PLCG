/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181379
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
    var_16 = ((/* implicit */unsigned int) (short)32767);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [9U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((13105414403020577909ULL) & (13105414403020577910ULL))) & (((((/* implicit */_Bool) 163556064U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 3035144409U))))))) ? (((unsigned int) 0U)) : (((((/* implicit */_Bool) arr_7 [i_0])) ? (max((((/* implicit */unsigned int) var_6)), (var_2))) : (((var_11) << (((var_2) - (1597456410U)))))))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), ((~(max((5341329670688973706ULL), (max((((/* implicit */unsigned long long int) arr_1 [i_1])), (13105414403020577909ULL)))))))));
                    var_18 = ((/* implicit */_Bool) min((((((/* implicit */int) ((unsigned short) arr_2 [i_1]))) - (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) (short)-25261))))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)25249))) <= (((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_2 [1U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_0]))))))))));
                    var_19 = ((/* implicit */unsigned long long int) (-(min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_2])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (+(min((((((/* implicit */_Bool) arr_4 [i_3] [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_3])))), ((+(-1776758399)))))));
                arr_15 [i_3] = 0U;
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_5] [i_5] [i_5])) ? (arr_22 [i_3] [i_3] [i_5]) : (arr_22 [i_5] [i_6] [i_5])))) ? (((((/* implicit */_Bool) arr_22 [i_3] [i_4] [i_5])) ? (arr_22 [i_3] [3U] [i_5]) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) 18278652438919233221ULL)) ? (arr_22 [i_3] [i_4] [i_5]) : (arr_22 [i_3] [i_3] [i_5])))));
                                arr_23 [i_5] [i_3] &= ((((/* implicit */_Bool) (-(min((arr_13 [5U]), (((/* implicit */unsigned int) var_1))))))) ? ((((!(((/* implicit */_Bool) var_5)))) ? (536866816U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_3])))))))) : (arr_14 [i_4]));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2080374784U)) ? (var_7) : (((/* implicit */unsigned long long int) arr_22 [i_3] [i_4] [i_3]))))) ? (arr_2 [i_3]) : (((/* implicit */unsigned int) arr_4 [i_3] [i_3])))) != (((((/* implicit */_Bool) 7777200245142494612ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((5341329670688973706ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (4294967295U))))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2123679897U)), (var_7)))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (13105414403020577909ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_9))))) ? (((7U) >> (((arr_13 [1U]) - (1444047104U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 14902304985233461463ULL)) ? (((/* implicit */int) arr_16 [i_3] [i_5] [(short)6])) : (arr_4 [i_5] [i_5]))))))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13646))) : (1ULL)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_8 = 2; i_8 < 9; i_8 += 3) 
                {
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_21 [i_8] [i_8 + 1] [i_8])) ? (((/* implicit */int) arr_12 [i_8 + 1] [i_8 + 2] [i_8 + 2])) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 5341329670688973705ULL))))) == (((/* implicit */int) arr_28 [i_8 + 2] [i_8 + 2] [i_8] [(_Bool)1])))))));
                            var_25 = ((/* implicit */_Bool) max((arr_14 [i_3]), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)38466)))))));
                            arr_30 [i_3] [i_8] [i_8] = ((/* implicit */short) ((1ULL) & (((/* implicit */unsigned long long int) 4294967295U))));
                        }
                    } 
                } 
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125124
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
    var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(1019921136)))) ? (4634096697404014569ULL) : (((/* implicit */unsigned long long int) var_13))));
    var_15 &= ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)2)) ? (var_13) : (((/* implicit */int) var_1))))) : (max((0ULL), (((/* implicit */unsigned long long int) (short)32767)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) max((((375515993348271710ULL) ^ (((/* implicit */unsigned long long int) arr_5 [i_1 + 2])))), (((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [i_0] [i_1 - 1]))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_7 [i_0 - 1] [(short)8] [i_1] [i_1 - 1])))) ? (((/* implicit */int) ((7LL) > (26LL)))) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_2]))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */int) min((((/* implicit */unsigned short) (short)18554)), ((unsigned short)3)))) / (((((/* implicit */int) (short)-18555)) + (((/* implicit */int) (signed char)121))))))));
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                            {
                                var_16 += ((/* implicit */unsigned short) min(((short)-18564), ((short)(-32767 - 1))));
                                arr_17 [i_0] [i_4] [i_3] [8U] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) 5968718023486846450LL);
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
                            {
                                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (((-(((/* implicit */int) arr_0 [i_0 - 2])))) >= (1019921143))))));
                                var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) (unsigned short)47209)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_9 [i_5] [i_2] [i_1] [8ULL]))))));
                                var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_0 + 1] [i_2] [i_2] [i_2])) ? (-1917178529) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)49284)) == (((/* implicit */int) (signed char)-62)))))));
                            }
                            for (int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
                            {
                                var_20 -= ((/* implicit */unsigned short) min((18071228080361279899ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))));
                                arr_23 [i_0] [i_0 + 1] [i_0] [i_3] [3] = ((/* implicit */long long int) ((((18071228080361279906ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))) ? (((/* implicit */int) ((((((/* implicit */int) (unsigned char)122)) + (((/* implicit */int) (short)2591)))) >= ((-(-134217728)))))) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_0 - 1]))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22114)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_5))))))), ((+(var_7))))))));
}

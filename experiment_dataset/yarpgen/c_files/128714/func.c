/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128714
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
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((unsigned long long int) (short)24042)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                arr_7 [i_1] = ((/* implicit */short) (((~(var_11))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((((/* implicit */unsigned int) var_7)), (var_1))))))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
                {
                    arr_11 [i_0] [1U] [i_2] = ((/* implicit */short) var_3);
                    arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) (short)24040));
                }
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
                {
                    arr_15 [i_3] [i_3] [i_3] [8U] = (~(((1559313865U) - ((-(4294967284U))))));
                    arr_16 [i_3] = ((((/* implicit */_Bool) (short)19222)) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_0] [i_1] [9ULL] [i_3]))) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [(short)4]))))) : ((~(246345259U))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_4 = 1; i_4 < 13; i_4 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (2112914794U) : (12U)));
                        var_14 = 16066611493960359282ULL;
                        arr_21 [i_3] [i_4] [i_3] [i_1] [i_3] = ((/* implicit */unsigned long long int) (((+(5765453410593989110ULL))) == (((unsigned long long int) arr_17 [i_3]))));
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 3; i_6 < 12; i_6 += 3) 
                        {
                            var_15 = ((/* implicit */short) ((unsigned long long int) 28U));
                            var_16 *= var_3;
                            arr_26 [i_3] [i_5] [i_3] [i_3] [i_3] [i_1] [i_3] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_18 [i_5 - 1] [i_6] [i_6] [i_5 - 1])) && (((/* implicit */_Bool) var_3))))));
                        }
                        arr_27 [i_0] [i_1] [i_3] [i_3] [i_5] = ((((unsigned int) var_5)) - (min((((/* implicit */unsigned int) var_0)), (0U))));
                        arr_28 [i_3] [i_1] [i_3] [i_5] = 17580912223770364601ULL;
                    }
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_1))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    var_18 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0] [i_1] [i_1]))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((2147483647U) <= (arr_19 [(short)7] [i_1] [i_7])))))));
                    arr_32 [i_1] = ((/* implicit */short) ((unsigned long long int) arr_29 [i_0] [i_0] [i_1] [i_7]));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10U)) && (((/* implicit */_Bool) max(((short)510), ((short)-509))))));
                    arr_33 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))) / (((unsigned int) var_7)))))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_2);
}

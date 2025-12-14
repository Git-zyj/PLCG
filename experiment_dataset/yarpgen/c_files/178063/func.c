/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178063
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_1] [i_2] [i_3 + 1] = (((+(18446744073709551615ULL))) == (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_0] [i_0] [i_3 - 1])), (arr_8 [i_0] [i_1] [i_1] [i_3 + 1])))));
                            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) var_8))));
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                            {
                                var_15 = ((/* implicit */_Bool) (((+(((/* implicit */int) max((arr_13 [i_0] [i_1] [i_2] [i_3 - 1] [i_4]), (((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_2] [i_2] [i_3 + 1] [i_4]))))))) + (min((arr_4 [i_0] [i_0]), (((/* implicit */int) var_10))))));
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)0))))))) ? (arr_9 [i_3 - 1]) : (((/* implicit */unsigned int) arr_4 [i_0] [i_1]))));
                                var_17 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (~(arr_8 [i_0] [i_1] [i_2] [i_4])))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_2 [i_0] [i_0])))) + (2147483647))) >> ((((~(((/* implicit */int) arr_13 [i_2] [i_1] [i_2] [i_3 + 1] [i_3 + 1])))) + (93)))));
                            }
                            for (unsigned char i_5 = 1; i_5 < 16; i_5 += 4) 
                            {
                                arr_18 [i_0] = min((arr_1 [i_5 - 1] [i_5 + 1]), (min((((/* implicit */unsigned char) var_9)), (arr_1 [i_5 + 1] [i_5 - 1]))));
                                var_18 = ((signed char) (+(1596025737U)));
                            }
                            var_19 = ((/* implicit */unsigned short) (-(max((-1788647114), (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                arr_19 [i_0] [i_0] = max((((/* implicit */int) ((signed char) 2199227632U))), ((~(((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_1] [i_0])))));
                var_20 = ((var_7) || (((/* implicit */_Bool) ((arr_4 [i_1] [i_0]) >> (((((unsigned int) arr_1 [i_0] [i_0])) - (68U)))))));
                arr_20 [i_0] = ((min((((/* implicit */unsigned int) arr_14 [i_0])), (max((((/* implicit */unsigned int) var_11)), (2199227632U))))) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (var_4))))))));
    var_22 = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) var_12)) ? (1596025737U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    /* LoopNest 3 */
    for (signed char i_6 = 2; i_6 < 10; i_6 += 2) 
    {
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_23 = ((/* implicit */int) var_11);
                    arr_28 [i_8] [i_8] [i_6 + 1] = ((/* implicit */short) max((((/* implicit */int) (_Bool)0)), (-1634548692)));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) ((_Bool) var_5));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161592
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) var_5)))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (int i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            arr_16 [i_0] [11] [i_3] [i_3] [i_0] [i_4] = ((long long int) ((unsigned long long int) min((arr_5 [i_0] [i_2] [i_3 - 1]), (((/* implicit */unsigned int) (unsigned short)24682)))));
                            arr_17 [i_3] [i_3] [i_2] [i_0] [i_3] |= ((/* implicit */int) ((unsigned short) (short)-30815));
                            var_16 ^= ((/* implicit */long long int) (+(arr_5 [i_3] [i_3] [i_2 + 1])));
                        }
                        for (unsigned int i_5 = 3; i_5 < 16; i_5 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_5 - 1] [i_0 - 1]))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */unsigned int) var_6)) : (var_7)))) : (((((/* implicit */_Bool) (short)30814)) ? (((/* implicit */unsigned long long int) var_14)) : (arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (828532865434831393LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-8251))))))));
                            var_18 = ((/* implicit */short) var_6);
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 3; i_6 < 16; i_6 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_2 - 1] [i_0] [i_2 - 1]))));
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (arr_14 [i_0 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_3 - 1]) : (arr_14 [i_0 + 2] [i_1] [i_2 - 1] [i_2 + 1] [i_3] [i_3 + 2]))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)63492)) ? (((/* implicit */long long int) ((/* implicit */int) (short)8235))) : (828532865434831393LL)));
                        }
                        arr_22 [i_3] [i_0] [i_1] = ((/* implicit */unsigned short) var_7);
                        var_22 = ((/* implicit */unsigned char) ((long long int) (short)8250));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        for (signed char i_8 = 1; i_8 < 15; i_8 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */short) arr_21 [i_1] [i_0] [i_1] [i_1] [i_2] [i_8 + 2]);
                                var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) max((var_0), (((/* implicit */int) (short)-8250))))) ? (12563391788952798428ULL) : (max((2483961596996322556ULL), (((/* implicit */unsigned long long int) -322468655))))))));
                                var_25 = ((/* implicit */long long int) 2080425003);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) arr_25 [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (829761812153351009LL) : (((/* implicit */long long int) var_1))))) ? ((-(34355544064ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((unsigned long long int) (_Bool)1))));
                    arr_27 [i_0] [i_1] [i_2] = (+(var_14));
                }
                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_0] [i_0 + 3] [i_0 + 3] [i_1])) ? (arr_13 [i_0] [i_1] [i_1] [13] [i_0 + 2] [i_1] [13]) : (arr_13 [i_1] [i_1] [7] [16LL] [i_0 - 2] [i_0] [i_1])))) ? (min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_2))), (((/* implicit */unsigned long long int) var_0)))) : (((unsigned long long int) var_12))));
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-6616)) ? (2483961596996322556ULL) : (((/* implicit */unsigned long long int) 292589168U)))))));
            }
        } 
    } 
    var_29 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) min((((/* implicit */short) var_9)), ((short)-6706)))))) ? (var_6) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 828532865434831393LL)) ? (((/* implicit */unsigned long long int) var_7)) : (var_2)))))));
    var_30 = ((long long int) (!(((/* implicit */_Bool) ((unsigned short) var_14)))));
    var_31 = min((((/* implicit */long long int) (short)-32149)), (((((/* implicit */_Bool) (+(462199057)))) ? (((/* implicit */long long int) 637701717U)) : (-6011254400082331124LL))));
}

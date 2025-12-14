/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155160
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
    var_20 -= ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_21 *= ((/* implicit */unsigned int) ((arr_1 [i_0] [i_1]) - (((/* implicit */unsigned long long int) var_14))));
                    arr_7 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */int) ((((/* implicit */int) max((arr_4 [i_0 - 3] [i_0 - 2]), (arr_4 [i_0 - 1] [i_0 + 1])))) != (((((/* implicit */_Bool) (unsigned short)63797)) ? ((~(var_12))) : (((((/* implicit */_Bool) (unsigned char)200)) ? (arr_6 [i_0] [i_1] [i_2 + 1] [i_2 + 1]) : (((/* implicit */int) var_13))))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (-(var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -461654176))))) : (((/* implicit */int) (unsigned short)1722))));
                        var_23 = ((/* implicit */unsigned char) arr_1 [i_0 + 1] [i_3 + 1]);
                        var_24 = ((/* implicit */unsigned char) (signed char)47);
                    }
                    for (signed char i_4 = 1; i_4 < 13; i_4 += 1) 
                    {
                        var_25 = (((!(((/* implicit */_Bool) arr_5 [i_2 - 1] [i_4 - 1] [i_2] [i_4 + 1])))) ? ((+(((/* implicit */int) arr_5 [i_2 - 1] [i_1] [i_4] [i_4 + 2])))) : (((/* implicit */int) max((arr_5 [i_2 - 1] [i_1] [i_2 - 1] [i_4 + 1]), (arr_5 [i_2 + 1] [i_1] [i_1] [i_4 - 1])))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 2; i_5 < 15; i_5 += 4) 
                        {
                            arr_18 [i_5] [i_4] [14U] [i_2] [i_1] [8U] [i_0] = ((/* implicit */unsigned long long int) var_15);
                            var_26 = ((/* implicit */short) max((((/* implicit */long long int) max((arr_17 [i_1] [(short)12] [i_1] [(short)12] [i_1]), (arr_17 [i_4] [i_4] [i_5] [i_5] [i_5])))), (((((/* implicit */_Bool) arr_17 [11LL] [i_1] [i_4] [(unsigned char)10] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_4] [i_4 + 2] [i_5 + 1]))) : (var_0)))));
                            var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_4 [i_0 - 2] [i_2 + 1]), (arr_4 [i_0 - 2] [i_2 + 1]))))));
                            arr_19 [7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_4 [(unsigned short)5] [(unsigned short)5])) ? (arr_6 [i_0 + 2] [3] [i_4] [i_5]) : (-461654176))))) ? (((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_4] [11LL] [i_4])) ? (((/* implicit */int) arr_16 [i_4] [(short)1] [i_4] [i_4 + 1] [i_4 + 1] [i_5 - 2])) : (((/* implicit */int) arr_16 [i_4 + 1] [i_4] [i_4] [i_4] [i_4 + 1] [i_5 - 1])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_1] [i_2] [i_5 - 2])), (max(((unsigned short)1722), (var_8))))))));
                        }
                        var_28 = ((/* implicit */unsigned char) (unsigned short)1722);
                    }
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183941
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] = (!(((/* implicit */_Bool) (unsigned char)112)));
                        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 27)) ? (((/* implicit */int) var_10)) : (27)));
                        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_3])) : (((/* implicit */int) (unsigned short)0))));
                        arr_12 [i_2] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_11))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
        arr_14 [i_0] = ((/* implicit */short) 15);
        var_14 = ((/* implicit */short) var_2);
    }
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        for (int i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                {
                    arr_22 [i_4] [i_4] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) var_1))));
                    var_15 = (+(((/* implicit */int) var_4)));
                    arr_23 [i_4] [i_4] [i_6] [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) (_Bool)0))))) < ((~(14601942790953161499ULL))))))));
                    var_16 = ((/* implicit */unsigned char) 6767060064600814852LL);
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (short i_8 = 1; i_8 < 11; i_8 += 3) 
                        {
                            {
                                arr_30 [i_6] [i_4] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_8 + 1] [i_8 + 1] [i_4] [i_8 - 1]))) : (6767060064600814825LL)))));
                                arr_31 [i_4] [i_4] [i_6] [i_4] [i_8 + 1] = ((/* implicit */unsigned short) arr_18 [i_4] [i_5]);
                                arr_32 [i_4] [i_5] [i_4] [i_4] [i_8 + 1] = ((/* implicit */unsigned char) min((((6767060064600814825LL) - (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24302))) : (arr_29 [i_4] [i_5] [i_6] [i_7] [i_8 - 1]))) != (((/* implicit */unsigned long long int) (+(13)))))))));
                                var_17 = ((/* implicit */_Bool) -27);
                                var_18 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) (short)(-32767 - 1))), (((((/* implicit */long long int) ((/* implicit */int) (short)-32765))) & (1909839470153476280LL))))) << (((var_2) - (13780419100459139441ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (unsigned char)219);
    /* LoopNest 2 */
    for (signed char i_9 = 2; i_9 < 19; i_9 += 1) 
    {
        for (unsigned long long int i_10 = 1; i_10 < 20; i_10 += 4) 
        {
            {
                arr_37 [i_10] [i_9 + 1] [i_10] = ((/* implicit */int) arr_35 [i_9 + 1] [i_9 + 2]);
                arr_38 [i_10] = ((/* implicit */unsigned int) var_6);
            }
        } 
    } 
}

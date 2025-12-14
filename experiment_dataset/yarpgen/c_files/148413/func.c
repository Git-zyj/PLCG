/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148413
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_10 = ((/* implicit */int) ((signed char) (signed char)-72));
        arr_3 [i_0 + 1] = ((/* implicit */short) ((min((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) 1953476552U)) ? (1953476553U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            for (short i_3 = 2; i_3 < 22; i_3 += 4) 
            {
                {
                    var_11 = ((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) % (((/* implicit */int) (signed char)-9))));
                    var_12 = ((/* implicit */unsigned char) arr_8 [i_1] [i_2] [i_3 + 1]);
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_3 + 1])) || (((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_3 - 2]))));
                    var_14 |= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (short)3627)) ? (arr_8 [i_1] [i_3] [6U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned int) ((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))));
        var_16 = ((/* implicit */short) ((int) var_5));
    }
    for (int i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (short i_5 = 2; i_5 < 12; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) var_4);
                                var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_4])) ? (((((((/* implicit */int) (short)-18590)) ^ (((/* implicit */int) arr_11 [(_Bool)1])))) ^ (((/* implicit */int) ((unsigned short) arr_17 [i_7] [i_5 - 2] [i_7]))))) : (((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((((/* implicit */int) var_3)) - (27150)))))) ? (((/* implicit */int) max((var_3), (((/* implicit */short) var_4))))) : (((/* implicit */int) var_3))))));
                                arr_23 [i_7] [i_7] |= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_10 [i_5 - 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 1; i_9 < 11; i_9 += 4) 
                    {
                        for (short i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            {
                                arr_29 [i_4] |= ((/* implicit */unsigned int) ((long long int) ((((((/* implicit */int) (short)-30703)) + (2147483647))) >> (((((((/* implicit */_Bool) arr_20 [2U] [i_5] [i_6] [i_6] [i_5] [i_9 + 1] [i_6])) ? (3144181987132530822ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26771))))) - (3144181987132530801ULL))))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) var_7)))))))) : ((-(((((/* implicit */_Bool) (short)32023)) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) (_Bool)1))))))));
                                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */int) (short)32766)) & (((/* implicit */int) arr_11 [i_4])))), (((/* implicit */int) var_0)))))));
                                arr_30 [i_5] [i_5] = ((/* implicit */short) arr_13 [i_5]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 |= ((/* implicit */signed char) (short)2145);
    }
    var_22 = ((/* implicit */unsigned int) ((signed char) (short)-30701));
    var_23 = ((/* implicit */int) var_1);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119595
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
    var_10 = var_4;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) (~(((((_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) max((((/* implicit */short) (signed char)109)), ((short)-22894)))) : (((var_1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-22885))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 3; i_2 < 19; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 *= ((/* implicit */unsigned short) max((((((/* implicit */int) ((unsigned short) arr_7 [i_3] [i_0] [i_0]))) != (((/* implicit */int) var_4)))), ((!((!(((/* implicit */_Bool) var_0))))))));
                                var_12 = ((/* implicit */signed char) ((unsigned short) (signed char)-109));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [(unsigned short)16] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_1 [i_4])), (arr_4 [i_0] [i_4]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0] [i_0] [8LL]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 17; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) max((((/* implicit */int) max((arr_18 [i_2 - 2]), (arr_18 [i_2 - 1])))), ((((+(((/* implicit */int) var_3)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (~(arr_4 [8U] [i_6]))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    arr_23 [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(var_6)))) == (((/* implicit */int) ((((/* implicit */int) (unsigned char)86)) == (((/* implicit */int) (unsigned short)56811)))))));
                    arr_24 [i_0] = (!(((_Bool) var_1)));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 2; i_9 < 17; i_9 += 3) 
                        {
                            {
                                arr_31 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (arr_11 [i_9 + 1] [i_9 + 2])));
                                var_15 = (!((!(((/* implicit */_Bool) var_3)))));
                                var_16 = ((/* implicit */unsigned long long int) 4294967295U);
                                arr_32 [i_0] [i_0] [i_7] [i_8] [i_9] = ((/* implicit */_Bool) ((arr_26 [i_9 + 2] [i_1] [i_7] [i_0]) - (((((/* implicit */int) arr_7 [i_9] [i_8] [i_7])) + (((/* implicit */int) var_4))))));
                                var_17 = ((/* implicit */int) (short)22910);
                            }
                        } 
                    } 
                }
                var_18 *= ((/* implicit */unsigned short) ((((1166760437) >= (((/* implicit */int) ((_Bool) arr_4 [(_Bool)1] [i_1]))))) ? ((-(arr_9 [i_1] [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (short)15160)) != (((/* implicit */int) (short)19657))))) + (((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_6))))))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181780
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
    var_12 += max(((unsigned short)2006), (max((var_3), (((unsigned short) 240911890U)))));
    var_13 = ((/* implicit */int) ((unsigned short) max((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)1999)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_6)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 6; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 6; i_3 += 4) 
                    {
                        var_14 += ((/* implicit */_Bool) (((_Bool)1) ? (-2147483626) : (((/* implicit */int) (unsigned short)1999))));
                        /* LoopSeq 3 */
                        for (int i_4 = 2; i_4 < 7; i_4 += 3) /* same iter space */
                        {
                            arr_11 [i_4 + 2] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_7)))) ? (((((/* implicit */int) var_3)) & (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (2147483625) : (((/* implicit */int) var_4))))));
                            arr_12 [i_0] [i_1] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 150032276U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)-14634))))));
                            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((signed char) var_2)))));
                        }
                        for (int i_5 = 2; i_5 < 7; i_5 += 3) /* same iter space */
                        {
                            arr_16 [i_0] [i_0 - 1] [i_3] [i_2 + 2] [i_3] [i_3 + 4] [i_3 + 4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_5)) : (18355529489399021568ULL)));
                            var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)63537)) ? (0) : (((/* implicit */int) (unsigned short)4451))));
                            var_17 *= ((/* implicit */signed char) ((_Bool) var_0));
                        }
                        for (int i_6 = 2; i_6 < 7; i_6 += 3) /* same iter space */
                        {
                            arr_21 [i_0 - 2] [i_1] [i_2 + 4] [i_3] [i_6] = ((/* implicit */unsigned long long int) (+(var_9)));
                            arr_22 [i_0] [i_0] [i_3] [i_2] [i_3 + 3] [i_3 + 3] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((((/* implicit */long long int) 2147483625)) - (9223372036854775807LL))) : (((/* implicit */long long int) var_8))));
                            var_18 = ((/* implicit */short) ((signed char) var_6));
                        }
                    }
                    arr_23 [i_0 + 1] [i_1] [i_2 + 1] = ((/* implicit */unsigned short) (unsigned char)60);
                    var_19 = ((/* implicit */long long int) (unsigned short)63529);
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */unsigned long long int) var_6);
}

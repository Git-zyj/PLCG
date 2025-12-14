/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123221
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */short) ((_Bool) ((arr_4 [i_0] [i_1]) || (arr_3 [i_0] [i_0] [i_0]))));
                var_14 += ((/* implicit */unsigned long long int) var_9);
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) arr_7 [i_2] [i_3]);
                                var_16 = ((/* implicit */short) ((((/* implicit */int) max((arr_11 [i_0] [i_1] [i_2] [i_2] [i_4]), (var_0)))) + (((/* implicit */int) arr_12 [i_0] [i_0] [i_3]))));
                                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_12))));
                                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_12 [i_4] [i_3] [i_0])) / (((/* implicit */int) ((short) var_4)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        for (short i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 4; i_7 < 12; i_7 += 4) 
            {
                {
                    arr_23 [i_5] [i_6] [i_7] [i_6] = ((/* implicit */long long int) var_2);
                    var_19 = ((signed char) (-(arr_13 [i_7 - 1])));
                    var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)38891)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))));
                    arr_24 [i_5] = ((/* implicit */unsigned int) var_4);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_8 = 1; i_8 < 23; i_8 += 4) 
    {
        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
                /* LoopSeq 1 */
                for (int i_10 = 3; i_10 < 23; i_10 += 4) 
                {
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))) ? ((-(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))))));
                    var_23 &= var_3;
                }
            }
        } 
    } 
}

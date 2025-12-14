/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153919
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((int) var_0));
                var_13 = ((/* implicit */unsigned char) ((int) ((int) var_2)));
                var_14 ^= ((/* implicit */long long int) var_4);
                var_15 = ((/* implicit */signed char) var_6);
                var_16 += ((/* implicit */unsigned long long int) var_9);
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 1; i_2 < 8; i_2 += 1) 
    {
        for (unsigned char i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            for (unsigned char i_4 = 1; i_4 < 10; i_4 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
                    {
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_10))));
                        arr_17 [i_2] [i_3] [7LL] [i_2] [i_2] [i_5] = ((/* implicit */_Bool) ((signed char) (signed char)-12));
                        var_18 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) var_3)));
                        arr_18 [i_2] [i_3 - 2] [10U] = ((/* implicit */unsigned int) var_7);
                    }
                    for (short i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned int) var_5);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            var_20 = var_2;
                            var_21 = ((/* implicit */unsigned short) var_3);
                            arr_24 [i_2] [i_2] [i_6] = ((/* implicit */unsigned char) ((unsigned int) ((unsigned char) var_8)));
                            var_22 = ((/* implicit */signed char) var_2);
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((unsigned int) var_4)))));
                        }
                    }
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((unsigned long long int) ((unsigned long long int) var_8))))));
                        var_25 = ((/* implicit */unsigned int) ((long long int) ((short) var_6)));
                        arr_27 [i_2] [i_4] = ((/* implicit */_Bool) ((unsigned char) ((_Bool) var_3)));
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((signed char) var_7)))));
                    }
                    for (signed char i_9 = 2; i_9 < 7; i_9 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((unsigned char) ((signed char) ((signed char) var_9)))))));
                        arr_31 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((long long int) ((unsigned int) var_7)));
                        var_28 = ((/* implicit */signed char) max((var_28), (((signed char) ((_Bool) var_9)))));
                        arr_32 [i_2] [i_2] [i_2] [i_2] [i_9] [i_2] = ((/* implicit */signed char) ((_Bool) ((unsigned char) var_0)));
                        var_29 = ((/* implicit */int) min((var_29), (var_12)));
                    }
                    var_30 = ((/* implicit */unsigned long long int) var_2);
                    var_31 = ((/* implicit */unsigned char) ((long long int) ((long long int) ((unsigned long long int) var_2))));
                    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((signed char) ((short) var_6))))));
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */short) var_3);
}

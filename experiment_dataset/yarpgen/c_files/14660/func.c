/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14660
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_18 = (~(((/* implicit */int) (unsigned short)511)));
                var_19 = ((/* implicit */unsigned short) ((_Bool) ((_Bool) var_12)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (unsigned char i_3 = 2; i_3 < 7; i_3 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (arr_1 [i_2] [i_3 + 4])));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 3; i_5 < 8; i_5 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_4]))) ? (((/* implicit */int) min((((/* implicit */short) arr_14 [i_2] [i_3] [i_4] [i_5])), (arr_0 [i_5])))) : ((-(((/* implicit */int) max((((/* implicit */unsigned short) var_6)), ((unsigned short)62722))))))));
                            var_22 = (+(((long long int) var_1)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_6 = 2; i_6 < 10; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            {
                                arr_25 [i_7] [i_3] [i_7] [i_7] [i_8] [i_2] = ((/* implicit */signed char) (unsigned short)65280);
                                arr_26 [i_6 - 1] [i_7] [i_8] = ((/* implicit */unsigned char) min((3410964426119960078LL), (((/* implicit */long long int) (unsigned char)67))));
                                var_23 *= ((/* implicit */signed char) min(((!(((/* implicit */_Bool) ((((((/* implicit */int) arr_22 [i_2] [i_8] [i_8] [i_2])) + (2147483647))) >> (((((/* implicit */int) arr_19 [i_2] [i_7] [i_8])) + (23707)))))))), (var_8)));
                                arr_27 [i_2] [i_7] = ((/* implicit */short) min((((/* implicit */int) var_5)), (((int) arr_17 [i_2] [i_2] [i_7] [i_8]))));
                            }
                        } 
                    } 
                } 
                arr_28 [i_2] [i_2] = ((/* implicit */int) var_2);
            }
        } 
    } 
}

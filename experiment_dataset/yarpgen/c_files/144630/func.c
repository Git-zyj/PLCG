/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144630
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
    for (long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_1 [i_0 - 2]))))))));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_1])), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) (short)17587))))))) : (arr_2 [i_1]))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_3] [i_1] [i_2]))));
                                var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) arr_7 [i_2] [i_3 + 2] [i_2 - 1])) : (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)24894)), (1130511157)))) ? ((~(((/* implicit */int) (signed char)(-127 - 1))))) : (max((var_4), (((/* implicit */int) arr_3 [i_0] [i_4]))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_13);
    /* LoopNest 2 */
    for (unsigned short i_5 = 3; i_5 < 18; i_5 += 2) 
    {
        for (int i_6 = 1; i_6 < 17; i_6 += 4) 
        {
            {
                var_22 -= ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_15 [i_5] [i_6 + 1])), ((unsigned short)51253))))));
                /* LoopNest 3 */
                for (unsigned char i_7 = 2; i_7 < 17; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        for (signed char i_9 = 3; i_9 < 17; i_9 += 3) 
                        {
                            {
                                var_23 *= ((/* implicit */signed char) (unsigned short)65525);
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_6))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

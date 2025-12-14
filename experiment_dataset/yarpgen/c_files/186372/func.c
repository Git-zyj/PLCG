/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186372
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_1))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) (-(1828520947U)));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */signed char) var_6);
                        arr_11 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */int) max((((((unsigned int) var_2)) / (181288563U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -562283285)) ? (((/* implicit */int) (short)-32744)) : (((/* implicit */int) (short)-32736)))))));
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_5))))) / (((unsigned int) 2130706432U))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] = (-(((/* implicit */int) var_9)));
                        arr_16 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))) ? (((int) -1LL)) : (var_0)));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 1; i_5 < 21; i_5 += 1) 
                        {
                            var_15 += ((/* implicit */int) (!(((/* implicit */_Bool) 2U))));
                            var_16 += ((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))));
                            var_17 = ((/* implicit */int) min((var_17), ((-((-(((/* implicit */int) var_10))))))));
                            var_18 += ((/* implicit */unsigned char) (+((~(var_0)))));
                            var_19 += (+((-(((/* implicit */int) var_4)))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned char) (-(((unsigned int) var_8))));
                            arr_21 [i_0] [i_1] [i_0] [(unsigned short)1] [(unsigned short)7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1322603974U))));
                            var_21 -= ((/* implicit */unsigned char) (-(2400051163U)));
                            var_22 *= ((/* implicit */unsigned short) var_5);
                            var_23 += ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
                        }
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) ((unsigned char) (!((!(((/* implicit */_Bool) var_10)))))));
}

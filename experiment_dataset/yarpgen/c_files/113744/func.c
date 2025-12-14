/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113744
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) max((var_17), ((~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0))))))))))));
                    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) arr_3 [i_0])))))))));
                    var_19 = ((/* implicit */signed char) (+((-((-(((/* implicit */int) (signed char)127))))))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+((-((~(3484466040063420771ULL))))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_21 -= ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)61367)))))));
                        arr_11 [i_1] [i_1] |= ((/* implicit */unsigned short) (+((~((-(((/* implicit */int) (unsigned short)17991))))))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) (~((+((+(((/* implicit */int) var_15))))))));
    /* LoopSeq 2 */
    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((-(arr_15 [i_4] [i_4]))))))));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4]))))))))))));
        arr_16 [i_4] = (!(((/* implicit */_Bool) (+((~(((/* implicit */int) var_16))))))));
    }
    for (unsigned char i_5 = 1; i_5 < 14; i_5 += 4) 
    {
        var_25 = ((/* implicit */unsigned long long int) (+((-((+(((/* implicit */int) (short)-29765))))))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                {
                    arr_25 [i_5] [i_6] = ((/* implicit */unsigned long long int) (+((-((-(arr_18 [i_5] [i_5])))))));
                    var_26 += ((/* implicit */unsigned char) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_7)))))))));
                }
            } 
        } 
    }
}

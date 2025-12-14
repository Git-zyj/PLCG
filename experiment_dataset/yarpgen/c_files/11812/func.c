/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11812
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
    for (short i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_18 *= ((/* implicit */_Bool) 366500335);
                        arr_11 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */short) ((((long long int) -366500335)) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_7 [i_0 - 3] [(_Bool)1] [i_2] [i_3])) : (((/* implicit */int) arr_1 [i_0])))))));
                    }
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 93030380))))), (((((/* implicit */long long int) -1693322876)) - (-5907735418699718054LL)))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) arr_1 [i_0]);
                                arr_17 [i_5] [i_0] [i_2] [i_0] [i_0] = (((+(var_3))) == (((/* implicit */unsigned long long int) max((5907735418699718054LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) 11265154327587513597ULL)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (signed char i_8 = 2; i_8 < 17; i_8 += 3) 
            {
                {
                    arr_25 [i_8 - 2] [i_8] [i_6] = ((/* implicit */signed char) max(((~(11265154327587513598ULL))), (max((((/* implicit */unsigned long long int) var_9)), ((~(var_2)))))));
                    arr_26 [i_6] [i_8] [i_8] = ((/* implicit */unsigned char) max(((((!(((/* implicit */_Bool) arr_20 [i_8])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (var_7))) : (((/* implicit */unsigned long long int) min((34359738367LL), (((/* implicit */long long int) var_10))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) != (((/* implicit */int) arr_24 [i_8 + 2] [i_8] [i_8])))))));
                }
            } 
        } 
    } 
    var_20 -= ((/* implicit */signed char) ((int) max((((/* implicit */unsigned int) ((((((/* implicit */int) var_13)) + (2147483647))) >> (((var_14) + (3555194524861602634LL)))))), (min((((/* implicit */unsigned int) var_1)), (var_16))))));
}

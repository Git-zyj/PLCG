/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18930
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_1] [i_2]))));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2])) * (((((/* implicit */int) var_8)) / (-342670707)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
                                arr_12 [i_2] [i_3] [i_2] [14U] [i_2] = ((/* implicit */long long int) (-(arr_0 [i_0 + 2])));
                                var_23 += ((/* implicit */_Bool) (~(var_18)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            {
                                var_24 ^= ((/* implicit */unsigned long long int) ((unsigned int) arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 2]));
                                arr_19 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_2] [i_0 + 2])) ? (((/* implicit */int) ((var_17) <= (var_1)))) : ((-(342670688)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_20 [i_0 - 1] = ((/* implicit */short) ((((-342670688) + (2147483647))) >> (((/* implicit */int) var_0))));
        arr_21 [i_0] = ((/* implicit */long long int) arr_2 [i_0] [(unsigned char)10]);
    }
    /* vectorizable */
    for (unsigned int i_7 = 1; i_7 < 18; i_7 += 2) 
    {
        arr_24 [i_7] [i_7] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */int) arr_15 [i_7 - 1] [i_7 + 1] [i_7] [(unsigned char)4] [i_7 + 1])) : (((/* implicit */int) var_11))))));
        arr_25 [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_18 [i_7 - 1]))));
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_7 + 1])) ? (((/* implicit */unsigned long long int) 342670687)) : (15524821012422626465ULL)))) && ((_Bool)1))))));
    }
    var_26 = ((/* implicit */unsigned int) var_5);
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_18), (((/* implicit */long long int) var_12))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_15)))) ? (((/* implicit */long long int) 342670688)) : (var_18)))) : (17449164300857421181ULL)));
}

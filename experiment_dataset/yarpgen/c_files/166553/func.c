/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166553
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
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (-((+(((/* implicit */int) var_9)))))))));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_1 [i_0 - 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)241)) && (((/* implicit */_Bool) (unsigned char)255))))) - (2147483632)))) : (min((((var_13) + (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))));
                arr_5 [i_0] = ((/* implicit */signed char) ((int) (unsigned short)65526));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_8))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) arr_0 [i_2]);
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) arr_7 [i_2]);
                    arr_15 [i_2] [(unsigned short)7] [i_3] [i_4] = ((/* implicit */long long int) ((arr_1 [i_2]) != (arr_1 [i_4])));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) (-(((long long int) (signed char)112))));
                                arr_20 [i_2] [i_2] [i_6] [i_5] [i_5] = ((/* implicit */int) (unsigned char)89);
                                arr_21 [i_5] = ((/* implicit */signed char) (((-(-1106038965))) / (((/* implicit */int) (unsigned char)14))));
                            }
                        } 
                    } 
                    arr_22 [i_2] [i_3] = (+(((/* implicit */int) (unsigned char)1)));
                }
            } 
        } 
    }
    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        var_20 += ((/* implicit */signed char) ((var_11) * (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (short)-14844)))))))));
        arr_25 [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_9 [i_7]);
        arr_26 [i_7] = ((/* implicit */unsigned int) ((_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (signed char)68))))), (((((/* implicit */_Bool) (unsigned short)19)) ? (1614417280081899169LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)227))))))));
        arr_27 [i_7] = ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_2 [i_7] [i_7] [i_7])), (var_14))))) / (max((((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)66)), (624003024U)))), (1614417280081899169LL)))));
    }
}

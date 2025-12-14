/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114737
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
    var_17 = ((/* implicit */signed char) max((min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)(-127 - 1))))), (((/* implicit */unsigned char) var_7))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_18 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_0 [i_1])) & ((-((-(var_10)))))));
                        var_19 = ((/* implicit */signed char) ((short) max((var_4), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))))))));
                        arr_11 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) | (var_10)))));
                        var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)9)));
                    }
                    arr_12 [i_0] = (-9223372036854775807LL - 1LL);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) (unsigned char)213);
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 22; i_7 += 1) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_26 [i_6] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)103)) / (((/* implicit */int) (unsigned char)98))));
                                var_22 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-99))));
                                var_23 *= ((/* implicit */signed char) max((((/* implicit */long long int) max(((-(((/* implicit */int) (unsigned char)43)))), (((/* implicit */int) min((((/* implicit */signed char) var_16)), ((signed char)93))))))), (min((max((var_6), (((/* implicit */long long int) (signed char)0)))), (((/* implicit */long long int) (signed char)(-127 - 1)))))));
                            }
                        } 
                    } 
                    arr_27 [i_6] [i_5] [i_4] [i_6] = ((/* implicit */signed char) (~(arr_14 [i_4])));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) (_Bool)0);
}

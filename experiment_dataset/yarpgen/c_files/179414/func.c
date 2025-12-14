/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179414
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
    var_11 = ((/* implicit */signed char) var_8);
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_6))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) (signed char)55)) : (((/* implicit */int) (short)32751))))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)52)), ((short)-15119)))) : (((/* implicit */int) (short)-14261))))) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)52)) ? (arr_0 [i_0 - 2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))))));
                    var_14 = ((/* implicit */unsigned int) (signed char)11);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) var_1);
                    arr_16 [i_3] [i_4] [i_3] = arr_3 [i_3] [i_5];
                    var_16 = ((/* implicit */int) ((max((((/* implicit */int) arr_3 [i_3] [i_3])), (((((/* implicit */_Bool) (signed char)40)) ? (var_0) : (((/* implicit */int) var_6)))))) >= (((/* implicit */int) max(((signed char)-1), (((/* implicit */signed char) (_Bool)1)))))));
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)40)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_6 = 3; i_6 < 14; i_6 += 1) 
    {
        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (signed char i_9 = 2; i_9 < 13; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 17; i_10 += 3) 
                        {
                            {
                                arr_30 [i_6] = ((/* implicit */unsigned int) arr_18 [i_6] [i_10]);
                                arr_31 [i_6] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-16388)) / (((/* implicit */int) arr_21 [i_6 - 2] [i_6] [i_6 - 2])))))));
                                var_18 = ((/* implicit */signed char) var_3);
                            }
                        } 
                    } 
                } 
                arr_32 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-15111)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1657288699U)));
                var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_6 + 1] [i_6] [i_6 - 2] [i_6] [i_7] [i_7])) ? (((/* implicit */int) (short)-13915)) : (((/* implicit */int) (signed char)-52))))) && (((/* implicit */_Bool) ((arr_28 [(signed char)12] [i_6 + 2] [(signed char)12]) ^ (((/* implicit */long long int) 1049726255))))))) ? (((((/* implicit */_Bool) arr_29 [(signed char)15] [i_6 + 2] [i_6 - 1] [(signed char)15] [i_6 + 1])) ? (((/* implicit */int) arr_17 [i_6 + 1])) : (var_0))) : (((/* implicit */int) ((short) var_6)))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6 + 2] [i_6 - 3] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6] [i_7] [i_7]))) : (var_1)))) ? (max((((/* implicit */long long int) arr_17 [i_6 + 3])), ((~(302360247814298623LL))))) : (((/* implicit */long long int) min((((/* implicit */int) var_2)), ((~(((/* implicit */int) (signed char)20)))))))));
                arr_33 [i_7] = ((/* implicit */signed char) max((((/* implicit */long long int) max((arr_25 [i_6 + 3] [i_6] [i_6 - 1] [i_7] [i_6 + 3] [i_6 + 3]), (((/* implicit */unsigned char) var_2))))), (((arr_28 [i_6] [i_6] [i_6]) | (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_7])))))));
            }
        } 
    } 
}

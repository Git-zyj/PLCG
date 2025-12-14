/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183192
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_16 -= ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_13 [i_2 - 3] [i_2] [i_2 - 1] [i_2 - 3] [i_2] [i_2 - 3] = ((9717087051285959165ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_12 [i_2 - 3] [i_2 + 2] [i_2] [i_2 - 2] [(unsigned char)20])))));
                                var_17 = ((/* implicit */long long int) min((((9717087051285959165ULL) & (9717087051285959165ULL))), (((/* implicit */unsigned long long int) ((arr_6 [i_2]) & (arr_6 [i_2]))))));
                                arr_14 [i_2] [i_2] = ((/* implicit */signed char) var_10);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_2])) + (((((/* implicit */int) (unsigned char)116)) / (((/* implicit */int) var_0)))))))));
                        var_19 = ((/* implicit */short) max((arr_15 [i_0] [i_0] [i_2] [i_0] [i_2]), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_2))))))));
                    }
                }
            } 
        } 
        arr_18 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))))), (((unsigned short) min(((short)-13394), (((/* implicit */short) (unsigned char)0)))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (((_Bool)1) ? ((+(((/* implicit */int) (short)32767)))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) > (((/* implicit */int) (unsigned char)116)))))))) + (min((1152921504606715904ULL), (((/* implicit */unsigned long long int) (unsigned short)39784))))));
    }
    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        arr_21 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_19 [i_6] [i_6]), (((/* implicit */short) (signed char)127))))), (var_15)))) ? (((((/* implicit */_Bool) max((991304736U), (((/* implicit */unsigned int) (unsigned char)63))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6] [i_6]))) < (var_15)))) : (((/* implicit */int) arr_20 [i_6])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)64)))))));
        arr_22 [i_6] [5U] = ((/* implicit */unsigned char) (unsigned short)19691);
    }
    var_21 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (var_5)))) & ((+(255LL))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)2494)) ? (((/* implicit */int) (unsigned short)45844)) : (((/* implicit */int) (unsigned char)191)))) / (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)57777)))))))));
    var_22 = (-((-(var_12))));
}

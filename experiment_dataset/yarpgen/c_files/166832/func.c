/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166832
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
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 4; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((((long long int) arr_13 [i_0] [i_1 - 2] [i_1] [i_1 + 1])) == (arr_13 [i_0] [i_1 - 2] [i_1] [i_1 + 2])));
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] [i_4] &= ((/* implicit */unsigned short) (signed char)93);
                                var_21 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_14))) != (arr_7 [i_4] [i_3] [i_1]))))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_1] [i_1])) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) (signed char)-94))))) ? (arr_3 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))))));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned long long int) min((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_4 [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) 6691014064012665076ULL)) && (((/* implicit */_Bool) (unsigned short)0))))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)25))))), (var_12)))) ? (((((/* implicit */_Bool) (+(arr_10 [i_2] [i_2] [i_0] [i_2] [i_0] [i_1] [i_0])))) ? (((((/* implicit */_Bool) var_17)) ? (arr_5 [i_2] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) arr_7 [i_0 + 1] [i_1 + 1] [i_2 - 2])))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_0]) == (8388352U)))))));
                    var_23 = ((/* implicit */long long int) var_4);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        for (int i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            {
                var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)93)) ? (3666763728771350515ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        {
                            arr_24 [i_5] [i_6] [i_7] = (+(((/* implicit */int) ((((/* implicit */unsigned long long int) var_15)) != (4761472003666518978ULL)))));
                            var_25 = ((/* implicit */unsigned long long int) (((-(arr_2 [i_8]))) != ((-(arr_16 [i_5])))));
                            var_26 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) (unsigned short)33467))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_9 = 2; i_9 < 8; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) max((((long long int) (!(((/* implicit */_Bool) (unsigned short)65535))))), (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)20755)), ((~(((/* implicit */int) arr_9 [i_5] [i_6] [i_9])))))))));
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (_Bool)1))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */int) var_9);
    var_30 = var_1;
    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) && ((!(((/* implicit */_Bool) 8621135274847986319LL))))));
}

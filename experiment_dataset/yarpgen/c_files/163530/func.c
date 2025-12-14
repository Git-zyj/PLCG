/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163530
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (min((3350257335930571811ULL), (15096486737778979804ULL))) : (((/* implicit */unsigned long long int) -1164327818972631524LL)))), (((/* implicit */unsigned long long int) arr_3 [i_2 - 1] [(unsigned short)7]))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned short) var_2));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((arr_9 [i_0] [i_0] [(short)8] [i_3] [i_3] [(unsigned char)2]) ? (((/* implicit */int) arr_4 [i_2] [i_3])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ? (max((3154634167U), (((/* implicit */unsigned int) arr_8 [i_2 - 1] [i_2 - 1] [i_3] [(_Bool)1] [i_2 - 1])))) : (((/* implicit */unsigned int) min((((((/* implicit */int) arr_3 [i_0] [i_1])) + (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1])))), ((~(((/* implicit */int) (unsigned short)32542)))))))));
                                arr_13 [i_0] [i_4] = ((/* implicit */unsigned short) max((((3350257335930571804ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)33002))))))), (((/* implicit */unsigned long long int) max(((short)-32767), (((/* implicit */short) (_Bool)1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_0] [(_Bool)1] [i_5] [(signed char)12] [i_0] [i_5] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5587155137883225829LL)) ? (2889006817U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_0] [(unsigned char)0] [i_6] [(signed char)3])) : (arr_17 [i_5]))) : (((/* implicit */int) arr_10 [i_0] [i_1] [(signed char)12] [i_5] [(short)3] [i_6] [i_0])))) : (((/* implicit */int) arr_4 [i_0] [i_0]))));
                                var_20 = ((/* implicit */unsigned int) min((min((6673786360590730889ULL), (((/* implicit */unsigned long long int) (unsigned short)12489)))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 5993714278490679183ULL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)20721)))), (((((/* implicit */_Bool) (unsigned short)2048)) ? (arr_16 [i_0] [i_1] [i_2] [i_1] [i_5] [i_6] [i_6]) : (((/* implicit */int) arr_19 [8U] [i_1] [8U] [i_1] [i_1] [i_1])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 &= ((/* implicit */int) ((unsigned short) min((var_3), (var_16))));
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_12))));
}

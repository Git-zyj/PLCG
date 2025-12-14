/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144120
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_12 [i_1] [i_3] [(short)7] [i_3] [i_2 + 2] = ((/* implicit */int) (signed char)-71);
                                arr_13 [i_3] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (signed char)76))))), (min((((/* implicit */int) var_5)), (arr_1 [i_1 + 1])))))), (min((1373700566U), (((/* implicit */unsigned int) (unsigned char)0))))));
                                var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_7 [i_0]))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_1 - 2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14838638721212135189ULL)) ? (14838638721212135184ULL) : (((/* implicit */unsigned long long int) 3132928275U))))) ? (min((14838638721212135189ULL), (((/* implicit */unsigned long long int) var_2)))) : (3608105352497416426ULL)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 1; i_5 < 16; i_5 += 2) 
    {
        for (int i_6 = 1; i_6 < 17; i_6 += 4) 
        {
            {
                var_17 *= ((/* implicit */signed char) ((((((((/* implicit */_Bool) (unsigned short)4095)) ? (((/* implicit */int) (signed char)33)) : (-811749512))) >= (((/* implicit */int) min((arr_3 [i_5] [i_6 + 1]), (((/* implicit */short) (unsigned char)55))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_9)) ? (5291041452298547518ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                arr_21 [i_5] = ((/* implicit */signed char) arr_0 [i_5] [i_5 + 2]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 3) 
    {
        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) var_14)))))) ? (((((/* implicit */_Bool) 3608105352497416425ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : ((+(((/* implicit */int) var_12)))))) : (max((251619413), (((/* implicit */int) (signed char)-124)))))))));
                arr_26 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((unsigned short) 5900085705295762058LL)))))) - (((((/* implicit */_Bool) var_6)) ? (3195404941U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_6))));
}

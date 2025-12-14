/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115855
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
    var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)51071))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [16ULL] [i_3] [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) 255ULL)) || (((/* implicit */_Bool) 255ULL))))));
                            arr_12 [5ULL] [i_3] [i_2 - 1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (+(min((2803630665U), (((/* implicit */unsigned int) (short)0))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            {
                arr_17 [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(-9223372036854775802LL)))) - (min((min((262547383184219545ULL), (((/* implicit */unsigned long long int) 2803630665U)))), (((/* implicit */unsigned long long int) (unsigned char)244))))));
                arr_18 [i_5] [i_4] [(unsigned char)2] = ((/* implicit */int) ((((8550760310974161022ULL) / (18184196690525332071ULL))) + (((((/* implicit */unsigned long long int) 737815519060798245LL)) - (5316663645187124770ULL)))));
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    for (int i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        {
                            arr_25 [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((1454781102U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))));
                            arr_26 [i_7] [i_4] [i_4] [(signed char)5] = ((/* implicit */unsigned int) 9895983762735390584ULL);
                            arr_27 [(short)11] [i_4] [i_6] [i_7] [i_6] [(short)2] = ((/* implicit */_Bool) (+((+(min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)-7158))))))));
                        }
                    } 
                } 
                var_23 = ((8550760310974161022ULL) + (11020679066793952479ULL));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_8 = 2; i_8 < 12; i_8 += 1) 
    {
        for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            for (unsigned char i_10 = 1; i_10 < 10; i_10 += 4) 
            {
                {
                    var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5316663645187124745ULL)) && (((/* implicit */_Bool) 5316663645187124770ULL))));
                    var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((min((((/* implicit */unsigned long long int) (short)0)), (18184196690525332071ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)246)))))))))));
                    arr_35 [i_8] [i_10] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) (((~(((/* implicit */int) (unsigned char)6)))) < (((/* implicit */int) (unsigned char)240))))) == (((/* implicit */int) (!(((/* implicit */_Bool) 3032906953422040713ULL)))))));
                }
            } 
        } 
    } 
}

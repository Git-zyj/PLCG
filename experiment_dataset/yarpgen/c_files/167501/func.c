/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167501
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
    var_12 = ((/* implicit */signed char) ((long long int) ((long long int) max((4571362258286437467LL), (((/* implicit */long long int) 645961030))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */signed char) 1118369310251387919LL);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] = min((max((((long long int) 9223372036854775807LL)), (9223372036854775807LL))), (max((((/* implicit */long long int) (signed char)1)), (9223372036854775801LL))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((signed char) ((int) max((9223372036854775807LL), (((/* implicit */long long int) (signed char)15)))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) -645961030);
                                var_14 ^= ((/* implicit */signed char) -9223372036854775807LL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((unsigned char) ((int) ((long long int) (unsigned char)0))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) 10910318530379586038ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        for (int i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        for (signed char i_11 = 1; i_11 < 22; i_11 += 1) 
                        {
                            {
                                var_16 ^= min((((long long int) 1125899906842620ULL)), (max((((/* implicit */long long int) (signed char)1)), (9223372036854775807LL))));
                                arr_38 [i_7] [i_7] |= ((signed char) max((min((((/* implicit */unsigned long long int) (signed char)-109)), (18445618173802708996ULL))), (((/* implicit */unsigned long long int) (signed char)91))));
                                var_17 = ((/* implicit */signed char) ((long long int) ((unsigned char) 9223372036854775802LL)));
                                arr_39 [i_7] |= max((max((1125899906842620ULL), (((/* implicit */unsigned long long int) 1460878398385082170LL)))), (((unsigned long long int) (signed char)99)));
                            }
                        } 
                    } 
                } 
                arr_40 [i_7] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1625917869)), (3275070799637886099LL)))), (max((max((18445618173802708996ULL), (4147719520672866660ULL))), (((/* implicit */unsigned long long int) -9223372036854775807LL))))));
                var_18 = ((/* implicit */long long int) min((max((1125899906842620ULL), (4033500614718159937ULL))), (((unsigned long long int) -6658443348961678794LL))));
            }
        } 
    } 
}

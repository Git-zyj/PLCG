/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170058
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned short i_3 = 3; i_3 < 22; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_17 ^= ((/* implicit */unsigned long long int) 894194926);
                                arr_13 [i_2] [i_3 - 1] [i_0] = ((/* implicit */int) ((long long int) (unsigned char)29));
                                arr_14 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */int) (unsigned short)53485)) << (((2096640) - (2096627))))), ((+(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 4; i_5 < 23; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)53479))))) ? (((/* implicit */int) (short)-12731)) : (((int) (unsigned char)29)))));
                            arr_23 [i_0] [i_0] [i_6] [i_0] [i_0] [i_0] &= ((/* implicit */short) arr_18 [i_1] [i_5] [i_6]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 22; i_9 += 2) 
                {
                    for (int i_10 = 2; i_10 < 22; i_10 += 3) 
                    {
                        {
                            arr_35 [i_7] [i_8] [i_9] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)1)) ? ((~(((/* implicit */int) (unsigned short)53502)))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_7] [23])))))))));
                            var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_20 [i_10] [i_8] [i_8] [i_7 - 1])))), (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-12)), ((unsigned char)198))))))) ? ((+(((/* implicit */int) (unsigned char)29)))) : (min((((/* implicit */int) ((unsigned char) var_15))), (((((/* implicit */_Bool) 216781889194627377ULL)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) (short)3175))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_11 = 1; i_11 < 20; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 4) 
                    {
                        {
                            var_20 ^= ((/* implicit */_Bool) min((min((((unsigned long long int) (unsigned char)226)), (((/* implicit */unsigned long long int) arr_25 [i_8])))), (((/* implicit */unsigned long long int) 1631615763607306579LL))));
                            var_21 = ((/* implicit */long long int) ((max((max((18446744073709551612ULL), (((/* implicit */unsigned long long int) (signed char)84)))), (((/* implicit */unsigned long long int) 6LL)))) ^ (((((/* implicit */_Bool) (unsigned char)212)) ? (arr_16 [i_11] [i_11 - 1]) : (arr_16 [i_11] [i_11 - 1])))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_2 [i_7] [i_7] [i_11 + 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
}

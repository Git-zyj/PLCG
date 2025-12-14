/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155364
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
    var_19 = ((/* implicit */unsigned long long int) var_16);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((int) max((arr_9 [i_1] [i_1] [i_0] [i_0 + 1]), (arr_9 [i_1] [i_0] [i_1] [i_0 + 2]))));
                    var_21 = (~(((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_1 [i_2])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)40854))));
                                var_23 = ((/* implicit */short) arr_17 [i_6] [i_4] [i_5] [i_6]);
                                var_24 = ((/* implicit */signed char) (-(max((((long long int) 2147483647)), (arr_12 [i_7])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_8 = 2; i_8 < 22; i_8 += 2) 
                {
                    for (short i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) (unsigned short)40854);
                            var_26 = ((/* implicit */signed char) max((((/* implicit */long long int) ((_Bool) arr_21 [i_8] [i_8 + 3] [(short)6] [i_9] [i_9]))), ((-(arr_21 [i_8] [i_8 + 3] [i_8 - 2] [i_9] [i_8 - 2])))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */signed char) ((2083565915) - (((/* implicit */int) var_11))));
                var_28 = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)101))))) / (max((arr_22 [i_3] [i_4] [i_4]), (arr_22 [i_3] [i_4] [i_4])))));
                /* LoopNest 3 */
                for (unsigned short i_10 = 2; i_10 < 22; i_10 += 1) 
                {
                    for (int i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        for (int i_12 = 0; i_12 < 25; i_12 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */short) max((7276193977793484470ULL), (18446744073709551615ULL)));
                                var_30 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (max((arr_32 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)21786)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

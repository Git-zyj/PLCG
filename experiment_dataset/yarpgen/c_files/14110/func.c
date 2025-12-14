/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14110
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
    var_12 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned short i_3 = 3; i_3 < 7; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) max((((/* implicit */int) ((signed char) arr_4 [i_0 - 3] [i_2 + 1]))), ((~((-(9)))))));
                            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) 213285060))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)8))));
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned short) (+((-2147483647 - 1))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_6))));
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            for (unsigned char i_6 = 2; i_6 < 23; i_6 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned short) (~(2147483647)));
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483642)) || (((/* implicit */_Bool) -2147483638)))))));
                    }
                    for (unsigned char i_8 = 3; i_8 < 20; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            arr_31 [i_4] [21ULL] [i_4] [i_4] [21ULL] [i_9] = ((/* implicit */signed char) max((2147483643), (2147483644)));
                            arr_32 [i_4] [i_4] [i_9] [i_6 - 2] [(unsigned char)9] [i_4] [i_9] = min((((int) var_1)), (((((-2147483638) + (2147483647))) << (((2147483647) - (2147483647))))));
                        }
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((max((((/* implicit */int) arr_30 [i_4] [i_6 + 1] [i_6 - 1] [i_4] [i_8 + 4])), ((-2147483647 - 1)))), ((+((-(-2147483638))))))))));
                    }
                    var_20 = ((/* implicit */_Bool) var_4);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483645)) ? (-2147483638) : (-2147483645))))));
}

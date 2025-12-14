/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164840
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) ((unsigned short) max((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1121187223)) ? (((/* implicit */int) (unsigned short)53111)) : (((/* implicit */int) (short)1536))));
                                var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (4214388669U) : (arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_4] [i_3] [i_1] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) 268173312U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-10065))) : (1U))))))));
                                arr_14 [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)7190))));
                            }
                        } 
                    } 
                    var_16 *= ((/* implicit */unsigned long long int) 2450443713612513095LL);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    for (unsigned int i_8 = 4; i_8 < 15; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */int) (unsigned short)42894);
                                arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) arr_20 [i_7]);
                                var_18 = ((/* implicit */signed char) ((unsigned short) var_12));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_6] [i_6] [i_5])) ? (0) : (((/* implicit */int) arr_24 [i_5]))));
                var_20 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) ((unsigned char) (signed char)105)))))));
                arr_29 [i_5] = ((/* implicit */unsigned short) (short)-10075);
                /* LoopNest 3 */
                for (unsigned int i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 16; i_12 += 3) 
                        {
                            {
                                var_21 -= ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_7)))) % (max((arr_22 [i_5] [i_6] [i_10] [i_5]), (((/* implicit */unsigned int) arr_17 [i_12])))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_4))))));
                                var_22 -= max((((/* implicit */unsigned int) (unsigned short)65535)), (arr_33 [i_5] [i_6] [i_6] [i_12]));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) 4294967295U);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18934
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) min((-4004994064349371268LL), (max((((/* implicit */long long int) (unsigned char)34)), (max((5745689582784837132LL), (((/* implicit */long long int) var_3))))))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    arr_9 [i_0] = ((/* implicit */int) ((var_5) - (((/* implicit */unsigned int) -1))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [(short)2] = ((/* implicit */unsigned long long int) ((((((((/* implicit */unsigned int) 0)) ^ (var_5))) >> (((((/* implicit */_Bool) var_5)) ? (0ULL) : (14436352434432460419ULL))))) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_12 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), ((-(0ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                            var_13 |= ((/* implicit */unsigned int) (+((~(((((/* implicit */int) (unsigned short)65535)) & (2)))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_14 |= max((1), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16383))))));
                            var_15 = ((/* implicit */signed char) ((unsigned int) ((17508538591970340328ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49152))))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_3 + 1] [i_0])) <= (((int) 32764)))))) ^ (min((max((var_8), (((/* implicit */unsigned long long int) arr_2 [i_0])))), (((/* implicit */unsigned long long int) ((long long int) var_2)))))));
                        }
                        var_17 += ((/* implicit */long long int) (~(min((((arr_3 [i_1] [i_1] [i_2]) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_2] [i_2])) ^ (((/* implicit */int) (unsigned short)4095)))))))));
                    }
                }
                /* vectorizable */
                for (signed char i_6 = 1; i_6 < 20; i_6 += 2) 
                {
                    var_18 |= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_6]))) | (arr_18 [i_1] [i_1] [i_6 + 2])));
                    var_19 = ((/* implicit */short) (-(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_6]))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)20027)))))));
                }
                var_21 += ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) 9)) ? (((/* implicit */unsigned long long int) -2)) : (0ULL)))))));
                var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)49152))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (max((((/* implicit */long long int) var_0)), (var_4))))), (((/* implicit */long long int) (-(((var_6) ^ (((/* implicit */int) (signed char)114))))))))))));
}

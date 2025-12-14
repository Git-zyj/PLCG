/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10982
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_14 ^= ((((((((/* implicit */_Bool) (signed char)46)) && (((/* implicit */_Bool) (signed char)-1)))) ? (((/* implicit */long long int) ((arr_4 [(short)2]) ? (arr_7 [i_0] [i_1] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11876)))))) : (((var_13) % (((/* implicit */long long int) arr_2 [i_2] [i_2])))))) < (((/* implicit */long long int) ((/* implicit */int) var_3))));
                    var_15 += ((/* implicit */long long int) (+((+(arr_2 [i_0] [i_0])))));
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((((/* implicit */int) (short)-19285)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))) != (var_13)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) var_11);
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((long long int) arr_10 [i_0] [i_0] [i_0] [i_0]))) ^ (min((2564464520141561568ULL), (((/* implicit */unsigned long long int) (unsigned char)214))))))) ? (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4] [i_4] [(short)0]))) : (arr_9 [i_2]))), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_2] [i_3] [i_4])))) : (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (signed char)-22)))), (((arr_10 [i_1] [i_2] [i_3] [i_4]) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) (unsigned short)65535)))))))));
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (unsigned short)65526))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_0)), (4414166594016811148LL))) % (((/* implicit */long long int) 28672U))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        for (unsigned short i_6 = 3; i_6 < 18; i_6 += 3) 
        {
            {
                var_21 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (signed char)-92)), (arr_16 [i_6 - 2] [i_6 + 3] [i_6 - 2]))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_5] [i_5])) | (((/* implicit */int) min((var_8), (arr_13 [i_5] [i_5])))))))));
                var_22 *= ((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) var_2))));
            }
        } 
    } 
    var_23 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967290U)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (4U))) : (((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) : (var_9)))))) : (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))), (-7689013307479052036LL)))));
}

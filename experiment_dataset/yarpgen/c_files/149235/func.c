/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149235
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) var_10)))));
                var_17 = ((/* implicit */unsigned long long int) (unsigned char)104);
                arr_6 [i_0] [i_1] [18ULL] = ((/* implicit */short) ((((/* implicit */_Bool) -1133038796)) ? (var_13) : (((((/* implicit */int) (!(((/* implicit */_Bool) (short)5619))))) * ((+(1133038795)))))));
                arr_7 [i_1] = ((/* implicit */long long int) 4274396918U);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (arr_3 [i_2] [i_3 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 6080765056516183110ULL)))))) : (arr_5 [i_0] [i_3] [i_3])))));
                                var_19 ^= ((/* implicit */short) var_13);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((var_15) == (((/* implicit */unsigned int) 983896255))));
    var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) >= (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) 1133038795)) ? (2305843009213691904ULL) : (var_7))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)0)), (9223372036854775800LL))))))));
}

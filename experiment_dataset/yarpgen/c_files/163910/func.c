/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163910
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
    var_16 = 2147483647;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((short) 4398046511103ULL));
                arr_5 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) (-2147483647 - 1));
                var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (0U) : (((/* implicit */unsigned int) 162787541)))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) 133955584U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_3 [i_1]))))) ? (arr_3 [i_1 + 3]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) (signed char)-64)) : (-1451142408))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] [(unsigned char)5] [i_3] [i_4] [i_3] = ((/* implicit */signed char) arr_9 [i_0] [i_1] [i_2] [i_3] [i_0]);
                                var_19 = ((((unsigned long long int) 18446739675663040513ULL)) >> (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)179))))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_1 - 2] = ((/* implicit */int) ((((/* implicit */int) arr_10 [i_1 - 1] [i_1] [i_1 + 2] [i_1] [i_1] [i_1 + 1] [i_1 + 2])) <= (((/* implicit */int) (signed char)115))));
            }
        } 
    } 
}

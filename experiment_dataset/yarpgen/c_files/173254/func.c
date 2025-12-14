/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173254
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
    for (int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2 - 1] = ((/* implicit */_Bool) min((min((arr_0 [i_0 + 2] [i_1]), (((/* implicit */unsigned int) (unsigned short)65535)))), (((unsigned int) -3509848773286777793LL))));
                    var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0 - 1]) != (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_2 + 1])))))) | (arr_7 [i_0])));
                    var_16 = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) arr_7 [i_0])) ? (-6443106313746370949LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))), (3509848773286777798LL))) - (((/* implicit */long long int) arr_0 [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 8; i_4 += 2) 
                        {
                            {
                                arr_13 [i_2] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3509848773286777780LL)) ? (406988514) : (1411046121)));
                                arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_13)), (6671172274429840012LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 |= 31;
    var_18 = ((/* implicit */short) var_2);
}

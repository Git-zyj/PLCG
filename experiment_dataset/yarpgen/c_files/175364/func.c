/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175364
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
    var_19 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((long long int) var_10))) | (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 1489350649U)) : (9137949723004375967ULL)))))));
    var_20 = ((/* implicit */signed char) ((unsigned long long int) (unsigned char)87));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */unsigned long long int) -8701849282774213335LL)) : (3381682426433669543ULL)));
                                var_22 ^= ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (15740735723609673723ULL)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-117))))) ? (((unsigned long long int) arr_8 [2ULL] [2ULL] [i_2] [i_1])) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) % (arr_8 [(unsigned short)0] [i_1 + 2] [i_1] [i_1 - 1]))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 3) 
                {
                    for (long long int i_8 = 1; i_8 < 9; i_8 += 4) 
                    {
                        {
                            var_24 ^= ((/* implicit */signed char) arr_22 [i_5] [i_5] [i_5] [i_5]);
                            arr_25 [i_7] [i_6] [(short)3] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((signed char) 35184371564544ULL))) || (((/* implicit */_Bool) var_12)))) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)59713)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_8))))))));
                        }
                    } 
                } 
                arr_26 [i_5] [i_6] [5] = ((/* implicit */unsigned short) (_Bool)1);
            }
        } 
    } 
}

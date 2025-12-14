/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102194
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775794LL)) || (((/* implicit */_Bool) (short)768))))), (((((/* implicit */_Bool) 2749379176242228295ULL)) ? (11198309511226832531ULL) : (((/* implicit */unsigned long long int) 2136768690149341974LL))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 7; i_3 += 3) 
                    {
                        {
                            arr_8 [i_0] [i_0] [1U] [(short)4] |= ((/* implicit */unsigned long long int) ((((17773727143960637476ULL) ^ (((/* implicit */unsigned long long int) 0U)))) > (18446744073709551593ULL)));
                            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (~(9223372036854775793LL))))));
                        }
                    } 
                } 
                arr_9 [i_0] = arr_0 [i_0] [i_0];
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((unsigned char) (_Bool)1));
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                arr_16 [i_4] [i_5] = ((/* implicit */unsigned int) arr_11 [i_4] [i_5]);
                arr_17 [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_13 [i_4]))))));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (max((arr_15 [i_5]), (((/* implicit */unsigned int) (signed char)-1)))) : (max((((arr_15 [i_5]) - (2856225490U))), (((/* implicit */unsigned int) ((int) arr_13 [i_4])))))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 2; i_6 < 10; i_6 += 3) 
                {
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        {
                            arr_24 [(unsigned char)9] [i_4] [4LL] = ((/* implicit */unsigned int) arr_22 [i_7] [i_5] [i_5] [i_4]);
                            var_18 = ((/* implicit */unsigned int) arr_14 [i_4] [i_4]);
                        }
                    } 
                } 
                var_19 = ((((/* implicit */int) (unsigned char)100)) / (((((((/* implicit */_Bool) (unsigned char)238)) ? (234881024) : (((/* implicit */int) (unsigned short)3584)))) ^ (((/* implicit */int) ((((/* implicit */int) (short)32766)) > (((/* implicit */int) arr_20 [1ULL] [(unsigned short)3] [1ULL]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) 1570014689U);
}

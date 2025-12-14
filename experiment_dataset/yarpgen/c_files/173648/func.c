/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173648
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_11 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) -1784562840154949077LL);
                            var_18 = ((/* implicit */_Bool) var_17);
                        }
                    } 
                } 
                arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) 796538221362085494ULL);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((1784562840154949077LL) ^ (1784562840154949046LL)))) ? (((/* implicit */long long int) (~(4294967295U)))) : (((((/* implicit */_Bool) 1569583558U)) ? (561850441793536LL) : (-3945735849215946594LL))))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))));
    /* LoopNest 2 */
    for (unsigned char i_4 = 1; i_4 < 11; i_4 += 4) 
    {
        for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            {
                arr_19 [i_5] [i_4] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2722186946U)) ? (((arr_7 [i_4] [i_4] [i_5] [i_5]) ^ (var_5))) : (((/* implicit */unsigned long long int) arr_9 [i_4] [i_4 + 1] [i_4 - 1] [i_4 - 1] [(signed char)9])))) & (((((/* implicit */_Bool) (-(1784562840154949079LL)))) ? (17650205852347466114ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-80)))))))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_4] [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13542))) : ((~((~(arr_7 [i_4] [i_5] [i_5] [i_4])))))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 1; i_6 < 11; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_21 = ((((/* implicit */_Bool) (-(2838385119U)))) ? (((arr_7 [i_4] [i_5] [i_6] [i_7]) << ((((-(var_3))) + (474764815928813732LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) == ((-(arr_18 [i_4] [i_4]))))))));
                            var_22 = arr_15 [i_7];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_8 = 3; i_8 < 11; i_8 += 2) 
                {
                    for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        {
                            arr_30 [i_4] [i_5] [i_4] [i_9] = ((/* implicit */long long int) max(((-(arr_25 [i_8 - 3] [(signed char)11] [i_8] [i_4]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_4 + 1])) ? (((/* implicit */int) arr_4 [i_5] [i_9])) : (((/* implicit */int) (unsigned short)3770)))))));
                            var_23 ^= ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((0ULL) << (((-3854607565210003658LL) + (3854607565210003695LL)))))) ? ((+(5446228944509729094LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_8])) : (((/* implicit */int) (unsigned char)0))))))) : (((/* implicit */long long int) ((/* implicit */int) var_6))));
                        }
                    } 
                } 
            }
        } 
    } 
}

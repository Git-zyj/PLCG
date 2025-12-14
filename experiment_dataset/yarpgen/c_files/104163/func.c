/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104163
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
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */int) (short)510);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_20 -= ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) 1281791281U)), (18446744073709551596ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-51)))))));
                            var_21 = ((/* implicit */int) ((((4163608845023556631ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)89)), ((short)32767))))))) & (((/* implicit */unsigned long long int) 0))));
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))) - (1868759723U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)510)))));
                            arr_11 [i_0] [i_1] = ((/* implicit */unsigned short) ((max((((131070ULL) * (((/* implicit */unsigned long long int) 0)))), (((/* implicit */unsigned long long int) max(((short)-511), (((/* implicit */short) (unsigned char)255))))))) - (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-5225139658760255640LL))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) (+(((min((((/* implicit */unsigned int) (short)499)), (3948438212U))) + (((/* implicit */unsigned int) min((1323587441), (((/* implicit */int) (signed char)127)))))))));
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_23 += ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) ^ (31457280ULL))), (((11740868818201821982ULL) ^ (((/* implicit */unsigned long long int) 6597390600615978644LL))))));
                                arr_22 [i_0] [i_1] [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) 75934052U);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((-6597390600615978644LL), (((/* implicit */long long int) 0U))))), (min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (18446744073709551615ULL)))))) ? (31457288ULL) : (min((max((((/* implicit */unsigned long long int) (_Bool)0)), (3ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)191))) : (4294967282U))))))));
    var_25 *= min((((((/* implicit */unsigned int) ((/* implicit */int) ((1655735175U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)144))))))) | (4294967295U))), (((/* implicit */unsigned int) min(((+((-2147483647 - 1)))), ((-(((/* implicit */int) (unsigned short)65533))))))));
}

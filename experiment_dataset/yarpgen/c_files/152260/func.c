/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152260
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (signed char)3))))))) ? ((-((-(((/* implicit */int) (short)13735)))))) : (((((/* implicit */_Bool) max(((unsigned char)35), (((/* implicit */unsigned char) (_Bool)1))))) ? ((-(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) -979325072236342871LL))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_13 *= ((/* implicit */signed char) (unsigned short)11);
                                var_14 ^= ((/* implicit */short) (-9223372036854775807LL - 1LL));
                                var_15 |= max(((+((+((-9223372036854775807LL - 1LL)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2333654156468496140LL)) ? (26ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))))))));
                                arr_15 [i_0] [i_1] [(unsigned short)2] [(unsigned short)2] [i_4] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27248)) ? (((/* implicit */unsigned long long int) -9223372036854775792LL)) : (((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)165)), ((short)-32757)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */_Bool) -9223372036854775778LL)) ? (4067501983315427483ULL) : (13104478699450407895ULL)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 4; i_5 < 22; i_5 += 3) 
                {
                    for (unsigned short i_6 = 1; i_6 < 20; i_6 += 2) 
                    {
                        {
                            arr_21 [i_5] = ((/* implicit */short) (~((-(((/* implicit */int) (short)11609))))));
                            arr_22 [i_5] [i_1] [i_1] [i_1] [i_1] [(unsigned short)20] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((3187652133U), (((/* implicit */unsigned int) (_Bool)0)))))));
                        }
                    } 
                } 
                arr_23 [i_0] [i_1] = ((/* implicit */unsigned int) (~((+(((((/* implicit */_Bool) -4933145437129041329LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}

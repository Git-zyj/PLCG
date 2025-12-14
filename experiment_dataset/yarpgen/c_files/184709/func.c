/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184709
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
    var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)-11993)), (var_9)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)17156)))) ? (((((/* implicit */_Bool) (signed char)118)) ? (16895356930123316510ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69))))) : (((/* implicit */unsigned long long int) -22))))) ? (max((((((/* implicit */_Bool) (short)-17157)) ? (3365409381U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))), (((unsigned int) 0U)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14532)) ? (((/* implicit */int) (short)11972)) : (((/* implicit */int) (short)-1))))) && (((/* implicit */_Bool) (short)-30936))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) 1473965515359499521ULL);
                                arr_14 [4ULL] [4ULL] [i_2] [4ULL] [4ULL] = ((/* implicit */short) (signed char)3);
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(4022349907536838706LL)))) ? (942207152U) : (((/* implicit */unsigned int) 220096062))));
                                var_18 = ((/* implicit */unsigned short) max(((short)14532), (((/* implicit */short) (_Bool)1))));
                                var_19 = ((/* implicit */int) 942207152U);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) min(((~(((((/* implicit */_Bool) 524287ULL)) ? (584578725U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19401))))))), (((/* implicit */unsigned int) ((signed char) (signed char)9)))));
                }
            } 
        } 
    } 
}

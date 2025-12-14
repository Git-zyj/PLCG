/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158967
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
    var_16 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(var_10))), (((/* implicit */unsigned long long int) (short)-32756))))) ? (((((/* implicit */_Bool) min(((short)-32754), (((/* implicit */short) (unsigned char)81))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-32749))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32756)) ? (((/* implicit */long long int) 3216075472U)) : (((-7543507152107273556LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-16906))))))))));
    var_17 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) min(((_Bool)1), ((_Bool)1)))), ((unsigned short)63892)));
    var_18 = ((/* implicit */unsigned short) 7543507152107273556LL);
    var_19 = ((/* implicit */unsigned int) ((var_13) >= (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) | (((/* implicit */int) ((short) var_6))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_13 [i_3] [i_1] [i_1 + 2] [i_0] = ((/* implicit */unsigned long long int) var_3);
                            var_20 = ((unsigned char) (signed char)-7);
                        }
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */short) (+(((arr_5 [i_1] [i_1 - 1] [i_1 - 1]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                var_21 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max(((short)-8223), (((/* implicit */short) (signed char)79))))), (min((min((((/* implicit */unsigned long long int) var_3)), (arr_4 [i_0]))), (((/* implicit */unsigned long long int) min(((short)-1669), (arr_11 [i_0]))))))));
            }
        } 
    } 
}

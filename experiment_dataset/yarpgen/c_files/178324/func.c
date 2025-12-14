/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178324
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
    for (unsigned int i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 + 1]))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_16 = (-(min((((/* implicit */unsigned int) (_Bool)1)), (arr_2 [i_0]))));
                                arr_12 [i_0 - 2] [i_1] [i_2] [i_0 + 1] [i_3 + 3] = ((/* implicit */long long int) ((((/* implicit */int) min(((signed char)-43), (((/* implicit */signed char) (_Bool)1))))) <= (((/* implicit */int) (short)14884))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_1] [i_0 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-14874)) ? (((/* implicit */long long int) 3074522337U)) : (6636298780993349433LL)));
                var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)224))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), ((+((-9223372036854775807LL - 1LL)))))))));
    var_19 = ((/* implicit */unsigned int) var_5);
    var_20 = ((/* implicit */unsigned char) (-((-(((((/* implicit */_Bool) (short)6020)) ? (((/* implicit */unsigned long long int) var_10)) : (var_7)))))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            {
                arr_21 [16LL] [i_6] [i_5] = ((/* implicit */short) (+(((/* implicit */int) min(((short)5630), ((short)26237))))));
                var_21 = ((/* implicit */long long int) min((((arr_17 [i_5] [i_6]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9))))), (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_14)))))))));
            }
        } 
    } 
}

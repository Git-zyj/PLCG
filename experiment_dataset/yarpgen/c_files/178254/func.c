/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178254
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (~(((/* implicit */int) arr_8 [i_0] [i_1] [(short)12] [i_3] [i_2])))))));
                                var_13 -= min((((/* implicit */unsigned int) (-(var_3)))), (((((/* implicit */_Bool) arr_4 [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : ((-(var_4))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 16; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 4; i_7 < 14; i_7 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */int) min((((/* implicit */unsigned char) var_5)), ((unsigned char)18)));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32763))) : (-2283649331744866515LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65527))))))))) : (((((/* implicit */_Bool) min((var_3), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)65535)), (var_6)))) : (min((274877874176LL), (((/* implicit */long long int) (unsigned short)5))))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */signed char) ((_Bool) (_Bool)1));
                arr_19 [i_0] [i_0] [3] = ((/* implicit */int) (~(11369754496711215012ULL)));
                arr_20 [i_0] [i_0] = ((/* implicit */long long int) 18446744073709551615ULL);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (_Bool)1)))))));
    var_18 = ((/* implicit */unsigned char) 2251799813668864ULL);
    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_0)), (var_2)));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181436
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) (unsigned short)65520);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_15 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) min(((unsigned short)58777), ((unsigned short)65520)))) << (((/* implicit */int) ((-59347351233874680LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65520))))))));
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((unsigned short) var_13)))));
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))) > (min((59347351233874679LL), (((/* implicit */long long int) (unsigned short)17)))))))) % (max((var_4), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)167)) & (((/* implicit */int) var_7)))))))));
                                arr_17 [i_0] [(_Bool)1] [i_0] = ((short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) var_2))))) || (((/* implicit */_Bool) (unsigned char)57))));
                                var_21 |= ((/* implicit */int) ((((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-59347351233874680LL))) | (((/* implicit */long long int) ((int) var_17)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) 33554368);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((var_17) | (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (-33554368))))));
}

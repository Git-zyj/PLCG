/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105103
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
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (unsigned short)24560))));
    var_21 -= ((/* implicit */unsigned long long int) max((((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-15)))) - (((var_19) ? (((/* implicit */int) (unsigned short)24560)) : (((/* implicit */int) var_1)))))), (255754505)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_22 -= ((/* implicit */_Bool) min(((unsigned short)24563), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)24549)))))));
                var_23 -= ((/* implicit */signed char) (+(min((((/* implicit */int) max((((/* implicit */unsigned short) var_19)), ((unsigned short)24559)))), ((~(((/* implicit */int) (short)28605))))))));
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)40976)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_1 + 1] [i_2 + 1] [i_3] = ((/* implicit */int) min((((unsigned char) var_13)), (((/* implicit */unsigned char) (_Bool)1))));
                            arr_13 [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1] = ((/* implicit */_Bool) var_1);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        for (int i_6 = 1; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (short)-29190))));
                                var_26 -= ((/* implicit */int) min((min((((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-27)) == (((/* implicit */int) (_Bool)1))))), ((unsigned short)24540))), (((/* implicit */unsigned short) min(((short)29190), (((/* implicit */short) var_19)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161191
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
    var_19 = ((/* implicit */unsigned int) (-(var_14)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((var_11), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_2]))))))))));
                    var_21 &= ((/* implicit */unsigned int) (unsigned char)223);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) (signed char)40);
                                arr_13 [i_4] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)-41);
                                arr_14 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1))))))) >> (((var_11) - (3247782266U)))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) arr_4 [i_0])))));
                }
            } 
        } 
    } 
    var_23 -= var_10;
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            {
                arr_21 [i_5] [i_6] [i_6] = ((signed char) var_5);
                arr_22 [i_6] = ((/* implicit */int) var_16);
            }
        } 
    } 
}

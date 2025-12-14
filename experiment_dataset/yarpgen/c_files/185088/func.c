/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185088
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
    var_19 = ((/* implicit */unsigned char) ((1259501094U) | (((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)31))))) / (min((1259501087U), (1259501094U)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned int) arr_7 [i_4] [i_2] [i_2]);
                                var_21 = arr_5 [i_1] [i_3] [i_4];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (int i_6 = 2; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_20 [i_0 + 3] [i_0] [i_0] [i_2] [i_0] [i_0] [i_6 - 2] = ((/* implicit */unsigned short) min((3035466202U), (((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) arr_9 [i_1] [i_2] [i_2] [i_0]))))))));
                                var_22 = ((/* implicit */_Bool) (+(1259501094U)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        for (signed char i_8 = 2; i_8 < 20; i_8 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)31), (((/* implicit */unsigned short) (unsigned char)155)))))) + (5090107448535906106ULL)));
                                arr_26 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) 17043723201988504931ULL);
                                var_24 = ((/* implicit */unsigned char) max(((+(1443519100U))), (((((/* implicit */_Bool) (+(arr_5 [i_0] [i_0] [i_8])))) ? ((-(1811842684U))) : (3035466202U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

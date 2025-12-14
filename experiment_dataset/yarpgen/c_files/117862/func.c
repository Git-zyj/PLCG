/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117862
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (short)27750);
                arr_7 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) ((int) (~(((/* implicit */int) (unsigned short)50862)))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-27751))) | (2147483647U)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            {
                arr_13 [i_3] = ((/* implicit */short) arr_10 [i_2] [(short)2] [i_3]);
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        {
                            arr_18 [i_2] [i_2] [i_3] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) arr_14 [i_2] [i_2])) || (((/* implicit */_Bool) 0)));
                            var_20 = ((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned short)14668)) ? (((/* implicit */unsigned int) 2147483637)) : (212662646U)))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)27737))))) ? (2952979892U) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)27780)) + (((/* implicit */int) (short)-27780)))))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (~(((/* implicit */int) arr_10 [i_5 + 1] [i_4] [i_2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

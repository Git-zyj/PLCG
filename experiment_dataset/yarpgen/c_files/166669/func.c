/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166669
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
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)48))));
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = (+(((/* implicit */int) (unsigned char)48)));
                            var_20 = ((/* implicit */_Bool) (unsigned char)48);
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) (~((+(var_4)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 14; i_4 += 3) 
    {
        for (unsigned int i_5 = 2; i_5 < 12; i_5 += 1) 
        {
            {
                var_22 += ((/* implicit */signed char) (!((!((!(((/* implicit */_Bool) (unsigned short)32768))))))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 3; i_6 < 14; i_6 += 1) 
                {
                    for (signed char i_7 = 1; i_7 < 14; i_7 += 3) 
                    {
                        {
                            var_23 += ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)128))));
                            arr_20 [5ULL] [i_4] [i_5 + 1] = ((/* implicit */short) (-((~((-(var_15)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

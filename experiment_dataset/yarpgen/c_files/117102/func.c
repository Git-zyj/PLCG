/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117102
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
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) 2147483644);
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) ^ ((~(((/* implicit */int) (short)-23058))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) max((610213984U), (((/* implicit */unsigned int) var_9))))) ? (((((/* implicit */_Bool) 1709556180U)) ? (arr_13 [i_5]) : (((/* implicit */int) var_9)))) : (((arr_11 [i_0] [i_0] [i_0]) / (((/* implicit */int) var_3))))))));
                            arr_17 [i_0] [i_1] [i_5] = ((/* implicit */unsigned short) (-(272988137U)));
                            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) 1213596565))));
                            arr_18 [(_Bool)1] [i_1] [i_5] [i_1] &= ((/* implicit */unsigned int) (!(((((/* implicit */unsigned int) -1213596566)) == (var_6)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 3; i_7 < 23; i_7 += 4) 
    {
        for (int i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                {
                    arr_26 [i_7] [i_7] [i_9] = ((/* implicit */short) arr_22 [i_9] [i_7] [i_7]);
                    var_21 = ((/* implicit */int) max((((/* implicit */unsigned int) 184629878)), (2934617555U)));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119806
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) var_1))));
    var_14 = ((/* implicit */int) 1452842331U);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = var_10;
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) 18446744073709551605ULL))));
    }
    for (int i_1 = 2; i_1 < 14; i_1 += 2) 
    {
        var_16 &= ((/* implicit */unsigned short) 6ULL);
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 16; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            {
                                var_17 -= var_0;
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (unsigned char)21))));
                                arr_16 [i_1 + 2] [i_1 + 2] [i_3] [i_2] [i_2] [i_5] [i_4] = ((/* implicit */unsigned int) (short)-17897);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            {
                                arr_23 [i_1] [i_1] [i_1] [i_7] &= ((/* implicit */unsigned short) -1207623487);
                                var_19 *= ((/* implicit */signed char) (short)17917);
                                var_20 = ((/* implicit */int) (short)-17897);
                                var_21 = (signed char)117;
                                arr_24 [i_6] [i_2] [i_1] = ((/* implicit */_Bool) var_2);
                            }
                        } 
                    } 
                    var_22 *= ((/* implicit */unsigned long long int) var_4);
                }
            } 
        } 
        arr_25 [i_1] = ((/* implicit */int) var_2);
        var_23 -= ((/* implicit */signed char) 7460366330533814248ULL);
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (signed char)77))));
    }
}

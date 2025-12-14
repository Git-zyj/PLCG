/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113035
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        arr_9 [i_0] [i_3] = (!(((/* implicit */_Bool) arr_6 [(unsigned char)6] [i_2] [i_1] [i_0])));
                        var_10 = ((/* implicit */unsigned short) ((long long int) (short)4555));
                    }
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) var_0))));
                        var_12 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)49)) ^ (-1833041692)));
                        arr_14 [i_0] [i_0] [i_0] [i_2] [i_4] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((-5808723544921961879LL), (-3256770546007579202LL))))));
                    }
                    var_13 = ((/* implicit */unsigned short) ((unsigned int) min((3256770546007579183LL), (((/* implicit */long long int) arr_6 [i_2] [i_0] [i_0] [i_0])))));
                    arr_15 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0])) || (((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) arr_13 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (3256770546007579197LL)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) max(((~(-3256770546007579186LL))), (((/* implicit */long long int) (((+(var_6))) << (((max((((/* implicit */long long int) (unsigned char)139)), (9155828777099280179LL))) - (9155828777099280158LL))))))));
    var_15 = ((/* implicit */long long int) ((unsigned long long int) var_8));
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 20; i_5 += 2) 
    {
        for (unsigned char i_6 = 1; i_6 < 17; i_6 += 3) 
        {
            {
                arr_23 [i_5] = ((/* implicit */_Bool) (-((((~(var_6))) >> (((var_5) + (1135646699)))))));
                var_16 -= ((/* implicit */unsigned int) max((min((var_7), (((/* implicit */long long int) arr_16 [i_5 + 1] [i_5 + 1])))), (min((-3256770546007579201LL), (3256770546007579170LL)))));
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_21 [i_5] [i_5]))));
                arr_24 [i_5 + 1] [(short)2] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)71))))) ? (((((/* implicit */_Bool) ((10567246027778194638ULL) | (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned long long int) var_0)) : (((unsigned long long int) 2155684319U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12847)) ? (((/* implicit */long long int) var_5)) : (var_2)))) ? (((var_0) << (((((/* implicit */int) (unsigned short)12845)) - (12845))))) : (((/* implicit */int) var_1)))));
}

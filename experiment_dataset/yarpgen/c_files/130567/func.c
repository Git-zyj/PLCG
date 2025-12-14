/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130567
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
    var_10 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)64163)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-32))))) : (((/* implicit */int) (unsigned short)48443))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) min((arr_4 [i_1]), (((unsigned char) 4196799110468972095LL))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */unsigned int) (unsigned short)48447);
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)17068)) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (-4196799110468972093LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534)))));
                    }
                    arr_11 [i_0] [i_1] = ((/* implicit */unsigned int) min(((~(max((((/* implicit */long long int) 2083232091)), (-1756312605045322661LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) (unsigned short)65533))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)3))));
}

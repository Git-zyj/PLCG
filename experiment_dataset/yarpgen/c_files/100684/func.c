/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100684
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        arr_10 [i_0 - 1] [i_2] [2U] [i_3] = ((/* implicit */long long int) var_9);
                        arr_11 [i_2] = ((/* implicit */unsigned char) ((arr_0 [i_2 - 1] [i_0 + 1]) != (arr_0 [i_2 - 1] [i_0 - 1])));
                    }
                    for (long long int i_4 = 4; i_4 < 11; i_4 += 3) 
                    {
                        arr_16 [i_0 - 1] [i_1 + 2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3459))) + (var_9)))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (16798268906690196954ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_13) == (((/* implicit */int) (unsigned short)8192))))) / (((/* implicit */int) (short)-3460)))))));
                        var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) >> (((arr_3 [i_0]) + (5568513505099180494LL)))));
                        var_18 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) < (16798268906690196954ULL))))) - ((+(arr_3 [i_4 - 1])))));
                    }
                    var_19 = (unsigned short)24891;
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) (+(((unsigned long long int) (+(-3105907902909478427LL))))));
    var_21 &= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) >> (((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (var_14)))) ? (((/* implicit */int) ((var_14) <= (((/* implicit */long long int) ((/* implicit */int) var_16)))))) : ((-(((/* implicit */int) (unsigned short)24891))))))));
    var_22 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) min((var_16), (((/* implicit */short) (_Bool)0))))))), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && ((!(((/* implicit */_Bool) 977482061109301999ULL)))))))));
    var_23 &= ((/* implicit */signed char) (-(var_9)));
}

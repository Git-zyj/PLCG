/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177153
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
    var_12 = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)5509))) - (2592727176490656625ULL)))));
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((5187283306163969981ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) (short)-31164)) : (((/* implicit */int) (_Bool)0))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0 + 1] [i_0] [i_2] = ((/* implicit */long long int) (-(max((1048575ULL), (((/* implicit */unsigned long long int) (signed char)-1))))));
                    var_14 = ((/* implicit */_Bool) var_2);
                    var_15 = min((max((((/* implicit */short) ((_Bool) (signed char)66))), (var_9))), (((/* implicit */short) (unsigned char)9)));
                    arr_9 [i_0] [i_1] = (+(min((max((((/* implicit */int) (short)32767)), (1037661395))), (((/* implicit */int) var_0)))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5066076885481514661LL)) ? (5066076885481514639LL) : (((/* implicit */long long int) 1153411712U))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_0] [11U] [i_0] [i_3 + 2]))) : (((((/* implicit */_Bool) max((3153546202U), (((/* implicit */unsigned int) var_0))))) ? (((6800092384232265047ULL) >> (((-5372950366445843104LL) + (5372950366445843136LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                        arr_12 [i_1] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (1718746371U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1]))))))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 11; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [(_Bool)1]))) : (max((var_7), (((/* implicit */unsigned int) var_9))))))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_2 - 1]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (-(var_7)))))))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (5066076885481514639LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_13 [i_4] [i_1]) << (((arr_7 [i_4] [1ULL] [1ULL] [i_4]) - (116564210)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (-5066076885481514629LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)99)))))))))) : (((((/* implicit */_Bool) ((int) var_9))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((unsigned int) 2094971152U)))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_19 [i_0] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))));
                        arr_20 [i_0] [i_5] [i_2] [i_5] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_16 [i_5] [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_14 [i_0] [i_0] [i_5] [i_1] [(short)1] [i_5]))))))));
                    }
                }
            } 
        } 
    } 
}

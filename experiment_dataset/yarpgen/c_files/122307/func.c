/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122307
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
    var_14 = ((/* implicit */unsigned short) (!(((_Bool) max((((/* implicit */unsigned long long int) var_0)), (var_1))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (3734086928U)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) < (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (var_6))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25248))) - (var_13)))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-10)) + (((/* implicit */int) arr_2 [i_0] [i_0]))))) : (max((6681431682890920261LL), (((/* implicit */long long int) arr_1 [i_0]))))))));
        var_16 = arr_2 [i_0] [i_0];
        var_17 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) % (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)670)) + (((/* implicit */int) (_Bool)0)))))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-75)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                {
                    arr_11 [i_1] [i_1] [i_2] [i_1] &= min((((/* implicit */unsigned int) var_2)), (arr_5 [i_3]));
                    var_19 += ((/* implicit */signed char) var_12);
                    arr_12 [i_1] = ((/* implicit */signed char) var_2);
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_5 [i_1])) * (((((/* implicit */unsigned long long int) 3823935976019386671LL)) & (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_9 [i_1] [i_1] [i_3])))))));
                }
            } 
        } 
        arr_13 [12ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_8 [i_1] [i_1]) : (arr_8 [i_1] [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)9909)) ? (818561496) : (818561510)))) : (((arr_8 [i_1] [i_1]) - (arr_8 [i_1] [i_1])))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4])) ? (arr_15 [i_4]) : (((/* implicit */long long int) var_4))))) ? (((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_14 [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_14 [i_4]))))))));
        var_22 = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
        arr_16 [i_4] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (((3511899437177239820ULL) * (((/* implicit */unsigned long long int) arr_14 [i_4])))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        arr_19 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) != (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        arr_20 [i_5] = ((/* implicit */_Bool) var_1);
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_6 [i_5]))));
        var_24 = ((((/* implicit */unsigned long long int) 0U)) != (11377177163306297482ULL));
    }
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_13)))) || (((/* implicit */_Bool) ((((var_1) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_7))))))))));
    var_26 = ((3927083881U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126762
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
    var_10 = ((/* implicit */long long int) var_9);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-24978)) && (((/* implicit */_Bool) 1382284756))));
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)42))) | (288089638663356416LL))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) min((var_12), ((((((_Bool)1) ? (1382284770) : (((/* implicit */int) var_5)))) > (((/* implicit */int) (unsigned char)221))))));
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) + ((+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)162)) && (((/* implicit */_Bool) -376265596))))))))))));
        arr_6 [i_1 + 1] [i_1 + 1] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)128)) ^ (-1382284770)))) ? (((/* implicit */int) (short)-22376)) : (((/* implicit */int) (unsigned short)27617)));
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-22376)) ? (((/* implicit */int) var_9)) : (-1382284770))) % (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-22376)) : (-1382284753))))))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43399)) ? (328494031) : (((/* implicit */int) (unsigned char)63))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-3820276714399196102LL)));
    }
    for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */int) var_2);
        var_17 += ((/* implicit */short) var_5);
        arr_9 [i_2] = ((/* implicit */_Bool) (((!((_Bool)0))) ? (-3820276714399196090LL) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)-1)) & (-1382284765))))));
        var_18 += ((/* implicit */signed char) ((((((/* implicit */_Bool) -1382284753)) && (((/* implicit */_Bool) (signed char)-98)))) || (((/* implicit */_Bool) (unsigned char)255))));
    }
    for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 4) /* same iter space */
    {
        arr_12 [i_3 + 1] [i_3] = ((/* implicit */int) (((!(((/* implicit */_Bool) 18446744073709551615ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (1501785973583094425LL))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_5))))) * (((((/* implicit */_Bool) -1382284757)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)122))))));
        arr_13 [i_3 + 1] [i_3 - 2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_6)) / (2147483647)))) * ((-(-1179380742316290360LL)))));
    }
    var_20 = ((/* implicit */_Bool) max((var_20), (var_9)));
}

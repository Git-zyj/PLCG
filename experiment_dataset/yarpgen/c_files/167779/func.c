/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167779
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
    var_12 = ((/* implicit */unsigned long long int) ((unsigned short) max((var_2), (((/* implicit */unsigned short) var_10)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_13 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_2 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40053)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (7870658164086889723LL)));
        var_14 = (_Bool)1;
    }
    for (long long int i_1 = 3; i_1 < 13; i_1 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_7)))) ? (min((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)107))) : (5079328766486737980LL))))) : (((/* implicit */long long int) ((/* implicit */int) max((var_1), ((signed char)86)))))));
        var_16 &= ((/* implicit */_Bool) (~(((unsigned int) 11501600884534523948ULL))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) arr_7 [i_2 - 1] [i_1 - 3]);
            var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) (unsigned short)56480)))))) <= (((/* implicit */int) var_5))));
            arr_9 [i_1] [i_1] = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) 4252640670U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9048))) : (9352409760508806405ULL))), (((/* implicit */unsigned long long int) -6630368809654352797LL)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), (min((var_9), (((/* implicit */long long int) arr_3 [i_1] [i_2])))))))));
            var_19 |= ((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) arr_7 [i_2 - 1] [i_1 + 2])))));
        }
    }
    /* LoopSeq 2 */
    for (short i_3 = 1; i_3 < 23; i_3 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) (signed char)93);
        var_21 = ((/* implicit */signed char) max((var_21), (var_6)));
        var_22 = ((/* implicit */signed char) (_Bool)1);
    }
    for (short i_4 = 1; i_4 < 23; i_4 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_9))));
        arr_17 [(signed char)6] &= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) var_11)) / (((/* implicit */int) (unsigned char)13)))) : ((+(((/* implicit */int) var_0)))))), (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
        arr_18 [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)102)))), (((/* implicit */int) min((arr_0 [i_4 + 1] [i_4]), (var_6))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) 32760U)) : (max((3082040490636113865ULL), (((/* implicit */unsigned long long int) (signed char)-126))))))));
    }
    var_24 -= ((/* implicit */long long int) var_11);
}

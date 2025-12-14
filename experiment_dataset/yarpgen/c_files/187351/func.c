/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187351
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
    var_20 += ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) 1009102455)) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) (signed char)-70)))), (((/* implicit */int) (unsigned short)65535)))), (var_1)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_10 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) 13096826038924128458ULL);
                    var_21 = ((/* implicit */unsigned long long int) min((min((3645019742U), (((/* implicit */unsigned int) (unsigned short)4)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-70))) ? (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (signed char)70))))) : (min((((/* implicit */int) (signed char)70)), (438872347))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) 3385716035U))) ? (((/* implicit */int) min(((signed char)92), ((signed char)-70)))) : (((((/* implicit */_Bool) -438872340)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (signed char)-102))))))), (min((9223372036854775807LL), (((/* implicit */long long int) (short)-12461))))));
    }
    /* vectorizable */
    for (short i_3 = 2; i_3 < 15; i_3 += 1) 
    {
        var_23 |= ((/* implicit */unsigned long long int) ((unsigned int) 3645019742U));
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (649947553U) : (((/* implicit */unsigned int) -438872310)))))));
        var_25 += ((/* implicit */_Bool) (signed char)120);
        var_26 = ((/* implicit */unsigned char) ((signed char) (_Bool)1));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                {
                    arr_17 [i_3] [i_3] [i_3 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-8642)) ? (504537294742623980LL) : (((/* implicit */long long int) 3645019742U))));
                    arr_18 [i_3] [(_Bool)1] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 991742128U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-23487))) : (-2216526178286914593LL)));
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -7LL)) ? (((/* implicit */int) (short)-8619)) : (((/* implicit */int) (signed char)-106))));
                }
            } 
        } 
    }
}

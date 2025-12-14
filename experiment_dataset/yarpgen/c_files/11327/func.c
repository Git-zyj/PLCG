/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11327
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)4038)) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) (signed char)1))))), (var_3)))) ? (-168676472) : (((/* implicit */int) (unsigned char)125))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) 4294967295U);
        arr_5 [i_0] = ((/* implicit */unsigned char) ((var_2) - (((/* implicit */int) (signed char)122))));
        arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) || (((((/* implicit */int) min(((unsigned short)65518), (((/* implicit */unsigned short) (signed char)-123))))) < (168676481)))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1])) << (((/* implicit */int) ((((/* implicit */int) (short)-4271)) > (((/* implicit */int) var_12)))))));
            arr_10 [i_0] [i_0] [i_1] = (+(((((/* implicit */_Bool) min((var_19), (var_9)))) ? (((/* implicit */int) arr_8 [i_1] [0ULL] [7U])) : (min((((/* implicit */int) arr_8 [i_1] [i_1] [i_0])), (-168676472))))));
        }
        /* LoopNest 3 */
        for (unsigned short i_2 = 4; i_2 < 20; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    {
                        arr_20 [i_2] [i_4] = arr_12 [(unsigned short)19] [i_3] [14U];
                        var_22 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_3 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_3] [i_4])))))) - (min((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122))) : (arr_16 [i_0] [i_2] [i_3] [i_4]))))))));
                        var_23 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_15 [i_2 - 4] [i_2 - 4] [i_2 - 1])) ? (((/* implicit */unsigned int) -168676475)) : (1181915634U)))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */_Bool) var_17);
    var_25 = ((/* implicit */unsigned long long int) -168676472);
}

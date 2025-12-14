/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154886
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0 - 1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) 4194272)) ? (((((/* implicit */_Bool) (signed char)-67)) ? (-455693370) : (-455693378))) : (-455693388)));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) 4194272))));
        var_18 = ((/* implicit */long long int) (signed char)-114);
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (short i_2 = 4; i_2 < 14; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                {
                    var_19 -= ((/* implicit */signed char) var_9);
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1771129278)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-114))));
                    var_21 = ((/* implicit */long long int) arr_0 [i_1]);
                }
            } 
        } 
        var_22 *= ((((/* implicit */_Bool) (unsigned short)57839)) ? (((unsigned long long int) arr_5 [i_1] [10ULL])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), ((unsigned short)28108)))) && ((!(((/* implicit */_Bool) arr_3 [i_1])))))))));
        arr_11 [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (var_4)))) ? (((((/* implicit */_Bool) var_14)) ? (arr_3 [13LL]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-125))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_10 [i_1] [0ULL] [(_Bool)1])) : (-1771129279)))))), (((/* implicit */long long int) max(((!(((/* implicit */_Bool) (signed char)54)))), ((!(((/* implicit */_Bool) var_14)))))))));
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_4] [i_4] [i_4] [i_4]) != (arr_9 [i_4] [i_4] [i_4] [i_4]))))) / (((((/* implicit */_Bool) arr_9 [i_4] [i_1] [i_1] [i_4])) ? (arr_9 [i_4] [i_1] [i_1] [i_4]) : (arr_9 [i_4] [i_4] [i_4] [i_4]))))))));
            var_24 = ((/* implicit */signed char) arr_9 [i_1] [i_4] [i_1] [i_1]);
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            var_25 = ((/* implicit */short) ((long long int) var_5));
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) arr_13 [(_Bool)1])) ? (arr_13 [4LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 15; i_6 += 1) 
            {
                for (short i_7 = 2; i_7 < 14; i_7 += 1) 
                {
                    {
                        arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) -1684321522);
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [(_Bool)1])) || (((/* implicit */_Bool) (signed char)-12)))))));
                        var_28 -= ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 12952334)))) : (((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)))));
                        var_29 += ((/* implicit */long long int) -455693370);
                    }
                } 
            } 
        }
    }
    var_30 = ((/* implicit */unsigned int) ((unsigned short) (signed char)-88));
}

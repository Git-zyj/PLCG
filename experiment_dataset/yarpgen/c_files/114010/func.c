/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114010
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) (short)8192);
                        var_15 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) arr_2 [i_0 + 2])) : (((/* implicit */int) var_8))))) ? ((+(((/* implicit */int) arr_5 [2LL])))) : (((/* implicit */int) arr_8 [i_3 + 2] [i_3] [i_3] [i_3 + 1]))));
                        var_16 = (unsigned char)31;
                        arr_14 [i_1 - 1] [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) min((arr_0 [i_0 - 2]), (arr_0 [i_0 + 3])))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)2)), ((unsigned short)40647)))) ? (((/* implicit */int) arr_1 [i_0 + 3])) : (((/* implicit */int) arr_0 [i_0 + 3]))))));
                        var_17 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((arr_3 [(unsigned char)4]), (var_6)))), ((~(arr_9 [(unsigned char)4])))))), (7217068358736075308ULL)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            for (unsigned char i_5 = 2; i_5 < 16; i_5 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (unsigned char)232))));
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0]);
                }
            } 
        } 
    }
    var_19 = ((/* implicit */_Bool) (~(var_7)));
    var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40671))) : (var_9)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_12))))), (((/* implicit */long long int) var_5))));
    var_21 |= ((/* implicit */unsigned long long int) max((((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_2))))))), (var_6)));
}

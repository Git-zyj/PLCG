/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177129
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
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))), (((((/* implicit */_Bool) max((var_15), (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : ((-(70368744177662ULL)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */int) min((var_18), (arr_0 [i_0] [i_0])));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (18446673704965373960ULL)))) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_3))))))));
                        arr_14 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (+((~((~(((/* implicit */int) (unsigned char)86))))))));
                        var_21 ^= ((/* implicit */signed char) ((max((max((((/* implicit */unsigned long long int) (signed char)16)), (70368744177675ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))))) >> (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) > (((/* implicit */int) (signed char)72)))))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)20)), (var_6))))))) ? (arr_12 [i_0] [i_1 + 1] [i_2] [i_3]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (var_15) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)77))))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
    {
        var_23 ^= ((/* implicit */signed char) (unsigned char)63);
        var_24 -= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */int) arr_6 [i_4] [i_4])) : (((/* implicit */int) (short)-25563))))));
        var_25 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 67108863))))) != (((/* implicit */int) ((((/* implicit */int) (signed char)-42)) < (((/* implicit */int) var_13)))))));
    }
    var_26 = ((/* implicit */unsigned long long int) var_16);
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_12)), (var_16)))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)125))))) == (((/* implicit */int) var_16))))) : (((/* implicit */int) (unsigned char)7))));
}

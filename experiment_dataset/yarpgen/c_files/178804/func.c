/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178804
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
    var_17 |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (+(-186150040)))) ? (((/* implicit */unsigned long long int) 2056516592)) : (0ULL))), (((/* implicit */unsigned long long int) 0LL))));
    var_18 = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) 186150037)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                                arr_14 [i_0] [i_1] [i_2] [9ULL] [i_1] [9ULL] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4197552678204809159ULL)) || (((/* implicit */_Bool) 18013848753668096LL))))) : (((/* implicit */int) ((unsigned short) var_8)))))) : (18446744073709551615ULL)));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [(signed char)8] [i_2 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) var_4)))))) ? (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)44363)))) < (arr_2 [i_0])))) : (((/* implicit */int) var_10))));
                    arr_16 [i_1] [5] [(unsigned short)7] [i_2] = ((/* implicit */unsigned short) -1LL);
                    arr_17 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (~((+(186150069)))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(unsigned short)8] [i_0] [i_0 + 1] [i_0]))) ^ (var_14)))) ? (((var_11) & (1LL))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0 - 2] [i_0])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [(unsigned short)5] [i_0 - 2] [i_0 + 1] [i_0])))))));
        var_21 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((-186150057) & (-186150057)))), (2319363208U)));
    }
}

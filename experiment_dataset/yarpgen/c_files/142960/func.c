/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142960
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)113)) ? (1209633068U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1209633068U)) ? (((/* implicit */unsigned long long int) arr_0 [i_3])) : (arr_4 [i_0] [i_3] [i_2])))) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (_Bool)0)))))));
                                arr_12 [i_0] [i_0] [(unsigned char)13] [i_0] [i_0] = ((/* implicit */_Bool) arr_10 [i_4] [i_3] [(unsigned short)8]);
                                var_15 = ((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-103)));
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] [i_0] = ((/* implicit */signed char) -808878054);
            }
        } 
    } 
    var_16 -= ((/* implicit */int) ((unsigned char) (signed char)-88));
    var_17 = ((/* implicit */long long int) (_Bool)0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_5 = 2; i_5 < 20; i_5 += 2) 
    {
        var_18 += ((/* implicit */unsigned char) ((((_Bool) (_Bool)0)) ? (((/* implicit */int) arr_14 [i_5 - 1])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)51815)) > (((/* implicit */int) (unsigned short)41798)))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)113)) ? (((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */unsigned long long int) 808878054)) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_15 [i_5]))))));
    }
}

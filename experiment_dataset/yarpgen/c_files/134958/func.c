/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134958
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
    var_19 = ((/* implicit */int) var_0);
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((max((var_3), (((/* implicit */unsigned int) var_10)))) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
        var_21 = ((/* implicit */_Bool) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13))))), (max((((/* implicit */long long int) var_4)), (var_11))))) / (((/* implicit */long long int) ((/* implicit */int) var_4)))));
        var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) ((unsigned short) var_0))) - (((/* implicit */int) ((_Bool) var_14))))) - (((/* implicit */int) max((((short) var_0)), (((/* implicit */short) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_14))))))))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)159)) ? (-2081878553) : (((/* implicit */int) (short)28643))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_24 = ((/* implicit */int) min((var_24), (max((((/* implicit */int) var_4)), (((((((/* implicit */_Bool) (short)-10686)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (short)-1559)))) * (((/* implicit */int) var_18))))))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((var_12) < (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            for (short i_3 = 2; i_3 < 10; i_3 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -426077098)) ? (((/* implicit */int) (unsigned short)56711)) : (-123667956)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (var_12)))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (signed char i_5 = 1; i_5 < 7; i_5 += 4) 
                        {
                            {
                                arr_17 [(signed char)2] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)56711), (((/* implicit */unsigned short) (_Bool)1)))))) : (-3595570819453524843LL)));
                                var_27 |= ((/* implicit */short) var_2);
                                arr_18 [i_1] [i_3] [i_1] [6LL] [10ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))))) ? (max((((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_17))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (var_9)))) || (((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) var_15)))))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */short) var_1);
                }
            } 
        } 
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143819
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
    var_13 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (signed char)-43)), (max((((/* implicit */unsigned int) var_10)), (3545049880U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((var_3), (var_3)))) : (((/* implicit */int) var_0)))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_8)))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3809884471U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min((var_3), (var_5))))));
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_12)) ? (var_10) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (var_10))))), (max((((((/* implicit */_Bool) 67107840U)) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_11)))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_12 [i_2] [i_2] = ((/* implicit */signed char) max((((/* implicit */long long int) min(((unsigned char)0), (var_1)))), (((((/* implicit */_Bool) (short)2)) ? (-299275061094384134LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                        var_17 -= ((/* implicit */int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) min((var_2), (((/* implicit */int) var_7))))) : (max((131071U), (((/* implicit */unsigned int) (unsigned char)252)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2453472788448595508LL)) ? (-2060617636) : (((/* implicit */int) (unsigned char)244)))))));
                    }
                    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) ((var_3) ? (var_10) : (((/* implicit */int) var_3))))) ? (max((var_2), (((/* implicit */int) var_5)))) : (((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_5)))))))));
                }
            } 
        } 
    } 
}

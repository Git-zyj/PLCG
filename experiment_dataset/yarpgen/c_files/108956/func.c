/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108956
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
    var_11 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8191))) - (var_7)))) ? ((-(((/* implicit */int) (signed char)1)))) : (((((/* implicit */_Bool) -7831982340520664679LL)) ? (((/* implicit */int) (unsigned short)18153)) : (((/* implicit */int) var_9)))))) + (2147483647))) << (((((((((/* implicit */_Bool) (-(3574026301U)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned char) var_4)))))))) + (5477936308044835173LL))) - (24LL)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_12 ^= (-(((/* implicit */int) var_10)));
                var_13 = ((/* implicit */signed char) var_6);
                arr_7 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) | (720940994U)))) ? (((long long int) arr_6 [i_0 + 2])) : (((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0] [(unsigned short)11])) >= (((/* implicit */int) var_0)))) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) ((unsigned short) var_0))))))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (+(((/* implicit */int) (((-(var_2))) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (939524096U) : (var_1))))))))))));
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */signed char) var_4)), (var_9))))) ? ((-(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) arr_5 [i_0])) : (arr_4 [i_0 - 1] [i_0 - 1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_0] [18]), (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)67), (((/* implicit */unsigned char) var_4)))))) : (((unsigned int) var_2)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((var_10) ? (((((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))) / (((/* implicit */int) var_8)))) : (((/* implicit */int) var_0))));
    var_17 = ((/* implicit */unsigned long long int) (unsigned short)52675);
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) -4924853546735891953LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) var_8)))))) : (var_7)));
}

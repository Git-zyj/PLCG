/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116083
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [10ULL] = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_18)))) != (((/* implicit */int) max(((signed char)3), (((/* implicit */signed char) max(((_Bool)1), ((_Bool)1)))))))));
                arr_6 [i_0] [(short)0] [i_1] = ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)98))) != (((((/* implicit */_Bool) -2863055946913093480LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (-2863055946913093480LL))))), (((((/* implicit */unsigned long long int) arr_0 [i_1] [i_0])) != (arr_2 [i_1])))));
                arr_7 [i_0] [(unsigned char)4] [i_1] |= ((/* implicit */long long int) (+(((((/* implicit */int) min(((_Bool)0), ((_Bool)1)))) - (((/* implicit */int) ((((/* implicit */_Bool) 878117426)) && ((_Bool)1))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((/* implicit */int) (_Bool)1)), (max((((((/* implicit */_Bool) 2060535427U)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) ((unsigned short) var_5))))))))));
    var_21 = ((/* implicit */signed char) ((4U) == (812212180U)));
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min((((unsigned short) (signed char)31)), (((/* implicit */unsigned short) var_13))))) : ((+(((/* implicit */int) (signed char)-20)))))))));
}

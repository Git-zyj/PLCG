/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18839
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_17 ^= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 9853361384008340921ULL)))))));
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)45805)) | (((/* implicit */int) var_14))))) ? (((/* implicit */int) ((((/* implicit */int) var_16)) >= (-1110711947)))) : (arr_0 [i_0])))) ? (max((((/* implicit */unsigned int) (((_Bool)1) ? (arr_4 [(unsigned short)8] [i_0] [(_Bool)1]) : (((/* implicit */int) arr_1 [i_1]))))), (var_2))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) (unsigned char)23)))) : (((/* implicit */int) (!((_Bool)0))))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_4))));
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min(((((_Bool)1) ? (((long long int) (unsigned char)232)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) min((((/* implicit */int) ((_Bool) -884764198))), (((((/* implicit */int) var_1)) | (((/* implicit */int) var_11))))))))))));
}

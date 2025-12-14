/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145197
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
    var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 16646443442821873736ULL)) ? (var_4) : (16646443442821873736ULL)))) || (((/* implicit */_Bool) ((unsigned int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 16646443442821873736ULL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) : (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [(unsigned char)7] [i_0])) ? (4940122960159941893ULL) : (((/* implicit */unsigned long long int) arr_6 [i_3] [i_0]))));
                        var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(1800300630887677880ULL)))) || ((!(((/* implicit */_Bool) arr_2 [i_0]))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned short) (signed char)-77);
        arr_10 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1835476108468323863LL)) && (((/* implicit */_Bool) arr_2 [i_0]))));
    }
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (var_4)))));
    var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1835476108468323863LL))))), (var_7)));
}

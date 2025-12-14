/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142410
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
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned long long int) 7296765960587543710LL))))) ? (((/* implicit */int) ((unsigned short) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)232)))))) : (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) var_5)) >= (7250727661537117632ULL)))))))));
        var_16 -= ((/* implicit */unsigned short) ((min((arr_2 [i_0 - 2] [i_0 - 1]), (arr_2 [i_0 - 3] [i_0 + 1]))) % (arr_2 [i_0 - 2] [i_0])));
        var_17 = ((/* implicit */int) ((872321728U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1]))) : (var_11)))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-103))) / (8968239387009298755LL))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)24), ((unsigned char)24)))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)24)) ? (max((((/* implicit */unsigned long long int) 8202018959007178444LL)), (var_9))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (8723772762556081706LL))))))) ? (((/* implicit */int) min((((/* implicit */short) arr_5 [i_0 - 2] [i_1])), ((short)-23551)))) : (max((1665773190), (((/* implicit */int) min(((_Bool)1), ((_Bool)0))))))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_10)) * (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) -8538967536544363334LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (3360293449540579053ULL)))))));
}

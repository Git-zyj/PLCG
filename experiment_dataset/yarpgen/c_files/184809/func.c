/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184809
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
    var_12 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(var_8)))) || (var_9))) ? (min((max((((/* implicit */long long int) (unsigned short)54180)), (7601015766206277213LL))), (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) 846199435U))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) 3078348351U)) || (((/* implicit */_Bool) (unsigned short)11865))))), (((((/* implicit */_Bool) -7601015766206277213LL)) ? (((/* implicit */int) (short)9426)) : (((/* implicit */int) (signed char)-60))))))))))));
                    var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((-262144) < (((/* implicit */int) (_Bool)1)))), ((_Bool)1))))) - ((-(arr_4 [i_0] [i_1] [i_0] [5LL])))));
                    var_15 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) min((var_5), (((/* implicit */unsigned int) (signed char)-32))))), (((long long int) var_4)))), (((/* implicit */long long int) ((((/* implicit */int) (short)5446)) < (((/* implicit */int) var_2)))))));
                }
            } 
        } 
    } 
    var_16 = ((((((/* implicit */long long int) ((unsigned int) var_2))) - (((((/* implicit */long long int) ((/* implicit */int) var_2))) - (var_8))))) / (((/* implicit */long long int) var_5)));
    var_17 = ((/* implicit */unsigned int) 1556280449287448835LL);
}

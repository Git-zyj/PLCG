/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181415
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (max((526200458U), (567764184U))) : (3727203111U))) + (((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_1 [i_0]))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) -990395890);
                arr_6 [i_0] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (-3619372072459421876LL) : (((/* implicit */long long int) ((/* implicit */int) (!(var_7))))))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (+(((((((/* implicit */_Bool) 255U)) || (((/* implicit */_Bool) 9218868437227405312ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_12)) : (arr_3 [i_0])))) : (((12062304896893857840ULL) << (((((/* implicit */int) (short)-1)) + (52)))))))));
            }
        } 
    } 
    var_20 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_1)) + (21233)))))) ? (9218868437227405312ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) ^ (((/* implicit */unsigned long long int) var_11))));
}

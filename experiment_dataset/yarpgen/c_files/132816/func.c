/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132816
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
    var_13 = ((/* implicit */int) ((2911745488U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)211)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) 1383221807U))) % (((/* implicit */int) (unsigned char)10))));
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_1)) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((3828434325U) > (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (144115188075855872ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123))) ^ (2091517653U))))))));
            }
        } 
    } 
    var_15 += ((/* implicit */short) (-(((/* implicit */int) (short)-13871))));
}

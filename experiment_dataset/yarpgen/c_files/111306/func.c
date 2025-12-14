/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111306
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
    var_15 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) 789035244U)), ((~(((-8718188648269048144LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)31)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                var_16 = var_14;
                arr_4 [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (unsigned char)146)) : (-1459201419)));
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_1 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_1 - 1])) ^ (((((/* implicit */int) (short)18135)) | (-385536985))))))));
            }
        } 
    } 
}

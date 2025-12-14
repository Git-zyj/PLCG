/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149696
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)94)) : (var_3))) << (((max((((/* implicit */long long int) -207197568)), (var_5))) + (207197575LL))))), ((~(((/* implicit */int) (unsigned char)3))))));
                    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)161))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)187)) > (((/* implicit */int) (unsigned char)180)))))) : (((((/* implicit */long long int) 1732239328)) / (-25LL)))))) ? (((/* implicit */long long int) max((max((arr_2 [i_0] [i_0]), (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2])))), (((/* implicit */int) (unsigned char)0))))) : (((arr_4 [i_2] [i_2] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) max((var_2), (var_2))))))))))));
                }
            } 
        } 
    } 
    var_12 = max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) -25LL))))), ((unsigned char)177));
}

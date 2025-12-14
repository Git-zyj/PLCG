/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168916
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)8)) - (((/* implicit */int) arr_0 [i_0]))))), (((((/* implicit */_Bool) (~(3930006029369822418LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (-5739989608010591676LL))))) : (min((((/* implicit */long long int) arr_0 [(_Bool)1])), (var_13)))))));
        arr_3 [i_0] = ((/* implicit */int) ((((var_7) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65528))) : ((((_Bool)0) ? (var_11) : (((/* implicit */long long int) var_12)))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */long long int) var_3);
                    arr_9 [i_2] [i_1] = ((/* implicit */long long int) arr_8 [i_2] [i_1] [(unsigned short)4]);
                }
            } 
        } 
    }
    var_18 = min((((/* implicit */long long int) ((_Bool) ((1927089617) & (((/* implicit */int) var_7)))))), (var_14));
}

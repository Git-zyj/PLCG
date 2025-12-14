/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168715
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
        for (long long int i_1 = 1; i_1 < 6; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 5869683381816064556LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (-6823892352629741001LL))) >= (((long long int) (_Bool)1)))))) <= (((((/* implicit */_Bool) 6270967321738830354LL)) ? (((arr_4 [i_0] [i_0] [(_Bool)1]) ? (9223372036854775807LL) : (2056105791587775360LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (var_8)))))))));
                arr_6 [i_0] [i_1] [(_Bool)1] = ((/* implicit */long long int) max((max((arr_4 [i_1 + 4] [i_1] [i_1 - 1]), ((!(var_6))))), ((!(((/* implicit */_Bool) 3591682586720876999LL))))));
                var_10 = ((/* implicit */_Bool) 6270967321738830372LL);
            }
        } 
    } 
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) 2056105791587775360LL))));
    var_12 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) -3141862892721349660LL))));
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 3; i_4 < 9; i_4 += 4) 
            {
                {
                    arr_14 [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2]))))) > (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_13 [i_3] [(_Bool)1] [i_4 + 1])) : (((/* implicit */int) arr_13 [i_2] [(_Bool)1] [i_4 + 1]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_13 = (!(arr_3 [i_2] [i_2] [i_4 - 3]));
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) -6270967321738830370LL)) || (((/* implicit */_Bool) arr_15 [i_5 - 1] [0LL] [(_Bool)1] [i_4 - 1]))));
                    }
                }
            } 
        } 
    } 
}

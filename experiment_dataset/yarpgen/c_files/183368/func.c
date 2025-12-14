/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183368
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
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) -65155765)) > (min((-8442553141772952063LL), (((/* implicit */long long int) (short)32767))))))) <= (((/* implicit */int) var_12)))))));
    var_15 = ((/* implicit */signed char) (unsigned char)162);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) 0U)))))));
        arr_4 [i_0] = (unsigned short)17;
        var_17 = ((/* implicit */short) 1459603683);
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_12))));
        arr_6 [i_0] = ((/* implicit */long long int) (_Bool)1);
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            {
                arr_13 [i_2] [10U] = ((/* implicit */_Bool) (unsigned char)8);
                var_18 ^= (!(((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)14)), (288230376151187456LL)))));
                arr_14 [i_2] [i_1] = ((/* implicit */short) var_8);
                arr_15 [i_1 + 1] = (-(3761829806U));
            }
        } 
    } 
}

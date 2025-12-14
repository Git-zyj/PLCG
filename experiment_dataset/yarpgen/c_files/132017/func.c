/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132017
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_15 = ((((long long int) (signed char)92)) + (((/* implicit */long long int) ((/* implicit */int) (signed char)63))));
        var_16 += ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((arr_3 [i_1]) * (arr_3 [i_1])));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (~(-1547717341))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((unsigned long long int) -568984058)) > (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) ^ (var_9))))));
    }
    var_18 = ((/* implicit */signed char) var_7);
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        for (signed char i_3 = 3; i_3 < 21; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                {
                    var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_13 [i_2] [i_3])), (arr_15 [i_3 - 3] [i_3 - 3] [i_3] [i_2])))) ? (((/* implicit */int) ((short) ((signed char) (short)9668)))) : (1450294702)));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (~(((/* implicit */int) arr_10 [i_2])))))));
                }
            } 
        } 
    } 
    var_21 = ((((/* implicit */_Bool) 1547717340)) ? (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)27719)) : (-1073741824))) << (((((int) (short)17741)) - (17726))))) : ((~(((/* implicit */int) min(((signed char)109), ((signed char)109)))))));
    var_22 &= ((/* implicit */short) (~(((/* implicit */int) var_8))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154902
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
    var_15 ^= ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))), (18446744073709551607ULL)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) ((short) arr_0 [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : ((~(((/* implicit */int) (signed char)126)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) max((((/* implicit */short) var_11)), (arr_1 [(unsigned char)7])))) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    var_17 = ((/* implicit */unsigned int) var_4);
    var_18 = ((/* implicit */int) ((var_3) - (max((((5543070865876722368ULL) + (((/* implicit */unsigned long long int) var_9)))), (var_3)))));
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            {
                var_19 -= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (12903673207832829271ULL))))) + ((-(min((((/* implicit */int) (short)3212)), (10)))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))) <= (max((((/* implicit */unsigned long long int) ((signed char) var_2))), (min((((/* implicit */unsigned long long int) var_5)), (arr_6 [i_1])))))));
                arr_9 [i_1] [i_1] = max((((/* implicit */long long int) ((signed char) ((signed char) (_Bool)1)))), (arr_3 [i_2]));
            }
        } 
    } 
}

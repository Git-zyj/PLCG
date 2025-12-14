/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112885
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((((_Bool) var_1)) ? (((/* implicit */int) max((((/* implicit */signed char) var_8)), (var_7)))) : ((~(((/* implicit */int) var_6)))))) : (((/* implicit */int) var_1))));
    var_15 = ((/* implicit */signed char) min((var_15), (var_5)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [(_Bool)1] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((unsigned int) arr_8 [i_2] [i_1] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) max((var_11), (var_7)))) ? (((long long int) var_9)) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_4 [i_1]))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        var_16 = max((((long long int) ((_Bool) (_Bool)1))), (((/* implicit */long long int) (!(arr_2 [i_2])))));
                        arr_13 [i_2] [i_2] = ((/* implicit */signed char) max((min((((int) var_4)), (((((/* implicit */int) var_11)) + (((/* implicit */int) arr_3 [(signed char)7] [i_1])))))), (((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)8))))));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((long long int) var_0)) == (arr_6 [i_0] [i_1] [(signed char)14]))))) / (arr_8 [i_0] [i_2] [i_3])));
                        arr_14 [i_2] [i_0] [(unsigned char)20] [i_3] = ((/* implicit */int) arr_11 [i_3]);
                    }
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))));
}

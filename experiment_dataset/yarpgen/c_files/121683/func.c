/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121683
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
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((min((11LL), (var_4))) ^ (((/* implicit */long long int) ((/* implicit */int) min((var_14), (((/* implicit */unsigned char) var_11)))))))))));
    var_19 += ((/* implicit */signed char) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) max((var_5), ((signed char)-32)))))), (((/* implicit */int) var_7))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((-11LL) | (((/* implicit */long long int) (~(((/* implicit */int) var_15))))))))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (~(((/* implicit */int) max((arr_0 [i_0] [i_0]), (var_7)))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_22 = var_5;
            var_23 = ((/* implicit */signed char) min(((~(arr_1 [i_0]))), (((/* implicit */long long int) max((((/* implicit */short) (((_Bool)0) || (((/* implicit */_Bool) var_14))))), (min(((short)-32750), (((/* implicit */short) arr_2 [i_0])))))))));
            var_24 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_3 [i_0] [(_Bool)1] [i_1])))) != (((/* implicit */int) min((var_0), (var_17))))));
        }
    }
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            {
                arr_9 [i_2] = ((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)0)))), (min((((/* implicit */int) (unsigned char)126)), (arr_8 [(signed char)8] [i_2] [i_2])))));
                arr_10 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) var_9);
                arr_11 [i_2] = min((max((max((((/* implicit */long long int) var_8)), (var_2))), (((/* implicit */long long int) (short)-32750)))), (var_2));
                arr_12 [i_2] [i_3] [(_Bool)1] |= ((/* implicit */unsigned short) (~((-(var_13)))));
            }
        } 
    } 
}

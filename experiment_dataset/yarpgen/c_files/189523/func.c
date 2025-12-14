/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189523
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
    var_15 = ((/* implicit */unsigned int) var_0);
    var_16 |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max((var_14), (var_2)))) : (max((((/* implicit */int) var_9)), (var_0)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (!(((((/* implicit */int) arr_5 [0] [(signed char)2] [i_1 + 1])) == (((((/* implicit */int) (_Bool)1)) - (arr_4 [i_0]))))))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_0] [i_1 - 1] [i_0])), (arr_1 [i_0] [10ULL])))), (min((arr_4 [i_0]), (((/* implicit */int) arr_1 [i_0] [i_1])))))), (((/* implicit */int) arr_2 [i_0] [i_0]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        arr_9 [(_Bool)1] [i_2] = ((/* implicit */_Bool) arr_7 [i_2]);
        arr_10 [13U] [13U] = ((/* implicit */unsigned char) arr_3 [i_2]);
    }
    for (signed char i_3 = 3; i_3 < 7; i_3 += 1) 
    {
        var_18 ^= ((/* implicit */unsigned short) (+(min((((long long int) arr_12 [i_3])), (arr_11 [i_3])))));
        var_19 |= ((/* implicit */unsigned char) ((-1016073316) * (((/* implicit */int) min((((/* implicit */short) (!((_Bool)1)))), (arr_7 [i_3]))))));
        var_20 |= ((/* implicit */_Bool) max((((/* implicit */long long int) ((int) arr_0 [12ULL]))), (max((arr_0 [6LL]), (arr_0 [(_Bool)1])))));
    }
}

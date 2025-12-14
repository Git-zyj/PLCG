/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173791
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        var_16 = ((/* implicit */int) ((unsigned short) ((unsigned char) arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 - 1])) + (((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) arr_3 [(unsigned char)7] [i_1])) : (((/* implicit */int) (unsigned char)241))))));
        var_18 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) * (-1LL))));
    }
    for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) + (arr_6 [i_2 + 1])))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213))) + (3647787779U)))));
        arr_7 [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_2 [i_2])) % (((/* implicit */int) arr_2 [i_2])))) == (((/* implicit */int) arr_2 [i_2]))));
        arr_8 [i_2] = max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_2 - 1] [i_2 - 1]))))), ((unsigned char)136));
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        for (unsigned char i_4 = 2; i_4 < 20; i_4 += 3) 
        {
            {
                var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_12 [i_4 - 1] [(unsigned char)6] [i_4 + 2]) ? (((/* implicit */int) arr_12 [i_4 - 1] [(unsigned char)10] [i_4 + 2])) : (((/* implicit */int) arr_12 [i_4 - 1] [(unsigned char)6] [i_4 + 2]))))) || (((((/* implicit */_Bool) (unsigned char)14)) && (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned char)14))))))));
                arr_13 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) < (((/* implicit */int) arr_11 [i_3]))))) * (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)15))))));
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)18))) / (min((((/* implicit */long long int) arr_12 [(_Bool)1] [(unsigned char)6] [i_3])), (((((/* implicit */_Bool) -244495273)) ? (-6880748171951262719LL) : (((/* implicit */long long int) -1467224038)))))))))));
                arr_14 [i_4] [i_4 + 1] = ((/* implicit */unsigned int) (unsigned char)240);
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126520
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
        var_19 = ((/* implicit */int) max((((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) arr_0 [i_0]))))) ? ((-(arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)118)))))), (((/* implicit */unsigned int) (unsigned char)118))));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((signed char) (unsigned short)30939)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)139))))))));
    }
    var_21 = ((/* implicit */signed char) (~((+(((/* implicit */int) var_7))))));
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (max((var_13), (((/* implicit */unsigned long long int) (unsigned char)169)))) : (((/* implicit */unsigned long long int) max((1013021020U), (((/* implicit */unsigned int) var_4)))))))))))));
    var_23 = ((/* implicit */int) var_7);
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 2) 
    {
        var_24 = ((/* implicit */signed char) arr_2 [i_1]);
        arr_5 [i_1] = ((/* implicit */short) ((long long int) min((arr_2 [i_1 - 1]), (arr_2 [i_1 + 2]))));
    }
    for (int i_2 = 2; i_2 < 11; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 12; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_15 [i_2] [i_2] [i_4] [i_4] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(arr_11 [i_3 + 1]))))));
                    var_25 -= ((/* implicit */unsigned long long int) max(((~(arr_14 [i_2 + 3] [i_3] [i_3] [i_4]))), (max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)116))))), (arr_7 [i_2 + 2])))));
                }
            } 
        } 
        arr_16 [i_2 - 2] = ((/* implicit */_Bool) (unsigned char)118);
        var_26 = ((/* implicit */short) ((unsigned int) arr_1 [i_2 - 1] [i_2]));
        var_27 = ((/* implicit */int) (signed char)0);
        arr_17 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)3)) > (((/* implicit */int) (signed char)0))));
    }
}

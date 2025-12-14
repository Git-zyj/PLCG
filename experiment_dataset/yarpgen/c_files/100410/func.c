/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100410
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
    for (unsigned int i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) min((((arr_2 [i_0 + 3]) != (((/* implicit */long long int) 3506504285U)))), (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_10))))) || ((!(((/* implicit */_Bool) arr_2 [i_0]))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) arr_2 [i_0]);
        arr_5 [i_0] = ((/* implicit */short) 593194127565130479LL);
        arr_6 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 - 4])) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((short) var_8)))))), (max((arr_0 [10U]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) (unsigned char)5)))))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_12 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_10 [i_0 + 3] [i_0 - 2] [i_1 - 1] [i_1]), ((unsigned short)0))))) + (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) 0)) : (arr_0 [i_0 - 3])))));
                        arr_14 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */long long int) var_9);
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 1; i_4 < 9; i_4 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_8))));
        arr_17 [i_4] [i_4 - 1] = ((/* implicit */unsigned long long int) arr_13 [i_4 + 1] [(unsigned char)4] [i_4 + 1]);
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) 205198613U));
    }
    var_14 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))) >> ((((~(((/* implicit */int) var_6)))) + (34135))))));
}

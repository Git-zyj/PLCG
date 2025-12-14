/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166312
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_14)) : (var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)32760))))) : (((/* implicit */int) ((short) var_6)))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (var_13)))) ? (((/* implicit */unsigned int) var_6)) : ((+(var_8))))))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    var_17 -= ((/* implicit */short) ((signed char) (unsigned char)203));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_0] [12LL])) ? ((~(((/* implicit */int) (short)4151)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3] [0]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_6 [i_3] [3U] [i_0 + 3]), (arr_9 [i_0] [i_0]))))))))))));
                        var_19 = (!(((_Bool) (unsigned char)0)));
                    }
                }
            } 
        } 
    } 
}

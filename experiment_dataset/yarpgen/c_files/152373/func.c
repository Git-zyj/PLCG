/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152373
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_7) ? (((((/* implicit */_Bool) (short)23755)) ? (var_2) : (((/* implicit */unsigned long long int) 1712929416)))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_2 [i_1] [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 7168LL)))) : (max((((long long int) arr_2 [i_0] [i_0])), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)48506)))))))));
                var_16 -= ((/* implicit */unsigned long long int) (-(arr_2 [i_0] [i_1])));
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) arr_2 [i_0] [i_1]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_17 = ((/* implicit */int) max((max((max((var_1), (((/* implicit */unsigned short) arr_6 [(_Bool)1])))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -904857540))))))), (((/* implicit */unsigned short) max((arr_6 [(unsigned short)6]), (arr_6 [(short)8]))))));
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            var_18 = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (arr_7 [i_2]) : (arr_5 [i_2])))))));
            arr_11 [i_2] = ((/* implicit */unsigned long long int) ((long long int) var_8));
        }
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_9 [i_2] [i_2]), (((/* implicit */unsigned long long int) var_10))))) ? ((-(arr_9 [i_2] [i_2]))) : ((+(arr_9 [i_2] [i_2])))));
        var_20 = ((/* implicit */int) min((var_20), ((-(((/* implicit */int) var_13))))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned short) (-(-7183LL)));
        var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
    }
}

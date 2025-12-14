/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106733
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-1))))) : (arr_0 [14U])));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_2 [i_2] [5U])) ? (((/* implicit */int) arr_9 [i_1] [10U] [i_1] [i_1])) : (((/* implicit */int) var_1))))));
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)247)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)3)) + (((int) var_5))));
    }
    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */long long int) arr_12 [i_3] [i_3]);
        arr_16 [i_3] = ((/* implicit */unsigned int) (unsigned short)65535);
        var_20 = ((/* implicit */_Bool) arr_12 [i_3] [i_3]);
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_13 [i_4]) : (arr_13 [i_4]))))));
            var_22 = ((/* implicit */unsigned short) arr_17 [i_3] [i_4]);
            arr_20 [i_3] [i_4] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */int) ((((/* implicit */unsigned int) 2101240025)) < (arr_13 [i_3])))) : (((/* implicit */int) ((((/* implicit */int) arr_14 [i_4])) != (((/* implicit */int) arr_17 [i_3] [i_3])))))))));
        }
        for (int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) arr_17 [(short)4] [i_5])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) (_Bool)0)) : (var_13)))) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) ((_Bool) arr_21 [i_3])))))) : (min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_3] [i_3]))))), (arr_13 [19ULL])))));
            arr_23 [i_5] [i_5] [i_5] = ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_21 [i_3])) : (((/* implicit */int) arr_18 [(unsigned char)7] [i_3]))))) ? (arr_13 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3] [i_5])))))));
            arr_24 [i_5] [i_5] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_12 [i_3] [i_5])))));
        }
    }
    var_24 = ((/* implicit */signed char) (_Bool)0);
}

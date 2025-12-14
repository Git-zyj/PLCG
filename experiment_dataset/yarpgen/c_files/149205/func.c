/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149205
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 2])) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1]))))) ? (((/* implicit */int) arr_6 [i_2] [i_1] [i_0] [i_0])) : ((((-(((/* implicit */int) arr_6 [i_2] [i_1 + 2] [i_0] [i_0])))) * (((/* implicit */int) ((short) 3013107187U)))))));
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : ((+(((/* implicit */int) (_Bool)1))))))))))));
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [10ULL] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_8 [i_0] [i_2] [i_2])))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)116))))) << (((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_12)))) - (2792))))) : ((+(3))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    var_16 = ((/* implicit */signed char) max((var_16), ((signed char)102)));
                    var_17 = ((/* implicit */unsigned short) ((long long int) max((((/* implicit */int) (unsigned char)255)), (((int) (unsigned short)51576)))));
                }
                var_18 = ((/* implicit */unsigned char) ((max((-1172501654), (((/* implicit */int) (_Bool)1)))) >> ((((+(((/* implicit */int) (unsigned short)37052)))) - (37032)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max(((+(((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_0)))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_0)))))))))));
    var_20 |= ((/* implicit */short) var_7);
}

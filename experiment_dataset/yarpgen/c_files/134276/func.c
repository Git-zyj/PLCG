/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134276
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1047077812U)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((var_3) / (var_3))))) : (((/* implicit */long long int) ((((var_0) || (((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_10)))) : ((-(((/* implicit */int) var_1)))))))));
    var_14 = ((/* implicit */signed char) var_5);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) (+(((1047077804U) + (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            arr_13 [i_4 + 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_4 - 1] [i_4])) > (((/* implicit */int) var_0))))), (min((((/* implicit */long long int) (-(((/* implicit */int) var_5))))), (((((/* implicit */_Bool) arr_10 [i_0] [(signed char)14] [i_0] [(signed char)14] [i_0 - 1])) ? (-3244247087744352027LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                            var_15 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_12 [i_0 - 1] [i_1] [i_2] [i_3] [i_0 - 1])) : (((/* implicit */int) var_10)))) : (((/* implicit */int) min(((unsigned short)37802), (((/* implicit */unsigned short) var_0)))))))));
                        }
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((3345532866U), (((/* implicit */unsigned int) (signed char)124))))) + (((((/* implicit */_Bool) ((arr_5 [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) (signed char)-87)) ? (1811955231877846610LL) : (-685148788525090517LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0])))))))));
                        var_16 = ((/* implicit */long long int) (~(max(((~(((/* implicit */int) (unsigned short)27723)))), (((/* implicit */int) (!((_Bool)1))))))));
                    }
                } 
            } 
        } 
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182737
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))) / ((~(4294967293U)))))) == (((unsigned long long int) (signed char)108))));
    var_12 |= ((/* implicit */long long int) max((((/* implicit */unsigned int) max((var_3), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) && ((_Bool)1))))))), (max((((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))), (((((/* implicit */_Bool) var_7)) ? (4137339926U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    var_13 = ((/* implicit */signed char) var_4);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_14 = ((/* implicit */long long int) ((((var_10) / (((/* implicit */long long int) (-(arr_0 [i_0] [i_0])))))) > (((/* implicit */long long int) ((/* implicit */int) (signed char)76)))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (long long int i_3 = 4; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (signed char)103)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_10)) : (var_7)))))))) : (((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3 - 2] [i_3 - 3] [i_3 - 3])) ? (arr_9 [i_3 + 1] [i_3 - 2] [i_3 + 1] [i_3 - 4]) : (var_10))));
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max(((_Bool)1), (var_8))))));
                    }
                } 
            } 
        } 
    }
}

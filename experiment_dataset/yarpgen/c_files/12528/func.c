/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12528
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_15))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_19 = (((_Bool)1) ? (((var_9) << (((1333285316U) - (1333285316U))))) : (((((/* implicit */_Bool) 2748134425U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1951662577664138674LL))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 10; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_9 [(_Bool)1] [i_1] [(_Bool)1] [i_3] [(unsigned short)0] [i_1] = ((/* implicit */_Bool) var_2);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) > (var_4)))) : (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_2))))))))));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_9)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_9)))))))));
                        }
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned short) var_17);
                            arr_17 [i_0] [(signed char)8] [i_0] [1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (1951662577664138674LL))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((6291456U) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 383907560275099848LL)) || (((/* implicit */_Bool) (signed char)99)))))))))));
                        }
                    }
                } 
            } 
        } 
    }
}

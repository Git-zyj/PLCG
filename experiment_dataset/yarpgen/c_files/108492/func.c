/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108492
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
    var_20 = ((_Bool) ((long long int) (signed char)66));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned long long int) ((var_2) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (2470447416928657547ULL))))));
        var_22 = ((/* implicit */long long int) max((min((2470447416928657549ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), ((-(2470447416928657537ULL)))));
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            var_23 = ((/* implicit */_Bool) ((long long int) ((var_9) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)))));
            var_24 += ((/* implicit */unsigned char) (((_Bool)1) ? (((var_15) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (min((15976296656780894067ULL), (((/* implicit */unsigned long long int) var_4)))))) : (((((/* implicit */_Bool) 2470447416928657548ULL)) ? (((/* implicit */unsigned long long int) ((var_15) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))) : (2470447416928657552ULL)))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */int) ((15976296656780894075ULL) == (2470447416928657549ULL)))) >> (((/* implicit */int) ((_Bool) var_0)))));
                        var_26 ^= ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) var_11)), (((2470447416928657547ULL) >> (((/* implicit */int) (_Bool)1)))))), (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) 15976296656780894065ULL))))))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (var_3)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))));
                    }
                } 
            } 
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((unsigned char) (_Bool)0)))));
            arr_12 [i_4] = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) 5007677979539394032LL)), (2470447416928657535ULL)))));
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_29 = ((var_7) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))));
            var_30 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_17))));
        }
        var_31 = ((/* implicit */unsigned char) (_Bool)1);
    }
    /* vectorizable */
    for (long long int i_6 = 2; i_6 < 8; i_6 += 1) 
    {
        arr_19 [i_6] [i_6] = ((/* implicit */_Bool) (((!(var_12))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) 3764413624687335005ULL))));
        var_32 = ((/* implicit */unsigned char) var_19);
        var_33 &= ((/* implicit */unsigned long long int) ((unsigned char) var_16));
        var_34 = ((/* implicit */signed char) ((15976296656780894064ULL) == (2470447416928657552ULL)));
    }
    var_35 = ((/* implicit */unsigned char) var_2);
}

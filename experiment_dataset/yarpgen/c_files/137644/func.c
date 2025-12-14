/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137644
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
    for (long long int i_0 = 1; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) ((-1LL) + (((/* implicit */long long int) ((arr_1 [i_0 + 1]) ? (3045348050U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))))))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) <= (max((9LL), (((/* implicit */long long int) 3678096029U))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((arr_1 [i_1]) && (min((arr_4 [i_0] [i_0 - 1]), (arr_4 [i_0] [i_0 - 1])))));
            var_19 = ((unsigned int) 3678096018U);
            /* LoopNest 2 */
            for (long long int i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_3])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1]))));
                        var_21 += ((/* implicit */unsigned int) (-(((/* implicit */int) ((-259891382) == (((/* implicit */int) arr_7 [(signed char)6])))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (var_3)));
                var_23 = ((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_10 [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0]))));
            }
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */int) var_8)) ^ (arr_12 [i_0 - 1] [i_4]))))));
        }
        var_25 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((var_0) + (((/* implicit */unsigned int) ((((((/* implicit */int) arr_7 [i_0])) + (2147483647))) << (((var_3) - (458524375U)))))))) > (((/* implicit */unsigned int) 1386134230))))) : (((/* implicit */unsigned char) ((((var_0) + (((/* implicit */unsigned int) ((((((((/* implicit */int) arr_7 [i_0])) - (2147483647))) + (2147483647))) << (((var_3) - (458524375U)))))))) > (((/* implicit */unsigned int) 1386134230)))));
    }
    for (long long int i_6 = 1; i_6 < 17; i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] = ((/* implicit */unsigned short) (+((~(1240624101U)))));
        /* LoopSeq 2 */
        for (unsigned int i_7 = 1; i_7 < 16; i_7 += 1) /* same iter space */
        {
            arr_25 [i_6] [i_6] [i_6] = ((/* implicit */int) arr_15 [i_6] [i_6]);
            var_26 = ((/* implicit */unsigned int) arr_1 [i_7]);
        }
        for (unsigned int i_8 = 1; i_8 < 16; i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_9 = 4; i_9 < 15; i_9 += 2) 
            {
                for (signed char i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    {
                        var_27 ^= 616871277U;
                        /* LoopSeq 2 */
                        for (int i_11 = 0; i_11 < 18; i_11 += 3) /* same iter space */
                        {
                            arr_36 [i_6] [i_6] [i_8] [i_8] [i_9] [i_10] [i_9] = ((/* implicit */unsigned int) (unsigned short)65535);
                            var_28 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_6)), (((long long int) ((((/* implicit */_Bool) arr_29 [i_9] [i_10] [i_6])) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) var_15)))))));
                        }
                        for (int i_12 = 0; i_12 < 18; i_12 += 3) /* same iter space */
                        {
                            var_29 = ((((/* implicit */_Bool) arr_24 [i_6] [i_6] [i_6 + 1])) ? (((/* implicit */unsigned int) arr_13 [i_8])) : (min((((((/* implicit */_Bool) arr_34 [i_6] [i_6] [i_8 + 2] [i_9] [i_10] [i_6] [i_12])) ? (arr_11 [i_6]) : (((/* implicit */unsigned int) 2120562628)))), (((/* implicit */unsigned int) (!((_Bool)1)))))));
                            var_30 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) var_2))))) + (max((arr_31 [i_9]), (((/* implicit */long long int) var_8)))))));
                        }
                    }
                } 
            } 
            arr_39 [i_6] [i_6] [i_6] = ((/* implicit */int) (!(((616871259U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_6] [i_6] [i_6] [i_6])))))));
        }
    }
    var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((var_11) <= (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))));
    var_32 = ((int) -879441875);
    var_33 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) var_6)), (var_3)))));
}

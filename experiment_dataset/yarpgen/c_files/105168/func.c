/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105168
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
    for (int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (((unsigned long long int) ((long long int) 4026531840U)))));
        /* LoopSeq 3 */
        for (signed char i_1 = 3; i_1 < 19; i_1 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 18; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_14 [i_2] [i_1 - 3] [i_1]))) ? (((unsigned long long int) arr_5 [i_0 - 2] [i_1] [(signed char)8])) : (((((/* implicit */_Bool) min((arr_9 [i_0]), (((/* implicit */int) (unsigned short)51744))))) ? (((/* implicit */unsigned long long int) arr_8 [i_0 - 2] [i_1])) : (arr_12 [i_1])))));
                            arr_15 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] = ((/* implicit */unsigned short) ((unsigned long long int) min(((unsigned short)13812), ((unsigned short)13792))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_4 [i_1] [i_1] [16ULL])))))) ? (((int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_6] [i_0])))))) : (((/* implicit */int) ((signed char) arr_2 [i_0 + 1])))));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((signed char) arr_4 [i_0] [i_5] [i_0])))));
                        var_24 = ((/* implicit */signed char) (~(((unsigned long long int) arr_14 [i_0 - 1] [i_1 - 1] [i_1 - 1]))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 1; i_7 < 18; i_7 += 4) 
                        {
                            var_25 -= ((/* implicit */unsigned long long int) 33423360);
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)31840)) < (((/* implicit */int) (unsigned short)51744)))))));
                        }
                        for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            arr_24 [i_1] [i_1] [i_5] [i_6] [i_8] = ((/* implicit */long long int) (-(10409963621103472242ULL)));
                            arr_25 [i_8] [i_6] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((arr_8 [i_0 - 1] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1]))))) ? (((/* implicit */long long int) min((arr_8 [i_0 - 1] [i_1]), (((/* implicit */unsigned int) var_17))))) : (((long long int) arr_8 [i_0 - 1] [i_1]))));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_9 = 3; i_9 < 19; i_9 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) 4294967291U)) ^ (arr_13 [i_9 - 2] [(signed char)18] [i_0] [i_0] [i_0] [i_0 - 1]))))));
            arr_28 [i_0 - 2] [i_9] [i_9] = ((/* implicit */unsigned int) ((unsigned long long int) arr_19 [i_9] [i_9] [i_9 - 2] [i_9] [i_9]));
        }
        for (signed char i_10 = 1; i_10 < 17; i_10 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                var_28 += ((signed char) ((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */long long int) 15U)) : (arr_7 [i_0] [i_0] [i_0] [i_0 - 1])));
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) min((((/* implicit */int) min((var_17), (arr_22 [i_10 + 2] [i_10 - 1] [i_10 - 1])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_22 [i_10 + 3] [i_10 + 1] [i_10 + 3])) : (((/* implicit */int) arr_22 [i_10 + 2] [i_10 + 1] [i_10 + 1])))))))));
                arr_33 [i_0] = ((/* implicit */_Bool) ((signed char) ((signed char) arr_6 [i_0 - 2] [i_0] [i_10])));
            }
            arr_34 [i_10 + 1] [i_0 + 1] [i_0] = ((/* implicit */_Bool) arr_23 [i_10 + 2] [i_0 - 1] [i_10 + 1] [i_0 + 1] [i_0 - 1]);
        }
        var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0])) ? (arr_21 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1]) : (arr_21 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [(signed char)2] [i_0]))))));
    }
    for (unsigned char i_12 = 4; i_12 < 9; i_12 += 3) 
    {
        arr_38 [i_12 - 2] = ((/* implicit */signed char) ((unsigned long long int) 10409963621103472242ULL));
        var_31 += ((/* implicit */signed char) var_7);
    }
    var_32 += ((/* implicit */unsigned long long int) ((signed char) ((signed char) ((signed char) var_19))));
    var_33 = ((/* implicit */long long int) var_19);
    var_34 = ((/* implicit */unsigned int) var_11);
}

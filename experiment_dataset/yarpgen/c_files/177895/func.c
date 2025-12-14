/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177895
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
    var_11 = ((/* implicit */signed char) min((((/* implicit */unsigned char) var_10)), ((unsigned char)181)));
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
    var_13 = ((/* implicit */unsigned short) ((int) var_7));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((var_9) < (((/* implicit */unsigned long long int) 2899875042U)))))) : (((((/* implicit */long long int) 1395092254U)) ^ (var_4)))));
            arr_6 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1 + 1]))));
        }
        var_15 = ((/* implicit */unsigned long long int) 2899875065U);
    }
    /* LoopSeq 3 */
    for (unsigned int i_2 = 1; i_2 < 13; i_2 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_5 [i_2] [i_2]))));
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)45083)) >= (((/* implicit */int) arr_3 [i_2] [i_2] [i_2 + 3])))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */int) (~(11130251480121831200ULL)));
        /* LoopNest 3 */
        for (long long int i_4 = 1; i_4 < 15; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 2899875028U)) < (((unsigned long long int) 6220378276273507209LL)))))));
                        arr_22 [i_6] [i_6] [i_6] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_3 - 1] [i_4 + 1] [i_4 + 1])) - (arr_18 [i_3])));
                        var_19 += ((/* implicit */unsigned long long int) 1395092265U);
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((-6220378276273507203LL) <= (((/* implicit */long long int) arr_19 [i_3 + 3] [i_4 - 1] [i_6 - 1])))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_7 = 1; i_7 < 13; i_7 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_8 = 2; i_8 < 13; i_8 += 3) /* same iter space */
        {
            arr_29 [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1395092231U)) ? (1282665063U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57866)))));
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                for (long long int i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) ((arr_23 [i_7] [i_7]) >= (((/* implicit */long long int) -322810495)))))));
                            var_22 = ((arr_10 [i_7]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_7] [i_7] [i_8 + 1] [i_7 + 1]))));
                        }
                    } 
                } 
            } 
            var_23 -= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | ((-(((/* implicit */int) (signed char)102))))));
        }
        for (short i_12 = 2; i_12 < 13; i_12 += 3) /* same iter space */
        {
            var_24 = arr_26 [i_7];
            var_25 = 3012302232U;
            var_26 = ((((/* implicit */_Bool) arr_2 [i_7 + 3])) ? (((((/* implicit */_Bool) var_5)) ? (1282665063U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)298))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)64897))))));
            var_27 ^= ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_1 [(signed char)12])))));
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (+(var_3))))));
        }
        arr_42 [i_7] [i_7] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_7] [i_7 - 1] [i_7 - 1] [i_7 + 2]))));
        arr_43 [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_41 [i_7 + 1]))));
        arr_44 [i_7] [i_7] = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
        var_29 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47036)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 2899875065U)) != (var_9)))) : (((/* implicit */int) (unsigned char)85))));
    }
}

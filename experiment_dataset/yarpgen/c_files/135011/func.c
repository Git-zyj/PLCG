/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135011
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
    var_15 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) min((-1), (-1)))) ? (((var_11) / (((/* implicit */int) (unsigned short)27645)))) : (((/* implicit */int) var_7))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 16776192)) ? (((/* implicit */int) (short)23257)) : (((/* implicit */int) var_7))))));
                    var_16 = ((/* implicit */unsigned short) min(((-(2138416463U))), (((/* implicit */unsigned int) min((arr_5 [i_1 - 3] [i_0] [i_1 + 2]), (arr_5 [i_1 - 3] [i_0] [i_1 + 2]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) arr_11 [i_3])) : (177720052)));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
        var_18 = (+(((/* implicit */int) arr_6 [i_3])));
    }
    /* LoopSeq 1 */
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 3; i_7 < 22; i_7 += 3) 
                {
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        {
                            arr_26 [i_4] [i_4] [i_4] [i_6] [i_7] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))));
                            var_19 = ((((/* implicit */int) ((var_13) == (((/* implicit */unsigned long long int) ((-1314004821) / (-16776172))))))) ^ (16352));
                            var_20 = ((/* implicit */unsigned long long int) ((max((1023ULL), (((/* implicit */unsigned long long int) (((_Bool)0) ? (-16352) : (((/* implicit */int) (_Bool)1))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_21 = ((/* implicit */unsigned short) -3671574888325037354LL);
                            arr_27 [i_4] [i_4] [i_7] [i_8] = ((/* implicit */long long int) (signed char)-2);
                        }
                    } 
                } 
            } 
            arr_28 [i_4] = ((/* implicit */unsigned long long int) (unsigned short)37891);
        }
        arr_29 [i_4] = ((/* implicit */unsigned char) 9223367638808264704LL);
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((16366) + (16776211))), (((/* implicit */int) (_Bool)1))))) ? (2048) : (((/* implicit */int) (unsigned char)25))));
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 2; i_9 < 20; i_9 += 3) 
        {
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2681040742U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_14))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [16ULL])) ? (arr_14 [12U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_4] [i_9] [i_9])))))))))));
            var_24 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)123))) | (4294967295U)))))) > (((arr_25 [i_9 + 2] [0ULL] [i_9 + 2] [i_9] [0ULL]) % (arr_25 [i_9 - 1] [i_9 - 1] [16LL] [i_9 - 1] [(signed char)4])))));
        }
    }
}

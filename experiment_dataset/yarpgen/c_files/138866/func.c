/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138866
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
    var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)21849)) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43695))) : (((((/* implicit */_Bool) var_17)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37096)))))))) ? (649603805971417600ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    var_21 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) && (((/* implicit */_Bool) var_19))))), (var_9)));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_22 &= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) min((var_16), (((/* implicit */short) arr_0 [(short)15] [i_0])))))))) ? (arr_1 [i_0] [i_0]) : ((-((~(arr_1 [i_0 + 1] [i_0])))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0] [15U]);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */int) ((signed char) var_9));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-4272)) % (1091714145)));
        var_24 = (+(((/* implicit */int) (unsigned short)43687)));
        arr_6 [i_1] |= ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
        arr_7 [i_1] = ((/* implicit */signed char) (unsigned short)21861);
    }
    for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) 
    {
        arr_10 [13] = ((/* implicit */_Bool) (~((-(((/* implicit */int) ((arr_4 [i_2] [(unsigned short)18]) >= (((/* implicit */unsigned long long int) 0)))))))));
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                for (unsigned short i_5 = 4; i_5 < 19; i_5 += 3) 
                {
                    {
                        arr_17 [i_2] [i_2] [i_3] = ((((arr_8 [i_2 - 1] [i_3]) != (0U))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)21840)) ? (220421791) : (((/* implicit */int) (unsigned char)0)))) % (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned char)255))))))) : (var_10));
                        arr_18 [i_2] [i_4] [i_2] [i_4] |= ((/* implicit */unsigned short) arr_0 [i_2] [19U]);
                    }
                } 
            } 
        } 
        var_25 += ((/* implicit */int) ((((/* implicit */int) arr_15 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [4LL])) >= (((/* implicit */int) min((arr_15 [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2] [16]), (var_14))))));
        var_26 = ((/* implicit */unsigned char) 0);
    }
    for (long long int i_6 = 1; i_6 < 21; i_6 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            arr_25 [i_7] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)21842))))) ? (((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43670))) : (3920427987U))) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_9)) ? (arr_23 [(signed char)14] [i_7]) : (((/* implicit */int) (unsigned short)0)))))))));
            var_27 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)-24)), (var_13)))), (arr_24 [i_6] [i_6]))) - (max((var_1), (((/* implicit */unsigned int) (signed char)-108))))));
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            var_28 = ((/* implicit */signed char) ((unsigned short) arr_20 [i_6] [i_6]));
            arr_28 [i_6] [14U] [i_6] = ((/* implicit */signed char) var_3);
            var_29 *= ((/* implicit */unsigned short) (_Bool)1);
            arr_29 [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((arr_19 [i_6]) == (((/* implicit */unsigned int) (+(arr_23 [i_6] [i_8]))))));
        }
        arr_30 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_3 [i_6 - 1])))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) 827666252)), (2618106271U)))) : (((((/* implicit */_Bool) var_4)) ? (arr_3 [i_6 + 1]) : (arr_3 [i_6 - 1])))));
        arr_31 [i_6] = ((/* implicit */signed char) min((2540697144U), (3514077749U)));
    }
}

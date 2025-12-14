/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184849
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
    var_13 = ((/* implicit */long long int) max((var_13), (max((max((6072479735659590291LL), (min((-6072479735659590291LL), (-6072479735659590268LL))))), (((/* implicit */long long int) var_11))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */int) (unsigned char)21);
                    var_14 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) << (((min((arr_5 [i_2] [(_Bool)1]), (((((/* implicit */_Bool) 6072479735659590291LL)) ? (arr_0 [i_1] [14]) : (((/* implicit */unsigned long long int) var_8)))))) - (11026946776885505947ULL)))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) > (((/* implicit */int) var_10)))))) : (var_7))));
        arr_9 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_7 [i_0] [i_0] [i_0])))) & (min((((/* implicit */unsigned long long int) -1533083405)), (arr_5 [i_0] [i_0])))));
        var_16 = ((max((max((((/* implicit */unsigned long long int) 2147483647)), (arr_5 [i_0] [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1186911758U))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 667337952)) && (((/* implicit */_Bool) (signed char)-120)))))));
        var_17 = max((var_8), (((/* implicit */long long int) min((arr_1 [5ULL] [i_0]), (arr_1 [i_0] [i_0])))));
    }
    var_18 ^= ((/* implicit */long long int) var_6);
    /* LoopSeq 4 */
    for (unsigned char i_3 = 3; i_3 < 21; i_3 += 1) 
    {
        var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : ((-(var_8))))) | (((/* implicit */long long int) ((/* implicit */int) max((arr_11 [i_3 + 2]), (((/* implicit */unsigned short) arr_12 [i_3] [i_3 + 2]))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 4; i_4 < 22; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                for (unsigned int i_6 = 1; i_6 < 22; i_6 += 1) 
                {
                    {
                        var_20 |= ((/* implicit */signed char) max((((((((/* implicit */_Bool) 5189529126539749320LL)) || (((/* implicit */_Bool) 5189529126539749320LL)))) ? (max((((/* implicit */int) (unsigned char)0)), (var_12))) : (((/* implicit */int) max((arr_11 [i_5]), (((/* implicit */unsigned short) var_6))))))), (((/* implicit */int) var_11))));
                        arr_21 [i_5] [i_5] [(unsigned short)0] [i_4] = ((/* implicit */int) (~(max((((/* implicit */unsigned int) 987836582)), (arr_18 [i_3 - 2] [i_3 + 1] [i_3 - 1] [i_4])))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_7 = 3; i_7 < 11; i_7 += 1) 
    {
        arr_24 [i_7] [i_7] = ((/* implicit */int) var_4);
        arr_25 [i_7] = ((/* implicit */unsigned char) (-2147483647 - 1));
    }
    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
    {
        arr_28 [(unsigned char)8] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_7 [i_8] [i_8] [i_8])), (min((((/* implicit */unsigned int) var_6)), (var_2))))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) max((var_8), (((/* implicit */long long int) var_3)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-5189529126539749291LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
        var_22 = ((/* implicit */signed char) max((var_22), (((signed char) min((var_6), (var_6))))));
        var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((5189529126539749308LL), (((/* implicit */long long int) var_9))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_0 [i_8] [(signed char)4]) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) min((1630609037U), (((/* implicit */unsigned int) var_3))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    }
    for (signed char i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        arr_33 [0LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) arr_14 [i_9]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_9] [i_9]) > (((/* implicit */long long int) var_5)))))) : ((~(1099511627775LL)))));
        arr_34 [i_9] = ((-1203784942) <= (((/* implicit */int) var_4)));
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-48))))), (6072479735659590291LL))))));
        var_25 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_11 [i_9])) : (((/* implicit */int) arr_11 [i_9])))))));
    }
    var_26 = ((/* implicit */unsigned int) var_0);
}

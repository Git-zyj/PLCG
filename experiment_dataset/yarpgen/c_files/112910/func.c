/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112910
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [11U] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 13099304082011884477ULL)) ? (-769200665) : (max((838703681), (((/* implicit */int) (signed char)117))))))), (((((/* implicit */_Bool) 5738554886269338278LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -5738554886269338278LL)))) : (((((/* implicit */_Bool) var_2)) ? (-5738554886269338278LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((5242919583567065796LL) < (((/* implicit */long long int) ((/* implicit */int) ((signed char) -5242919583567065804LL))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_6 [(unsigned short)0] [(unsigned short)0] &= ((/* implicit */signed char) max((((var_9) * (((/* implicit */unsigned long long int) ((int) 2147483647U))))), (((/* implicit */unsigned long long int) (signed char)-1))));
        var_19 &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)8))) & (((long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_5 [10U] [i_1])) : (((/* implicit */int) (unsigned char)0)))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                {
                    var_20 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [i_3])), (-5738554886269338270LL))))));
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-70)) ? (-5242919583567065792LL) : (0LL)))) ? (6757215473700173861LL) : (((((/* implicit */long long int) (-(((/* implicit */int) (signed char)104))))) ^ (min((arr_13 [4] [i_1] [i_2] [(signed char)17]), (((/* implicit */long long int) arr_9 [4LL] [i_2] [(unsigned char)15])))))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            for (signed char i_6 = 1; i_6 < 19; i_6 += 1) 
            {
                {
                    arr_20 [i_4] [i_5] [2LL] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) 7346627189850590187LL)), (5026204771955579068ULL)))))) ? (((((/* implicit */_Bool) ((long long int) var_18))) ? (-5738554886269338253LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [16]))))) : (((/* implicit */long long int) (((((-(((/* implicit */int) (unsigned short)20806)))) + (2147483647))) >> (((16777215) - (16777208))))))));
                    arr_21 [i_4] = (+(((/* implicit */int) min((((signed char) var_12)), (arr_17 [i_4])))));
                    /* LoopSeq 2 */
                    for (int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */int) max(((signed char)-1), ((signed char)0)))) : (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4] [6ULL] [(signed char)4] [8]))) : (((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17205949755116115511ULL)) ? (((/* implicit */int) arr_15 [i_6])) : (((/* implicit */int) (signed char)(-127 - 1)))))) : (max((((/* implicit */unsigned long long int) (unsigned char)199)), (0ULL)))))));
                        var_23 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 1944165646U)) : (var_10)))), ((-(6355941337378833133ULL))))) * (((/* implicit */unsigned long long int) (-(var_13))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        var_24 = ((/* implicit */long long int) min((var_24), (-434701367275076835LL)));
                        arr_28 [i_4] [(signed char)16] = ((/* implicit */signed char) max((-1492086732), (((/* implicit */int) var_4))));
                        arr_29 [2LL] [i_4] [(signed char)6] = ((/* implicit */unsigned int) (+(((int) 4874004451614717309LL))));
                    }
                }
            } 
        } 
    } 
}

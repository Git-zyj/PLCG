/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110079
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
    var_12 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) min((4294967285U), (2960388717U)))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2960388694U)) && (((/* implicit */_Bool) 2960388717U)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) ((unsigned int) min((((/* implicit */unsigned long long int) arr_0 [i_0 - 1])), (var_3))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (unsigned short i_3 = 2; i_3 < 8; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */_Bool) ((8939839027843856662LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_10 [i_1] [i_0] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_3 [i_3] [i_3] [i_3 + 3]))))));
                    }
                } 
            } 
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6310849159181387011ULL)) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)16384)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : ((((_Bool)1) ? (3843383204U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
        }
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((3311522080U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) == (((1334578571U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_4]))))))))) : (max((var_10), (((/* implicit */unsigned int) min((var_4), (var_4))))))));
            /* LoopNest 3 */
            for (unsigned int i_5 = 2; i_5 < 7; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    for (unsigned int i_7 = 3; i_7 < 10; i_7 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2960388694U)) ? (1334578601U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (var_3) : (((((/* implicit */_Bool) 2929548089U)) ? (var_3) : (var_3))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (2959540478U)))))))));
                            var_18 = ((/* implicit */long long int) (-(((arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 3]) ? (arr_16 [i_5 + 2] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_23 [i_0] = ((/* implicit */unsigned int) var_0);
                            arr_24 [i_0] [i_6] [i_0] [i_6] [i_0] = ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) var_2))) - (((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) 7518879654500769677ULL)) ? (2960388705U) : (4294967278U))) - ((((_Bool)1) ? (2959540478U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60806))))))))));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */unsigned int) min((var_19), ((-(min((((/* implicit */unsigned int) (_Bool)1)), (2960388710U)))))));
        }
        arr_25 [i_0] = ((/* implicit */int) 1223473573U);
    }
    for (unsigned int i_8 = 2; i_8 < 15; i_8 += 2) 
    {
        var_20 ^= ((/* implicit */short) 4279123317U);
        arr_29 [i_8 + 1] [i_8 + 1] = ((/* implicit */_Bool) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32761))) / (7518879654500769677ULL)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-23))))));
    }
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27399)))));
}

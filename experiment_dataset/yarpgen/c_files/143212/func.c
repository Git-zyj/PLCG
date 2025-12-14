/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143212
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
    var_16 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_12) ? (592338452U) : (((/* implicit */unsigned int) 2147483647))))), (((((/* implicit */_Bool) 18446744073709551603ULL)) ? (15766199858955352774ULL) : (((/* implicit */unsigned long long int) var_10))))))));
    var_17 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [4LL] [i_2] [i_1 + 2] [i_1 + 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1))))) ? (((((/* implicit */int) arr_5 [(unsigned short)7])) % (((/* implicit */int) (signed char)-1)))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)26812))))))) ? (max((((/* implicit */unsigned int) (signed char)-107)), (4294967295U))) : (((/* implicit */unsigned int) ((arr_2 [i_2]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_1 + 2]))))));
                    var_18 = ((/* implicit */long long int) (((+((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) : (arr_0 [(unsigned char)9]))))) > (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)8191)))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_3 = 2; i_3 < 11; i_3 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_3 - 1] [i_3 + 1] [i_3 - 2])) ? (((/* implicit */int) arr_3 [i_3 - 1] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_3 [i_3 - 2] [i_3 + 1] [i_3 - 1])))) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38723)))))));
            var_20 *= ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)15)), (arr_8 [i_3])))), (8604012161258636783ULL)))));
            var_21 = ((/* implicit */unsigned char) (((((~((+(((/* implicit */int) (_Bool)1)))))) + (2147483647))) >> (((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38723))) + (0U)))), (((131071ULL) ^ (((/* implicit */unsigned long long int) 32767U)))))) - (98277ULL)))));
        }
        for (unsigned short i_4 = 2; i_4 < 11; i_4 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26819))) : (131082ULL))) & (((/* implicit */unsigned long long int) (~(144115179485921280LL))))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-119)), ((unsigned char)255)))) : ((((_Bool)1) ? (550880489) : (((/* implicit */int) (unsigned short)32767))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    {
                        var_23 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_13 [i_0] [i_4 - 2])) ? (((/* implicit */int) arr_13 [i_0] [i_4 - 2])) : (((/* implicit */int) arr_13 [i_0] [i_4 + 1])))));
                        arr_18 [i_0] [i_4] [i_5] [i_0] = ((/* implicit */unsigned short) arr_11 [i_4] [i_4 - 1]);
                    }
                } 
            } 
        }
        var_24 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((15766199858955352774ULL), (((/* implicit */unsigned long long int) (unsigned char)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)511)) && (((/* implicit */_Bool) (signed char)127))))) : (((/* implicit */int) ((_Bool) arr_16 [i_0] [i_0])))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26809))) : (32767U)));
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) min((((/* implicit */long long int) 2147483647)), (min((((/* implicit */long long int) (unsigned char)255)), (524287LL))))))));
        var_27 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)127)), (27796025)))), (max((max((((/* implicit */unsigned long long int) (signed char)127)), (14758100503275236048ULL))), (((/* implicit */unsigned long long int) max(((signed char)(-127 - 1)), ((signed char)-108))))))));
        /* LoopNest 2 */
        for (signed char i_8 = 3; i_8 < 22; i_8 += 2) 
        {
            for (unsigned short i_9 = 1; i_9 < 22; i_9 += 3) 
            {
                {
                    var_28 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned char) ((18446744073709420552ULL) > (30786325577728ULL)))), ((unsigned char)45)))) == (((/* implicit */int) (unsigned short)24718))));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((/* implicit */int) arr_26 [i_8 + 1] [i_8 + 1] [i_9 - 1])) : ((~(((/* implicit */int) arr_27 [i_7] [i_7] [i_7]))))))) ? ((+(524293LL))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_27 [i_7] [i_7] [i_7])) : (-1))), (((((/* implicit */_Bool) arr_23 [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)54176)))))))));
                    arr_28 [i_7] [i_7] = ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) (unsigned char)0)), (30786325577728ULL)))))) ? (((/* implicit */int) min(((signed char)-108), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) arr_23 [i_7])));
                    arr_29 [i_7] [(signed char)18] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+((-(9223372036854775807LL)))))), (((18446744073709420533ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))));
                }
            } 
        } 
    }
    var_30 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_0))))) ? (min((((/* implicit */unsigned long long int) var_6)), (1ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)108)))))))));
}

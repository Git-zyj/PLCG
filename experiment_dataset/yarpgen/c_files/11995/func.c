/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11995
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
    var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)10622))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) var_9);
        var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [8LL])) ? (arr_0 [i_0] [(_Bool)1]) : (((/* implicit */long long int) (+(((/* implicit */int) (short)-20600)))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (((!(var_11))) ? (5160856264361331148LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-17452)) || (((/* implicit */_Bool) (short)-13953))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [(short)6] [i_0] [i_0] [(short)6] [i_0 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1715226126U)) ? (((/* implicit */int) (unsigned short)54913)) : (((/* implicit */int) arr_9 [i_0 - 1] [i_2] [i_3] [i_4]))));
                                arr_17 [(_Bool)1] [20U] [i_0] [(_Bool)1] [i_4] = ((/* implicit */short) ((arr_15 [i_0] [i_0] [i_2] [i_2] [i_3] [i_3] [i_4]) == (arr_15 [i_0] [i_0] [i_1 + 3] [i_0] [i_3] [i_4] [i_0])));
                                var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_13 [i_0] [i_1 + 3] [i_0] [i_3] [i_4]))));
                                arr_18 [i_4] [i_4] &= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)13926))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 3; i_5 < 18; i_5 += 3) 
                    {
                        var_16 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)59763)) : (((/* implicit */int) (unsigned short)26544))))) ? ((-(-846947103))) : (((/* implicit */int) var_6))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 1) 
                        {
                            arr_25 [i_0 - 1] [i_0 - 1] [1ULL] [i_0] [1ULL] [1ULL] [i_0] = ((/* implicit */_Bool) ((arr_20 [i_0] [i_0] [i_0 + 1] [i_0 + 1]) % (arr_20 [i_2] [i_1 + 1] [i_2] [i_1 + 1])));
                            var_17 -= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) (unsigned short)10623)) == (((/* implicit */int) (unsigned short)46722)))));
                        }
                        arr_26 [i_0] [i_2] [10ULL] [i_0] = ((/* implicit */unsigned long long int) ((arr_15 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0 + 1] [i_5] [i_1 + 1]) | (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                        arr_27 [i_0] [i_0] [i_2] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)16] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_5)))) ? (((/* implicit */int) ((unsigned short) -2776288706451611722LL))) : (((/* implicit */int) ((arr_15 [i_0] [i_1 + 3] [i_1] [i_2] [i_5 + 2] [i_2] [6LL]) == (var_5))))));
                    }
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -5045246279995393541LL))))) | (((/* implicit */int) arr_23 [i_0 + 1] [i_0] [i_2] [i_0] [i_1 - 1]))));
                }
            } 
        } 
        var_19 = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) >> (((((/* implicit */int) ((unsigned short) arr_19 [i_0] [i_0] [i_0] [i_0]))) - (61069)))))) : (((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0])) + (2147483647))) >> (((((((/* implicit */int) ((unsigned short) arr_19 [i_0] [i_0] [i_0] [i_0]))) - (61069))) - (3703))))));
    }
    for (unsigned int i_7 = 2; i_7 < 19; i_7 += 1) /* same iter space */
    {
        arr_30 [i_7] = ((/* implicit */unsigned int) (short)-10160);
        var_20 &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((unsigned long long int) -846947104))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_19 [i_7 - 2] [(unsigned short)18] [6] [i_7 - 2])))));
        var_21 |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((/* implicit */unsigned int) ((846947115) ^ (-846947103)))) : ((~(arr_1 [(unsigned short)2] [(unsigned short)2])))))));
        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_12 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_7]))) ? (arr_29 [i_7]) : ((+(((/* implicit */int) arr_13 [(signed char)4] [i_7 + 1] [i_7 - 1] [i_7 - 2] [(signed char)4]))))));
    }
}

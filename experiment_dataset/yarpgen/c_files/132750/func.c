/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132750
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
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] [2LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [10ULL] [i_0 + 1]))));
        arr_3 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0 - 2] [i_0])) > (((/* implicit */int) var_13))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) 6194195175174244034LL))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((arr_0 [i_0 - 3] [i_0 - 3]) ? (((/* implicit */int) (signed char)126)) : (-2099473691))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)105))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-20314))) : (arr_6 [i_1] [i_1] [i_0 - 1])));
                    var_15 |= ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [5U]);
                }
            } 
        } 
    }
    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        arr_14 [i_3] = ((/* implicit */signed char) min((arr_11 [i_3]), (((arr_11 [i_3]) - (var_6)))));
        var_16 -= ((/* implicit */unsigned int) ((((arr_11 [i_3]) | (((/* implicit */unsigned long long int) arr_13 [i_3])))) << (((arr_12 [(signed char)5]) + (6683787088210817812LL)))));
        arr_15 [i_3] [i_3] = ((/* implicit */int) (((((!(((/* implicit */_Bool) arr_11 [6LL])))) ? (var_7) : (4503599627370495ULL))) < (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_3]))))), (max((18442240474082181118ULL), (arr_11 [i_3])))))));
    }
    /* LoopSeq 3 */
    for (unsigned short i_4 = 2; i_4 < 13; i_4 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (arr_9 [i_4 - 1] [i_4 + 1] [7LL] [i_4 - 1])))) ? (((arr_9 [i_4 - 1] [i_4 + 1] [i_4] [(unsigned char)10]) / (arr_9 [i_4 - 2] [i_4 - 1] [i_4 - 1] [i_4]))) : (((unsigned int) 6727595819482096428LL))));
        arr_19 [i_4] [i_4 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_4 + 1] [i_4 + 1] [i_4 + 1])) + (((max((((/* implicit */int) arr_18 [i_4])), (arr_17 [i_4] [i_4]))) + (((/* implicit */int) arr_8 [i_4] [i_4] [i_4 - 1]))))));
        var_18 += ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4 - 2] [i_4 - 2]))) < (var_9))) && (((/* implicit */_Bool) 18446744073709551608ULL)));
    }
    for (unsigned short i_5 = 2; i_5 < 13; i_5 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) arr_21 [i_5 - 2]);
        arr_23 [i_5] [(unsigned char)4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) min((arr_21 [i_5 - 2]), (arr_21 [i_5 - 2])))), ((unsigned short)5224)));
    }
    /* vectorizable */
    for (unsigned short i_6 = 2; i_6 < 13; i_6 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
            {
                {
                    var_20 *= ((unsigned long long int) (+(2099473666)));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_20 [i_8] [i_7 + 1]))));
                    var_22 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)45671)) ? (((/* implicit */unsigned int) arr_17 [i_6] [i_6])) : (arr_9 [(_Bool)1] [i_7] [i_8] [2U])))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [1ULL])) ? (((/* implicit */int) var_12)) : (-1023236757)));
        arr_32 [i_6 - 2] [i_6 - 2] &= ((/* implicit */long long int) (-(arr_22 [(_Bool)1])));
        var_24 = ((/* implicit */unsigned int) (-(arr_27 [i_6])));
    }
    var_25 = ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)0)), (1023236728)));
}

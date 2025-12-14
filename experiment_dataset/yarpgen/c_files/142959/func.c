/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142959
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (signed char)-19))))));
        var_19 += ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)14839))));
        var_20 += ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? ((+(var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) var_7);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4539628424389459968ULL)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */int) (unsigned short)14839))));
        arr_5 [i_1] = ((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) var_12)))));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) & (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8781))) : (11123325824864643259ULL)))));
    }
    /* vectorizable */
    for (short i_2 = 1; i_2 < 8; i_2 += 4) 
    {
        var_22 += ((/* implicit */int) var_6);
        var_23 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-8781)) ? (((/* implicit */int) (unsigned short)50696)) : (((/* implicit */int) (signed char)-1)))) / (arr_3 [i_2 + 1] [i_2])));
        arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 + 3]))) & (18142347116738833932ULL)));
        /* LoopNest 2 */
        for (unsigned int i_3 = 4; i_3 < 10; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                {
                    var_24 = ((/* implicit */_Bool) var_5);
                    var_25 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) (signed char)-9))));
                    arr_17 [i_2] [i_3 - 1] [i_3] = (+(((/* implicit */int) var_10)));
                    var_26 += ((var_6) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57735))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) arr_13 [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2])) % (3108360289U)));
    }
    for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 4) 
    {
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)32767)) > (((/* implicit */int) (signed char)-118))));
        var_29 ^= ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) (unsigned char)249)) != (((/* implicit */int) arr_1 [i_5 + 2]))))), (((arr_1 [i_5 + 1]) ? (((/* implicit */int) arr_1 [i_5 + 1])) : (var_5)))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                {
                    arr_26 [i_7] [i_7] [i_6] [i_5] = ((/* implicit */short) arr_1 [i_5 + 1]);
                    arr_27 [i_5] [i_6] [i_7] [i_6] |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_5]))))))) ? (min((((/* implicit */unsigned long long int) 0)), (7323418248844908357ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_30 = ((/* implicit */_Bool) (unsigned char)7);
                }
            } 
        } 
    }
    var_31 = ((/* implicit */int) (-(((long long int) var_7))));
}

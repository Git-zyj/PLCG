/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115740
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (4106664843868112273ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-21)), ((unsigned short)34887))))))) ^ (((((/* implicit */_Bool) 2325425704266161954ULL)) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (2719889810510686091ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54647))) * (10403149990136451787ULL))))))))));
        var_17 *= ((/* implicit */signed char) max((((min((var_3), (((/* implicit */unsigned long long int) (unsigned short)30620)))) << (((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) - (5272))))), (4106664843868112249ULL)));
        var_18 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) (signed char)48))))) ^ (((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (205346250565884231ULL))))) >= (((((/* implicit */_Bool) var_5)) ? (18402996013040247242ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 2])))))));
    }
    var_19 = ((/* implicit */signed char) var_12);
    var_20 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) arr_0 [3ULL] [i_1]);
        var_22 = ((/* implicit */unsigned short) ((unsigned long long int) arr_3 [i_1]));
        var_23 = arr_2 [i_1];
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [12ULL] [i_1])) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3649423136910595505ULL)) && (((/* implicit */_Bool) arr_0 [i_1] [i_1]))))))));
    }
    for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) ((max((4106664843868112251ULL), (arr_4 [i_2] [i_2]))) << (((((((/* implicit */_Bool) arr_1 [i_2])) ? (((((/* implicit */_Bool) var_6)) ? (5438573466572093975ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_2])) & (((/* implicit */int) arr_0 [i_2] [i_2]))))))) - (5438573466572093952ULL)))));
        var_26 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_13))))) / (((((/* implicit */_Bool) (signed char)-41)) ? (arr_5 [i_2] [(unsigned short)6]) : (arr_4 [i_2] [i_2]))))));
        var_27 = (-(((unsigned long long int) ((((/* implicit */int) (signed char)22)) << (((((/* implicit */int) var_5)) - (14)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                {
                    arr_13 [i_2] [i_3] [i_3] [i_2] = max((min((arr_8 [i_2]), (((/* implicit */unsigned long long int) ((unsigned short) arr_12 [i_2]))))), (((/* implicit */unsigned long long int) ((arr_5 [i_2] [i_3]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)87)))))));
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((unsigned long long int) (-(arr_4 [i_4] [i_3]))))));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((unsigned long long int) arr_11 [i_2]))))) ? (((((((/* implicit */_Bool) 18327448180358215237ULL)) && (((/* implicit */_Bool) (signed char)-127)))) ? (arr_11 [i_2]) : (min((arr_5 [i_2] [i_2]), (((/* implicit */unsigned long long int) var_4)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (var_1)))) ? ((~(var_2))) : (arr_4 [5ULL] [5ULL])))));
    }
}

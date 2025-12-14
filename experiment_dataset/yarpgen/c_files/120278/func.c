/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120278
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)18922)) ? (min((((((/* implicit */_Bool) 3976570748532374838ULL)) ? (3976570748532374837ULL) : (14470173325177176777ULL))), ((+(3976570748532374834ULL))))) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_5)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_13 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) 8388544))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_0] [6ULL] [i_0]), (var_2))))) % (((9696623281830345218ULL) / (var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31129)))));
                    arr_9 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0 + 1])) ^ (((((/* implicit */_Bool) arr_1 [(unsigned short)2] [(signed char)17])) ? (var_1) : (((/* implicit */int) arr_6 [i_2] [i_1]))))))) ^ (9696623281830345236ULL)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 3) 
        {
            for (unsigned short i_5 = 2; i_5 < 20; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 2; i_6 < 20; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 20; i_7 += 4) 
                        {
                            {
                                var_14 = var_5;
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_5 - 2])) ? (((/* implicit */int) (unsigned short)268)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_7] [i_4] [i_3]))) : (((8929296289826273335ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_3] [(_Bool)1] [i_4] [i_5] [i_4] [i_5] [i_7])))))))) ? (min(((-(arr_11 [(_Bool)1] [i_5]))), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((14470173325177176778ULL), (8750120791879206412ULL)))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_10))))))))))))));
                            }
                        } 
                    } 
                    arr_24 [(unsigned short)0] [(unsigned short)0] [i_5] &= ((/* implicit */unsigned char) ((arr_16 [i_3] [i_3] [i_3]) / (((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14470173325177176770ULL)))));
                    var_16 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) 2001811865)), (arr_11 [i_3] [i_5 + 1]))), (((/* implicit */unsigned long long int) ((_Bool) -2001811839)))));
                }
            } 
        } 
    } 
}

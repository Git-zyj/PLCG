/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154979
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_13)))) && (((/* implicit */_Bool) ((((7680ULL) | (926397774672313964ULL))) / ((-(var_15))))))));
    var_19 = ((unsigned long long int) ((max((var_16), (var_15))) < (max((var_16), (12836228751619885659ULL)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_20 -= (-(max((arr_5 [i_2]), (((/* implicit */unsigned long long int) ((var_10) < (arr_5 [i_0])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        var_21 = arr_3 [i_1] [i_2] [i_1];
                        var_22 = ((unsigned long long int) ((unsigned long long int) 10354341962043909207ULL));
                        var_23 *= ((((max((arr_4 [i_0]), (14180120478901933863ULL))) > (((((/* implicit */_Bool) var_13)) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (arr_4 [i_1]))))) ? (arr_6 [i_3] [i_3] [i_0] [i_2 + 1]) : ((-(min((arr_1 [i_0]), (var_12))))));
                        var_24 = ((unsigned long long int) max((571957152676052992ULL), (arr_9 [i_0] [i_1] [i_2 - 1] [i_3 - 2] [i_2] [i_1 + 1])));
                        arr_10 [i_2] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((unsigned long long int) ((arr_9 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3]) << (((var_16) - (449166433442701095ULL))))))) ? (arr_8 [i_0] [i_0] [i_0] [i_3 + 3] [i_1] [i_3 + 3]) : (min((arr_4 [i_0 + 3]), (arr_4 [i_0 + 1]))));
                    }
                }
            } 
        } 
    } 
}

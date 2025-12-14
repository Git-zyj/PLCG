/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129365
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_16 = ((((((/* implicit */_Bool) 18446744073709551605ULL)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_1]))) >> (((var_7) - (6906276072365017422ULL))));
                    arr_8 [i_2] [i_0] [i_0] [i_0 + 2] = ((min((26ULL), (8465078493344366443ULL))) | (min((min((17ULL), (14704215025430167641ULL))), ((~(var_12))))));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (var_11)));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 2) 
                {
                    var_18 = min((((((/* implicit */_Bool) arr_6 [i_3 - 1] [i_3] [i_3 - 1])) ? (arr_10 [i_0] [i_3 + 2] [i_0]) : (var_12))), (min((arr_9 [i_0 - 1] [i_0] [12ULL]), (var_1))));
                    var_19 = min((5369751898413769312ULL), ((~(min((9981665580365185191ULL), (18014398509481984ULL))))));
                    var_20 = min(((~(13076992175295782332ULL))), (min((((arr_0 [i_0]) | (70093866270720ULL))), (((/* implicit */unsigned long long int) ((8465078493344366446ULL) != (arr_2 [i_0] [i_1])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 3) 
                    {
                        arr_13 [i_1] &= min(((+(18446744073709551615ULL))), ((-(var_14))));
                        arr_14 [i_0] [i_0] [i_3] [2ULL] = arr_9 [i_0] [i_0] [i_3 - 1];
                    }
                }
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (var_10)));
                    arr_18 [i_0] = ((((/* implicit */_Bool) (+(1260476232270126116ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (arr_12 [i_0] [i_0] [i_0]) : (18446744073709551603ULL))) >= (min((arr_16 [i_0] [i_0]), (arr_4 [i_0]))))))) : (arr_10 [i_5] [i_5] [i_0]));
                }
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (9981665580365185166ULL)));
            }
        } 
    } 
    var_23 = (-(((((/* implicit */_Bool) 10039417142784624747ULL)) ? (0ULL) : (18446673979843280888ULL))));
    var_24 |= var_9;
}

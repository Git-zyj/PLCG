/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11280
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
    for (short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    arr_8 [i_0 + 1] [i_0] [i_1] [(signed char)17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((arr_1 [(_Bool)1] [i_1]) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 2] [i_0] [i_2 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_10)) ? (16301171586716376073ULL) : (3707564338005655945ULL)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)23)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)45570))));
                        var_20 = ((/* implicit */unsigned int) 6979683293122122789ULL);
                    }
                }
                var_21 = 18446744073709551608ULL;
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14)))))) << (((((/* implicit */int) var_17)) - (30609)))));
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        for (short i_5 = 3; i_5 < 17; i_5 += 3) 
        {
            {
                var_23 = ((/* implicit */unsigned short) 6193150387358044015ULL);
                arr_16 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4])) > (((/* implicit */int) arr_1 [i_5 - 1] [i_5 - 2]))));
                arr_17 [(signed char)18] [(signed char)18] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) ((_Bool) (signed char)77))), (min((5193014220673880958ULL), (((/* implicit */unsigned long long int) (unsigned short)2387)))))) / (min((17710618113179960586ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10)))))))));
            }
        } 
    } 
    var_24 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) & (((unsigned long long int) 1ULL)));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183399
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((1U), (2686574496U)))) ? (((unsigned int) (unsigned short)46567)) : (((((/* implicit */_Bool) 3996231310U)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)168)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967288U)))))) : (4294967282U))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2712895670567071509LL)) && (((/* implicit */_Bool) 4294967275U))));
                        arr_14 [(unsigned short)16] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 2147483648U))));
                        arr_15 [(signed char)7] [(signed char)7] [i_1] [i_3] [i_1] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32256)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9270))) : (15728640U)))) < (((((/* implicit */long long int) ((/* implicit */int) var_10))) | (var_13))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + ((-(1151761267U))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)32)))))));
                        arr_16 [i_3] [(unsigned short)6] [(unsigned short)6] [i_3] &= ((/* implicit */unsigned char) var_3);
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        arr_19 [i_0] [5U] [i_0] [i_1] = (-(4294967295U));
                        var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */long long int) 1023U)) + (var_7)))));
                        var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((((/* implicit */_Bool) 1U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (16109829101693960752ULL))) : (18446744073709551615ULL)));
                        var_19 = ((/* implicit */unsigned short) var_7);
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned char)153)))))))));
                    }
                }
            } 
        } 
        arr_20 [i_0] = ((/* implicit */unsigned short) (short)-1);
    }
    var_21 = ((/* implicit */unsigned int) (-(((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)191))) - (2712895670567071509LL))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65521)))))));
    var_22 = ((((/* implicit */unsigned int) (((((~(((/* implicit */int) (short)13185)))) + (2147483647))) >> (((((((/* implicit */_Bool) (short)6822)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117))) : (var_8))) - (4294967166U)))))) ^ ((~(((3329595791U) & (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))));
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_6))));
}

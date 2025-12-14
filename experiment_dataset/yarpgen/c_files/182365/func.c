/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182365
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
    var_15 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)31056))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) arr_1 [i_1 - 3]);
                /* LoopSeq 2 */
                for (unsigned int i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_17 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((-1247390282) + (((/* implicit */int) (unsigned char)171)))))));
                                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((int) (unsigned short)52609)))));
                            }
                        } 
                    } 
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)200)))) ? (((/* implicit */int) max((((/* implicit */short) arr_4 [i_0] [i_0] [i_2] [i_0])), (var_6)))) : ((~(((/* implicit */int) (unsigned short)12926)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)85)) - (51)))))))))));
                }
                for (unsigned short i_5 = 2; i_5 < 17; i_5 += 1) 
                {
                    var_19 ^= ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_13 [i_1 + 1] [i_5 - 2]))))));
                    var_20 |= ((/* implicit */signed char) max(((~(((/* implicit */int) (_Bool)0)))), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)24))))));
                    var_21 |= ((/* implicit */short) var_8);
                }
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_8);
}

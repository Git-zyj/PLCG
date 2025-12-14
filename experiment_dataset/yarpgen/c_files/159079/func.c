/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159079
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
    var_14 *= ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 19; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)64472)) : (((/* implicit */int) (unsigned short)64472))))) ? ((-((~(((/* implicit */int) var_3)))))) : (((/* implicit */int) arr_1 [i_0] [(unsigned char)16]))));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (+(9223372036854775807LL)))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [(unsigned char)17])) : (((/* implicit */int) arr_6 [i_1] [i_2 - 1]))))) - (((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_13 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] [i_1] = ((/* implicit */unsigned char) (+((+(10393298238714702508ULL)))));
            }
        } 
    } 
    var_17 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 18356206075385187892ULL)) ? (-1712258780) : (((/* implicit */int) (short)-27619))));
}

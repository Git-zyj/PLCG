/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15827
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
    var_18 = ((/* implicit */int) min((((((/* implicit */_Bool) 16454541799242764904ULL)) ? (16454541799242764874ULL) : ((-(16454541799242764874ULL))))), (((/* implicit */unsigned long long int) var_3))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) var_17);
        arr_3 [i_0] = ((/* implicit */unsigned char) (((+((~(18446744073709551601ULL))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_20 += ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_2 - 1] [i_2] [i_2] [i_2])), (16454541799242764874ULL))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (6641682255680799877LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)40)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            var_22 *= ((/* implicit */int) min((1992202274466786726ULL), (((/* implicit */unsigned long long int) 4294967295U))));
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((var_14) ? (1992202274466786726ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) ((long long int) var_7)))))) ? (max((((/* implicit */long long int) arr_12 [(_Bool)1] [i_1] [i_2 + 1] [i_1] [i_2 + 1] [i_2 + 1])), (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))))))) : (((((/* implicit */_Bool) 247600818U)) ? (((/* implicit */long long int) 3928380779U)) : (1406282541410760863LL)))));
                        }
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)(-32767 - 1)))))) ? (((((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_0]) % (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))) : (16454541799242764904ULL))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 16454541799242764904ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)127)))))))));
    }
    /* vectorizable */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_24 = ((/* implicit */unsigned long long int) arr_18 [i_5 - 1] [i_5 - 1]);
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_5 - 1] [i_5 - 1])) ? (((/* implicit */unsigned long long int) arr_2 [i_5 - 1] [i_5 - 1])) : (1992202274466786733ULL)));
    }
}

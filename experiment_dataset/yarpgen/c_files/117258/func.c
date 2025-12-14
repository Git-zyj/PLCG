/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117258
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
    var_10 = ((/* implicit */long long int) min((var_10), (((var_0) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)126)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)123)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)25068)) * (((/* implicit */int) var_3))))) : (min((-3923906307436677350LL), (((/* implicit */long long int) var_0)))))) : (min(((-(-3923906307436677351LL))), (((/* implicit */long long int) (signed char)38))))))));
    var_11 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) ((signed char) 3923906307436677340LL))) < (((/* implicit */int) var_6)))))));
    var_12 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_13 = ((arr_1 [i_0]) < (arr_1 [i_0]));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_14 = ((/* implicit */signed char) var_6);
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [(unsigned short)0] [i_1]))));
            arr_6 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 1714332398223745632ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47618))) : (-3923906307436677350LL))))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)255))))) ? (arr_4 [i_2 + 1]) : (arr_4 [i_2 + 1])));
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_18 = ((((/* implicit */_Bool) ((long long int) var_3))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-2)) + (((/* implicit */int) var_8))))) : (var_2));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (short)-17806)) ? (arr_4 [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) 8589934591ULL))))))))));
                }
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    arr_18 [i_4] [i_4] [i_2] [i_4] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((short) arr_12 [i_0] [i_1] [i_2 + 1] [i_4])))));
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) 528024546))));
                    var_21 = arr_2 [i_4];
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_14 [i_2] [i_2] [i_2 + 1] [i_2 + 1]))));
                }
            }
        }
        var_23 = ((/* implicit */short) var_0);
    }
}

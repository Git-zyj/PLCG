/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183090
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
    var_12 = ((/* implicit */unsigned short) max((var_6), (((/* implicit */short) (!(((/* implicit */_Bool) var_8)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */long long int) arr_6 [i_2]);
                    var_14 = ((/* implicit */short) arr_0 [i_1]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) arr_9 [i_3]);
        /* LoopSeq 3 */
        for (signed char i_4 = 1; i_4 < 9; i_4 += 2) 
        {
            var_16 ^= ((/* implicit */short) ((-1712408904) / (-942485743)));
            var_17 ^= ((/* implicit */short) arr_11 [i_4 + 1]);
        }
        for (int i_5 = 1; i_5 < 8; i_5 += 3) 
        {
            arr_18 [i_5 + 1] [0] [i_5 - 1] = ((/* implicit */short) arr_12 [i_5 - 1] [i_3]);
            var_18 += ((((/* implicit */int) arr_16 [i_5 + 2] [(unsigned short)1])) + (((/* implicit */int) arr_16 [i_5 + 2] [(_Bool)1])));
        }
        for (int i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 942485721)) ? (1712408911) : (-2136355579))))));
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                arr_24 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) || (((/* implicit */_Bool) -1737949649))));
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [(unsigned short)10] [i_7])))))));
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    var_21 -= ((/* implicit */unsigned long long int) var_6);
                    arr_28 [i_3] [i_7] [i_7] [i_8] [i_3] = ((/* implicit */signed char) var_6);
                }
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((942485743) & (((/* implicit */int) arr_11 [i_7])))) - (((((/* implicit */_Bool) 942485745)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_25 [i_7] [2ULL] [i_3])))))))));
                arr_29 [(signed char)3] [i_7] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_15 [i_3]))));
            }
        }
        var_23 -= ((/* implicit */unsigned short) arr_26 [i_3] [(unsigned short)6] [i_3] [i_3]);
    }
    var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))));
}

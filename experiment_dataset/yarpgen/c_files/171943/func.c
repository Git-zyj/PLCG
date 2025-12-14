/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171943
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
    for (short i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_2 [i_2]))))) ? ((+(((/* implicit */int) (short)-11)))) : (((/* implicit */int) var_6)))))));
                    arr_11 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */short) var_4);
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (unsigned short)32266))));
                }
                var_17 = max((((/* implicit */unsigned short) ((short) var_3))), (arr_10 [i_0] [i_0] [i_1]));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)32766)), ((unsigned short)65535)))) ? ((((~(((/* implicit */int) (unsigned short)8191)))) ^ (((/* implicit */int) min((arr_1 [(unsigned short)4]), (var_10)))))) : (max((((/* implicit */int) max(((unsigned short)63892), (((/* implicit */unsigned short) (short)128))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-127)) : (((/* implicit */int) (unsigned short)24946))))))));
                var_19 += var_8;
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        for (short i_4 = 3; i_4 < 20; i_4 += 1) 
        {
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_13))));
                var_21 = ((/* implicit */short) ((max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65528))))), ((+(((/* implicit */int) (short)3584)))))) & (((/* implicit */int) max(((unsigned short)65512), ((unsigned short)65528))))));
                var_22 = max(((unsigned short)43696), (((/* implicit */unsigned short) (short)32767)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        for (unsigned short i_6 = 3; i_6 < 16; i_6 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_10)) ^ (((/* implicit */int) (unsigned short)61763)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_19 [i_6 - 2] [i_6 - 3]))))));
                var_24 = arr_18 [i_5];
                var_25 = ((/* implicit */unsigned short) (short)-22081);
            }
        } 
    } 
    var_26 = ((unsigned short) max((max((((/* implicit */unsigned short) (short)32744)), (var_4))), (((/* implicit */unsigned short) ((short) (unsigned short)56206)))));
    var_27 &= ((/* implicit */short) ((unsigned short) var_12));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168908
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
    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), (var_15)));
    var_17 = max((((/* implicit */unsigned long long int) var_1)), (var_4));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_3 [i_0] [i_1]))))) + (((/* implicit */int) arr_1 [i_0])))));
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */int) (unsigned short)21267)))), (2135207483))) | ((+(((/* implicit */int) ((signed char) 2135207490)))))));
                var_18 = ((/* implicit */short) ((unsigned short) ((unsigned long long int) 3878672167U)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 3; i_2 < 14; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_3 = 1; i_3 < 12; i_3 += 3) 
        {
            var_19 = ((/* implicit */long long int) arr_5 [i_3] [i_3] [i_3 + 2]);
            /* LoopSeq 1 */
            for (unsigned short i_4 = 4; i_4 < 13; i_4 += 2) 
            {
                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((((/* implicit */int) arr_15 [i_3])) / (-2135207483))))))));
                arr_16 [i_2] [i_3] [i_2] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned int) ((-2135207490) <= ((-(((/* implicit */int) arr_4 [i_2] [i_2] [i_2]))))))), (2311312611U)));
            }
        }
        arr_17 [i_2 - 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_2 - 3])) / (((/* implicit */int) arr_15 [i_2]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -2135207486)) ? (((/* implicit */int) arr_15 [i_2 - 2])) : (-2135207484))))));
    }
    var_21 = ((/* implicit */signed char) (!(((var_9) == (((/* implicit */int) var_10))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186891
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_18 *= ((/* implicit */short) ((((((((/* implicit */int) var_14)) + (((/* implicit */int) (short)27530)))) + ((+(((/* implicit */int) arr_5 [i_0] [i_1 + 2] [(short)4] [i_2])))))) | (((((/* implicit */_Bool) (short)15694)) ? (((/* implicit */int) ((short) (short)-27592))) : ((-(((/* implicit */int) (short)15021))))))));
                    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 - 3] [i_1 - 3])) + (((/* implicit */int) (short)-27592))))) ? (((/* implicit */int) (short)3764)) : (((/* implicit */int) var_11)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 1; i_3 < 7; i_3 += 2) 
    {
        for (short i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            {
                var_20 |= ((/* implicit */short) (!(((/* implicit */_Bool) min(((short)32767), ((short)3764))))));
                var_21 -= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) (short)-1337)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        for (short i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            {
                var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))));
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min(((short)25832), (((short) (short)7624))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_9 [i_5])) : (((/* implicit */int) max(((short)-6056), (var_9)))))) : (((((/* implicit */_Bool) max((var_4), (arr_3 [i_5])))) ? (((/* implicit */int) ((((/* implicit */int) (short)15682)) > (((/* implicit */int) (short)-30995))))) : (((/* implicit */int) var_6))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-16113)) ? (((/* implicit */int) (short)-15021)) : (((/* implicit */int) var_6)))))) & (((/* implicit */int) max(((short)-15265), ((short)8047))))));
    var_25 = ((/* implicit */short) (-(((((/* implicit */int) ((((/* implicit */int) (short)8047)) > (((/* implicit */int) (short)-5349))))) / (((/* implicit */int) ((short) var_7)))))));
}

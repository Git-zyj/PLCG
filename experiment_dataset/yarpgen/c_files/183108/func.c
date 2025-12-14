/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183108
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) (~(((/* implicit */int) arr_0 [0])))))));
        var_11 *= ((/* implicit */short) (~(((/* implicit */int) ((signed char) arr_1 [(unsigned short)4])))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)-22845)) : (((/* implicit */int) (short)-22845))))) ? (((((/* implicit */_Bool) (unsigned char)253)) ? (3237141794U) : (((/* implicit */unsigned int) 1807682705)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_1]), ((short)511))))))))));
        arr_5 [(short)1] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)16])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_3 [i_1])), (1807682705)))) : (min((6937982409285864231ULL), (((/* implicit */unsigned long long int) var_9)))))) << ((((+(((/* implicit */int) arr_0 [i_1])))) - (23835))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] |= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((short) 2119656621))), (((((/* implicit */_Bool) var_2)) ? (arr_8 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6815)))))));
        var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)-26))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2119656621)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (short)27751))))) ? (((/* implicit */int) ((signed char) arr_8 [(signed char)12]))) : (((/* implicit */int) (signed char)-26)))) : (((/* implicit */int) min((((short) arr_7 [i_2])), (((/* implicit */short) ((unsigned char) (unsigned short)65533))))))))));
        var_14 = ((((/* implicit */_Bool) ((max((((/* implicit */int) (short)27751)), (-2119656621))) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)18))))))) ? ((-(((/* implicit */int) (signed char)25)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((1807682705) >> (((-8290505172920132920LL) + (8290505172920132929LL))))))))));
        var_15 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) || ((_Bool)1)))))) * (((unsigned long long int) ((((/* implicit */int) (short)-8808)) / (((/* implicit */int) (short)24207)))))));
    }
    var_16 |= ((/* implicit */_Bool) (((+(((((/* implicit */_Bool) var_1)) ? (var_0) : (var_0))))) & (((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_2)))) + (((/* implicit */int) var_6))))));
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (7181894740587347867ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)226)) || (((/* implicit */_Bool) var_2))))) : (((int) (short)-13053)))))));
}

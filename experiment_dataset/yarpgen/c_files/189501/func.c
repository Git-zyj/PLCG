/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189501
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
    var_18 |= ((/* implicit */short) max((((/* implicit */unsigned long long int) 255278953U)), (min((((((/* implicit */_Bool) 2088591190U)) ? (((/* implicit */unsigned long long int) 1898809790)) : (2419579379297470675ULL))), (((2419579379297470675ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30)))))))));
    var_19 = ((/* implicit */signed char) min((2088591190U), (((/* implicit */unsigned int) 0))));
    var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) (short)8930)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-8930)) <= (((/* implicit */int) (signed char)-24)))))) : (min((1212643743U), (4039688335U))))) >> (((((/* implicit */_Bool) -2497826004447871949LL)) ? (((((/* implicit */int) (unsigned char)194)) >> (((-5) + (13))))) : ((+(-1857648714)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] [i_0 - 2] = ((((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) arr_0 [i_0])))) ? (((((/* implicit */_Bool) -1925530890525921513LL)) ? (var_0) : (-261711908))) : ((-(((/* implicit */int) arr_2 [i_0])))));
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            arr_6 [i_0] [(_Bool)1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((arr_1 [i_1 + 2]) ? (((/* implicit */int) (unsigned short)6589)) : (((/* implicit */int) arr_0 [6]))))) : (((4294967289U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 2])))))));
            arr_7 [i_1 - 1] [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */int) var_3)) + (2147483647))) >> (((5529383851188400635LL) - (5529383851188400625LL))))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(short)3])))))));
        }
    }
}

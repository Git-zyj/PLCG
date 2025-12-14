/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113394
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
    var_16 = var_12;
    var_17 = ((/* implicit */short) ((((_Bool) var_3)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)144))))) ? ((-(1974223091))) : (1974223091))) : (((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) var_10)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (-1974223082) : (((/* implicit */int) (short)32767))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1974223116)) ? (((/* implicit */int) arr_0 [18])) : (1974223117)))) : (((8957835529655292336LL) << (((((((/* implicit */int) var_10)) + (15271))) - (10)))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        arr_2 [9] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) - (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))) ? (((/* implicit */unsigned long long int) ((long long int) var_0))) : (arr_1 [(signed char)1] [i_0])));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(arr_1 [5ULL] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) ((short) arr_4 [i_1] [i_1]));
        var_22 = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((-1974223116) + (2147483647))) << (((((/* implicit */int) arr_3 [i_1])) - (25016)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (((((/* implicit */_Bool) -1974223082)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1])))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((-1974223116) + (2147483647))) << (((((((((/* implicit */int) arr_3 [i_1])) - (25016))) + (51009))) - (18)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (((((/* implicit */_Bool) -1974223082)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */int) ((unsigned int) arr_1 [i_1] [i_1]));
    }
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) (+(arr_9 [i_2])))) ? (min((((/* implicit */long long int) min(((short)-32751), (arr_3 [(signed char)12])))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (var_7))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)178)))))) ? (((/* implicit */int) min((arr_0 [i_2]), (((/* implicit */short) var_0))))) : (((/* implicit */int) ((short) arr_8 [i_2])))))))))));
        var_24 = ((/* implicit */unsigned long long int) (+(arr_9 [i_2])));
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2])) + (((/* implicit */int) (short)32767))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 1974223086)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [(unsigned short)16])))))) - (((/* implicit */int) var_10)))))));
    }
    for (int i_3 = 1; i_3 < 15; i_3 += 3) 
    {
        var_26 *= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((unsigned int) arr_5 [i_3]))) ? (((((/* implicit */_Bool) arr_1 [i_3] [i_3])) ? (arr_1 [i_3 - 1] [i_3 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))))) : (max((var_14), (((/* implicit */unsigned long long int) arr_11 [i_3]))))))));
        var_27 = ((/* implicit */unsigned int) max((((/* implicit */short) ((_Bool) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_15)))))), ((short)32750)));
    }
    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) min((((unsigned long long int) ((int) var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_9)) : (var_11))) : (((/* implicit */long long int) (-(((/* implicit */int) var_10)))))))))))));
    var_29 = ((/* implicit */unsigned long long int) var_3);
}

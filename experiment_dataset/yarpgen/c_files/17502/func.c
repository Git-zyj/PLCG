/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17502
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
    var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((((/* implicit */short) var_6)), (var_8)))) : ((~(((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)122)) : (var_0)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (var_0))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)122)) && (var_6)))))) : (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) max((((/* implicit */short) (signed char)-121)), ((short)0)))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned char) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_4)))))))), (min((max((((/* implicit */unsigned long long int) (signed char)107)), (5702133732799927443ULL))), (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) 1533188122)) : (4294967295U))), (((/* implicit */unsigned int) ((_Bool) -418498267)))))) ? (798691125) : ((+(((/* implicit */int) (unsigned short)1145))))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)34922)) | (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (-2142634076) : (((/* implicit */int) arr_5 [(short)11]))))) || ((_Bool)1))))));
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) arr_6 [i_1] [i_1]))) << (((((((((/* implicit */_Bool) (unsigned short)65533)) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1]))) + (1927752805))) - (21)))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */int) (short)32767)) + (((((/* implicit */_Bool) (unsigned short)1147)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (unsigned char)32)))))), (((arr_2 [i_1]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)(-32767 - 1)))))));
    }
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
    {
        var_14 -= ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_9)) ? (2147483647) : (((/* implicit */int) (unsigned short)26087)))));
        arr_12 [i_2] = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_7 [i_2] [3])))) * ((-((-(2092258537)))))));
        var_15 *= ((((/* implicit */_Bool) var_11)) || (var_1));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            arr_16 [i_2] [i_2] = max((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (_Bool)0)))), (max((-1533188123), (((var_0) << (((((/* implicit */int) (unsigned char)227)) - (227))))))));
            var_16 += ((/* implicit */_Bool) var_9);
            var_17 = (unsigned short)64390;
        }
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
    {
        var_18 *= ((/* implicit */unsigned int) (~((-(((/* implicit */int) var_7))))));
        arr_19 [i_4] [i_4] = ((/* implicit */_Bool) -1533188114);
        var_19 *= ((/* implicit */short) ((((((/* implicit */_Bool) (short)2048)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))) - (((((/* implicit */int) arr_1 [i_4] [i_4])) - (var_9)))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (((((/* implicit */_Bool) arr_6 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))) : (2143289344U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) - (((/* implicit */int) (short)(-32767 - 1))))))));
    }
    var_21 = ((/* implicit */unsigned short) var_8);
    var_22 = ((/* implicit */_Bool) (signed char)-9);
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_11), (2128429008)))))))));
}

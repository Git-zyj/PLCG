/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15390
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
    var_12 *= ((/* implicit */unsigned char) var_5);
    var_13 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned int) var_8))), (((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */unsigned long long int) var_1)) + (var_9)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
        {
            arr_6 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 28U)) - ((+(9862723594679961100ULL)))));
            var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((short) max((arr_3 [i_0] [i_1]), (((/* implicit */unsigned short) var_0)))))), ((~(var_6)))));
        }
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
        {
            arr_9 [i_0] = ((/* implicit */long long int) (+(max((arr_2 [i_0]), (arr_2 [i_0])))));
            var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 4294967266U)) || (((/* implicit */_Bool) (unsigned short)65517)))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)65505)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [(_Bool)1] [i_2])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))))));
        }
        arr_10 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) % (((/* implicit */int) max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))))))));
    }
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) 10))) - (((/* implicit */int) (unsigned short)65518))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65498))))))) : (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_0 [i_3]))))))));
        var_17 = ((/* implicit */long long int) ((12U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)229)))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_9))));
        var_19 = ((/* implicit */short) (~(((unsigned long long int) arr_12 [i_3]))));
    }
    for (long long int i_4 = 4; i_4 < 23; i_4 += 4) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)28594)) : (((/* implicit */int) arr_16 [(unsigned char)11]))))) < (var_4)))) & (((((/* implicit */_Bool) arr_0 [i_4 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))))))));
        var_21 *= ((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) var_5))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (max((((max((var_4), (((/* implicit */unsigned int) var_10)))) + ((-(var_4))))), (((/* implicit */unsigned int) ((_Bool) arr_16 [i_4 - 4])))))));
        arr_17 [i_4] [21LL] = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_5 [i_4 - 4] [i_4 - 1] [i_4 - 1])))) < (((/* implicit */int) ((((/* implicit */_Bool) -7578100255249601228LL)) && (((/* implicit */_Bool) 1024756139)))))));
    }
}

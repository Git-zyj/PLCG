/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171061
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) 1622600549))))) ? (((/* implicit */unsigned int) 110687246)) : (3180007672U)))) ? (((/* implicit */long long int) (-(((((/* implicit */int) var_1)) & (((/* implicit */int) (_Bool)1))))))) : (max((((/* implicit */long long int) var_11)), (max((((/* implicit */long long int) 1622600549)), (var_4)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1172809568U)) ? (((/* implicit */int) arr_1 [i_0 + 3])) : (-1622600550))), (((/* implicit */int) ((((/* implicit */_Bool) -1622600566)) || (((/* implicit */_Bool) -1622600550)))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1622600549)) && ((_Bool)0))))) : (((/* implicit */int) min((arr_1 [i_0 - 1]), (arr_1 [i_0]))))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((int) (_Bool)1)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) max(((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)31)))), (((/* implicit */int) arr_1 [i_0]))))) : (9012323497279758689LL)));
        var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 1622600565)) : (var_4)))) ? (((((/* implicit */_Bool) var_5)) ? (2147483647) : (var_3))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) arr_1 [(_Bool)1])))))) : (((((((/* implicit */_Bool) var_9)) ? (-118195329) : (((/* implicit */int) (short)11244)))) | (1403115910)))));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (((+(((arr_0 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) + (var_9))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_1 [i_0])), (4098908759U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1704546778)))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (-1704546748) : (((/* implicit */int) arr_1 [i_0])))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 1622600575)))))))) : (max((((/* implicit */unsigned int) -473120399)), (4294967287U)))));
    }
}

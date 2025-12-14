/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125368
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
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 - 4])) % (((/* implicit */int) arr_2 [i_0 + 1]))))) ? (((/* implicit */int) (unsigned short)5785)) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 4])) >= (((/* implicit */int) arr_2 [i_0 - 3]))))))))));
        var_11 = ((/* implicit */short) min((((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)170)) ? (18014398508957696LL) : (((/* implicit */long long int) 3883837694U)))) != (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_0)))))))), (arr_1 [i_0 + 1] [i_0 + 1])));
    }
    var_12 = ((/* implicit */signed char) (((~(((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)119))))))) >> (((((/* implicit */int) var_4)) - (108)))));
    var_13 = ((/* implicit */unsigned char) ((_Bool) var_7));
    var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)115)) ? (var_8) : (((/* implicit */int) var_4))))) == (var_5)))) <= ((~(((((/* implicit */int) (unsigned char)131)) | (((/* implicit */int) var_4))))))));
    var_15 = ((/* implicit */unsigned int) var_0);
}

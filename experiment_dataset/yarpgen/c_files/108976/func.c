/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108976
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)24576)) : (((/* implicit */int) (unsigned char)76)))), ((-(((/* implicit */int) arr_0 [i_0]))))))) ? (var_2) : ((-(((((/* implicit */int) var_12)) + (((/* implicit */int) (unsigned char)212))))))));
        var_15 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]))) ? (((/* implicit */int) arr_1 [i_0])) : ((~(((/* implicit */int) (unsigned char)57)))))));
        arr_2 [i_0] = ((/* implicit */short) ((((((((/* implicit */int) arr_0 [i_0])) != (-1353163523))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_3))))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_6))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_7 [i_1] = var_9;
        arr_8 [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */int) arr_6 [i_1] [(unsigned char)21])) + (((/* implicit */int) arr_5 [i_1] [i_1])))) : (((/* implicit */int) arr_3 [i_1])))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        var_16 = (((!(((/* implicit */_Bool) var_3)))) ? (((int) (unsigned short)0)) : (((/* implicit */int) (short)-32744)));
        arr_11 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? ((~(((/* implicit */int) (unsigned short)65535)))) : ((+(var_4)))));
    }
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((var_1) > (((/* implicit */int) var_3))))), (var_12)))) || (((/* implicit */_Bool) var_8))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)6)))) & (((int) (unsigned char)76)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) var_0)) : (var_2)))) ? (((/* implicit */int) (unsigned char)180)) : ((+(((/* implicit */int) var_12))))))));
}

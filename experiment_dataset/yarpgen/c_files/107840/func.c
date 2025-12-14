/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107840
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (unsigned char)0))) ^ (((/* implicit */int) ((short) (~(var_9)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned short) ((short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)19669)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (unsigned char)24))))) != (((((/* implicit */unsigned int) ((/* implicit */int) (short)4095))) | (545261157U))))));
        var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) 1741020385U)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [1U])))))) : (max((8796093022207ULL), (((/* implicit */unsigned long long int) (unsigned short)45880))))))));
    }
    var_13 = ((/* implicit */short) min((((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) var_6)))))), ((+(var_4)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 1]))));
            var_15 = ((/* implicit */short) (~((+(((/* implicit */int) (unsigned char)9))))));
            arr_7 [i_2] = ((/* implicit */unsigned short) var_2);
        }
        var_16 = ((/* implicit */unsigned short) min((max((16777215ULL), (((/* implicit */unsigned long long int) arr_6 [i_1 + 2] [i_1 + 2] [(unsigned short)12])))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) arr_6 [i_1] [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) (unsigned char)10)))))))));
    }
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3)))) ^ (max((2273786398064095585ULL), (((/* implicit */unsigned long long int) (short)4080)))))) & (((/* implicit */unsigned long long int) max((var_4), (var_4)))))))));
}

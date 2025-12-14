/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154393
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
    var_20 = ((/* implicit */short) max((var_20), (var_2)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)8448))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) max((var_22), (arr_3 [18U])));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (signed char i_3 = 2; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */int) max(((short)15599), ((short)16383)))) > (-2085246330)));
                        var_24 += ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)17678)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) <= (var_8)))))));
                        var_25 = (~(((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_3 - 1] [i_0] [i_3 - 2])) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_3 - 1] [i_0] [i_3 + 1])) : (((/* implicit */int) arr_8 [i_0 - 1] [i_3 - 1] [i_0] [i_3])))));
                        var_26 = ((/* implicit */unsigned short) ((short) ((((((/* implicit */_Bool) (short)-16384)) || (((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3 - 2] [i_0] [i_0] [i_0 - 1])) || (((/* implicit */_Bool) arr_6 [i_0] [(short)5] [i_0]))))) : (((/* implicit */int) var_4)))));
                        var_27 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2950028498U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_6 [i_0] [i_0] [i_0])))))) ? (((((((/* implicit */_Bool) 212543282370820211LL)) ? (3639304867215720638LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_0] [i_3]))))) - (((((/* implicit */_Bool) arr_7 [i_2] [i_1 + 2] [i_2])) ? (var_12) : (((/* implicit */long long int) 768998253U)))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((short) arr_1 [4]))))));
                    }
                } 
            } 
            var_28 &= ((/* implicit */unsigned short) ((min((arr_1 [i_0 - 1]), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)37529))))))) % (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (+(1571791699))))))));
        }
        arr_10 [i_0] [(unsigned char)16] &= ((/* implicit */unsigned int) (((((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) > (((/* implicit */int) min(((short)15612), (arr_5 [i_0] [i_0 - 1] [(signed char)16])))))) ? (((/* implicit */int) arr_2 [12U])) : (((/* implicit */int) (short)-25671))));
    }
}

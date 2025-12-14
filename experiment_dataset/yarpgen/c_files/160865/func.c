/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160865
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_18 &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_5)) : (var_6)))));
        var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 409641402U)) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (3741634827U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) < (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 72057594029539328LL)))))));
        var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [4ULL])) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (max((var_4), (((/* implicit */unsigned long long int) (short)-7973))))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_10)))) : (140737421246464ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(_Bool)1])))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 &= ((/* implicit */unsigned long long int) (unsigned short)16384);
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))) ? (max((var_3), (((/* implicit */long long int) (short)-32764)))) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
        }
        for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) var_15)), ((short)23802)))) ? (min((((((/* implicit */_Bool) (unsigned char)70)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_2]))))), (((/* implicit */unsigned long long int) 3741634806U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16384)))));
            var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8613792798700014427LL)))))) * (arr_8 [i_2 + 1])));
        }
        for (short i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            var_23 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_12 [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) max((max((var_3), (((/* implicit */long long int) var_1)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_2)))))) : (arr_8 [i_0])));
            var_24 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)185))));
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_3] [i_0])) || (((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) ((unsigned char) var_16))))))));
            arr_14 [i_0] [i_3] = ((/* implicit */short) (!(arr_3 [i_0] [i_0] [i_0])));
            var_26 |= ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [i_0] [i_0]))) | (arr_9 [i_3] [0U]))), (((/* implicit */long long int) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((/* implicit */int) arr_3 [(_Bool)1] [i_3] [i_0])))))));
        }
    }
    var_27 &= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 1217419715U)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) < (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)7))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)0)) : (2047)))) ? (((long long int) -7865268340392528539LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182)))))));
    var_28 |= ((/* implicit */unsigned short) ((var_1) ? (((/* implicit */int) ((_Bool) ((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))))))) : (((/* implicit */int) max((max((((/* implicit */unsigned short) var_9)), (var_0))), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_12))) < (var_2)))))))));
    var_29 = ((/* implicit */unsigned int) max((((int) (!(((/* implicit */_Bool) var_0))))), (((/* implicit */int) max((var_0), (var_0))))));
}

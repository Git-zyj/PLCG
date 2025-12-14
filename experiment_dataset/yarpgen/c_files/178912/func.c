/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178912
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_15)) | (((/* implicit */int) var_17))))) > (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_8)))))) != (((((/* implicit */_Bool) ((var_2) << (((((-3622215321860967423LL) + (3622215321860967429LL))) - (6LL)))))) ? (((/* implicit */int) ((var_10) >= (var_13)))) : (((var_2) / (((/* implicit */int) (unsigned short)65535))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)2803)) > (((/* implicit */int) (unsigned short)16339))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)32767)) <= (((/* implicit */int) (unsigned short)6923)))) ? (((((/* implicit */_Bool) var_19)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39028))))) : (((var_19) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))) && (((((/* implicit */int) ((((/* implicit */int) arr_0 [(unsigned short)2])) >= (((/* implicit */int) arr_1 [i_0]))))) != (((((/* implicit */int) var_3)) | (((/* implicit */int) arr_1 [(signed char)3]))))))));
        arr_4 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) ((175854826) != (((/* implicit */int) arr_0 [(unsigned char)4]))))) : (((((/* implicit */_Bool) var_9)) ? (410617621) : (((/* implicit */int) (_Bool)1)))))) & (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 57344)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64512)))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) var_5)) & (var_19)))))))));
    }
    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((-9160875608208855741LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61979)))))) % (((((/* implicit */_Bool) (short)-7036)) ? (((/* implicit */int) (unsigned short)16982)) : (((/* implicit */int) (unsigned short)48559)))))) == (((((/* implicit */_Bool) 1052673947)) ? (((/* implicit */int) (unsigned short)27399)) : (((/* implicit */int) (unsigned short)1024))))));
}

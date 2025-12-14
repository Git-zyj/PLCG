/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105805
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
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((var_9) << (((((/* implicit */int) var_12)) - (1))))))));
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (unsigned short)7))));
    var_20 = ((/* implicit */unsigned long long int) (signed char)24);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (short)-32767);
        arr_4 [7U] [i_0 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (signed char)24))) ? (((long long int) 9223372036854775798LL)) : (((/* implicit */long long int) ((/* implicit */int) ((short) (short)-32765))))))) ? (((/* implicit */int) (unsigned char)16)) : (((((/* implicit */int) (unsigned short)28)) | (((/* implicit */int) (unsigned short)65535))))));
        arr_5 [i_0 + 3] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) ((unsigned long long int) 576460752302374912ULL))) ? (((/* implicit */int) ((signed char) 18446744073709551594ULL))) : (((((/* implicit */_Bool) 34ULL)) ? (((/* implicit */int) (short)32766)) : (((/* implicit */int) (unsigned short)65516)))))) + (2147483647))) << (((((/* implicit */int) (unsigned short)65535)) - (65535)))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (0U)));
    }
}

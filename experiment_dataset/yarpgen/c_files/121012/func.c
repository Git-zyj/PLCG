/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121012
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
    var_14 = ((/* implicit */unsigned char) ((max((var_1), (((/* implicit */long long int) ((unsigned short) (unsigned short)22575))))) == (((/* implicit */long long int) ((/* implicit */int) ((signed char) (-(((/* implicit */int) var_11)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) ((unsigned int) ((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
        var_16 = ((/* implicit */unsigned short) ((max((arr_1 [(short)9] [i_0 + 1]), (arr_1 [(unsigned char)4] [i_0 - 1]))) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-9)) >= (((/* implicit */int) (unsigned short)22575))))), ((unsigned short)42960)))) : (((/* implicit */int) ((((/* implicit */int) (!(arr_1 [i_0] [(unsigned char)5])))) > (var_6))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (2747564654109550208LL) : (((/* implicit */long long int) arr_6 [i_1] [i_1] [14U]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)119)) ? (arr_6 [i_0 + 1] [i_1] [i_0]) : (arr_6 [i_0] [i_1] [i_0]))))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-14)) ? (3951523000392732883ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-111)))))) ? (((((((/* implicit */int) var_13)) > (((/* implicit */int) var_5)))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) (~(var_6)))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)108)) | (-1))))))));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)125)) << (((((((/* implicit */_Bool) ((int) -5956528167559643623LL))) ? ((~(((/* implicit */int) (signed char)17)))) : (((/* implicit */int) (short)-5)))) + (36)))));
    }
    var_19 = ((/* implicit */_Bool) (-(var_0)));
    var_20 = ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) 14913617439386767060ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))) : (var_0))))) ^ (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))) - (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (var_5)))))))));
}

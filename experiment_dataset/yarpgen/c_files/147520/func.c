/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147520
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
    var_10 = ((/* implicit */_Bool) var_6);
    var_11 = ((/* implicit */_Bool) ((int) ((int) (~(((/* implicit */int) (signed char)0))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_12 -= ((/* implicit */unsigned char) (+(((long long int) var_6))));
            var_13 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? ((-(var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [3LL])) : (((/* implicit */int) var_0)))))))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (11934981387208522128ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)47))))));
            arr_8 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20629))) : (8129399555080469217ULL)))) ? ((-(10317344518629082399ULL))) : (((((/* implicit */_Bool) (-(15960931776527787994ULL)))) ? (((/* implicit */unsigned long long int) -1882051870)) : (arr_2 [i_1])))));
        }
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned long long int) -128579324)) : (var_8)))) ? (((((/* implicit */_Bool) (short)-11146)) ? (arr_2 [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [(_Bool)1] [i_2]))))))))));
            arr_11 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6313041533627003973ULL)) ? (((/* implicit */int) (unsigned short)63881)) : (((/* implicit */int) (unsigned short)65132))));
        }
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-66))))) ? (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (_Bool)1)))))) : ((+(((/* implicit */int) (_Bool)1))))));
    }
}

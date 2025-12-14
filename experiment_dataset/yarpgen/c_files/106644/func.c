/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106644
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) (~((((_Bool)1) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))))) : (max((((/* implicit */unsigned int) arr_2 [i_0])), (89026296U)))))));
        var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)15)))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_16 = ((/* implicit */unsigned char) (-(min((973050381), (((/* implicit */int) (unsigned short)65535))))));
                var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)2024))));
                arr_11 [i_1] [i_1] [(unsigned char)4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15279129434757812288ULL)) ? (((/* implicit */int) (short)-2025)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)14)) >= (((/* implicit */int) ((((/* implicit */_Bool) 804643477U)) && (((/* implicit */_Bool) 3167614638951739335ULL))))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) arr_5 [i_1]))))) : (((((/* implicit */_Bool) (short)25934)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)242))) : (664403910U)))))));
            }
            var_18 = ((/* implicit */_Bool) ((unsigned char) max(((short)-2014), (min(((short)-32762), (((/* implicit */short) (_Bool)1)))))));
        }
        var_19 = ((/* implicit */unsigned int) (short)32766);
    }
    var_20 = ((/* implicit */_Bool) ((((var_10) || (((/* implicit */_Bool) (-(var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (8466589860150524655ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) > (((/* implicit */int) (unsigned short)32927)))))))));
    var_21 = ((/* implicit */int) max((min((min((((/* implicit */unsigned int) var_13)), (var_1))), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) var_7))));
}

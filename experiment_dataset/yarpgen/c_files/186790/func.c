/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186790
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-28842))))) : (((var_2) | (((/* implicit */long long int) 7680U))))));
                var_17 += var_14;
            }
        } 
    } 
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (unsigned char)149))))) % (((/* implicit */int) max((var_15), (((/* implicit */unsigned short) (unsigned char)214)))))))) ? (((((/* implicit */_Bool) ((var_7) + (var_7)))) ? (((/* implicit */unsigned long long int) (-(var_4)))) : (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(12348894552718023484ULL)))) ? (((/* implicit */int) var_5)) : ((~(var_12)))))))))));
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_19 -= ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) (short)-7911)), (arr_4 [i_2]))), (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (arr_4 [i_2])))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((min((((((/* implicit */_Bool) 536854528)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_6 [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_13))))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_2]))))) ? (((/* implicit */int) (short)255)) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)-14441)), (var_13))))))))))));
    }
    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((114688U) >= (((/* implicit */unsigned int) 1743383299))))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) -1743383300)) == (((((/* implicit */_Bool) var_13)) ? (2839696849399838055ULL) : (((/* implicit */unsigned long long int) var_4)))))))));
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (arr_6 [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [12]))))))));
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((max((var_2), (((/* implicit */long long int) arr_2 [i_3] [i_3] [i_3 + 1])))) >= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_2 [i_3 - 1] [i_3] [11])))))))));
    }
    var_24 = ((/* implicit */short) var_3);
    var_25 = ((/* implicit */int) min((var_25), (min((((((var_4) + (2147483647))) << (((((/* implicit */int) var_11)) - (5822))))), (((/* implicit */int) var_13))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130019
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
    var_12 ^= ((/* implicit */short) (+(var_7)));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)16383)) - ((+(((/* implicit */int) (short)-25318))))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) 1951837607))) || (((/* implicit */_Bool) (unsigned char)242))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [(short)20] |= ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (+(-1951837607)))))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [(unsigned short)7] [i_0])))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned short)63540))))))) % (4574192774418132134LL)));
    }
    for (short i_1 = 4; i_1 < 22; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) -1951837607))))))), (((int) (signed char)-74)))))));
        arr_6 [2] [i_1 + 1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (short)17427)) >= (((/* implicit */int) arr_1 [i_1 - 4] [i_1 - 4]))))) - ((+((+(((/* implicit */int) arr_4 [i_1]))))))));
    }
    for (unsigned char i_2 = 2; i_2 < 24; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned int) min((16383), (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_10)))))))));
        var_17 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4201156420772647124LL)) ^ (18446744073709551615ULL)))) ? ((+(var_3))) : ((~(((/* implicit */int) var_9))))))), (((134201344U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 + 1])))))));
        arr_10 [i_2 + 1] = (+(((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_2 + 1] [i_2 - 2])))));
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_18 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-16))));
            var_19 = ((/* implicit */unsigned char) min(((~((+(((/* implicit */int) (short)17413)))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))))));
        }
        arr_13 [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) var_11)))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157707
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_12))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [8LL] = ((/* implicit */int) ((((/* implicit */_Bool) (+(min((arr_1 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)19))))))) ? (((3704838300U) | ((+(var_16))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        /* LoopNest 3 */
        for (long long int i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (((((-(((/* implicit */int) (unsigned char)205)))) + (2147483647))) >> (((max((421741948U), (((/* implicit */unsigned int) arr_5 [i_3] [(unsigned short)14])))) - (2592872068U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_4)))) || (((((/* implicit */_Bool) -7170181650488278257LL)) && (((/* implicit */_Bool) 3873225367U)))))))) : ((~(3873225348U))))))));
                        arr_10 [i_1] [i_1] [i_2] [i_1] [i_0] = arr_6 [i_2] [i_2] [i_0] [i_0];
                        var_22 = (!(((/* implicit */_Bool) (+(8815013487836107719ULL)))));
                        arr_11 [i_0] [i_1 - 1] [i_1 - 4] [i_2] [i_1 - 4] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_3 [i_1 + 3]))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((421741905U) - (421741944U)))))) ? (((((var_16) <= (var_11))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 9LL)) ? (3873225366U) : (((/* implicit */unsigned int) 884019560))))) : (((8152657688262199783LL) / (8152657688262199783LL))))) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)91)), (arr_5 [0U] [i_0])))))))));
    }
    var_24 -= ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) var_6)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) var_11))));
    var_25 = ((/* implicit */unsigned int) min((-1589214447), (((int) (!((_Bool)1))))));
    /* LoopNest 2 */
    for (unsigned int i_4 = 1; i_4 < 18; i_4 += 3) 
    {
        for (unsigned short i_5 = 1; i_5 < 19; i_5 += 4) 
        {
            {
                arr_19 [i_4] [i_4] [(signed char)11] |= ((/* implicit */int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) arr_13 [i_5])))))))));
                arr_20 [i_5] = ((/* implicit */int) ((signed char) (-(((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
}

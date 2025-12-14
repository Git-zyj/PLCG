/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185343
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */int) (_Bool)1)) : (-1026156110))) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_7)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = 4360942244939009210LL;
        var_18 |= ((/* implicit */long long int) ((unsigned short) (~(arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) : (((/* implicit */int) ((unsigned short) var_10)))));
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned int) var_6);
                    arr_11 [i_2] [i_1] [(unsigned short)12] = ((/* implicit */unsigned char) -1322593452);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (int i_4 = 2; i_4 < 15; i_4 += 2) 
            {
                {
                    arr_18 [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((_Bool) 1158024122U)))) ? (max(((-(((/* implicit */int) arr_9 [i_0] [i_4])))), (((((/* implicit */_Bool) arr_7 [i_0] [i_3] [i_4])) ? (var_9) : (var_14))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_9 [i_0] [i_4 + 2])) : (((/* implicit */int) var_5))))) ? (arr_8 [i_4 + 2] [i_4 + 1] [i_4 + 1]) : ((-(var_9)))))));
                    arr_19 [i_0] = max((((((/* implicit */_Bool) arr_5 [i_0] [i_4 + 2] [i_4 + 2])) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_4 + 2] [i_3]))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_5] [i_6] [i_6]))))) ? (((/* implicit */int) arr_23 [i_5] [i_6] [i_5])) : (((int) 12209160130333624904ULL))));
                var_21 = ((/* implicit */signed char) var_14);
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? ((~(var_8))) : (((((/* implicit */_Bool) (short)22782)) ? (18446744073709551615ULL) : (var_7)))))) ? (((/* implicit */unsigned long long int) var_14)) : ((-(18446744073709551615ULL)))));
}

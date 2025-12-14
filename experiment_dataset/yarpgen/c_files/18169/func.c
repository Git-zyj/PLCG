/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18169
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)42481)) | (((/* implicit */int) (_Bool)0))))), (arr_1 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) var_2));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : ((+(var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_0] [i_0]))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) 2148150764U)) : (6844409308349916252ULL)))))));
    }
    for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((unsigned short) ((((/* implicit */_Bool) arr_5 [i_1 + 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)170);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 2; i_2 < 17; i_2 += 4) 
        {
            var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (+(var_8))))));
            var_22 *= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_17))))) << (((((/* implicit */int) (signed char)-8)) + (38)))));
            /* LoopSeq 3 */
            for (short i_3 = 2; i_3 < 16; i_3 += 3) 
            {
                var_23 &= ((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */int) (unsigned char)170)) : (-619628559))) != (((/* implicit */int) (_Bool)1))));
                var_24 = ((/* implicit */unsigned char) (+((+(var_5)))));
            }
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
                var_26 = ((/* implicit */signed char) (((_Bool)1) ? (16153663693340374803ULL) : (((/* implicit */unsigned long long int) arr_11 [i_1 + 2] [i_1 + 2] [i_2 + 1] [i_2 - 1]))));
                arr_17 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */long long int) arr_9 [i_1 + 1] [i_1 + 2]);
                arr_18 [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) (~(((long long int) (unsigned char)191))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                arr_22 [i_1] [i_5] [i_5] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) 3512782138740184572ULL));
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_13))));
            }
        }
    }
    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) var_17))));
    var_29 += ((/* implicit */unsigned short) var_6);
    var_30 ^= ((/* implicit */unsigned long long int) var_7);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112737
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
    var_15 = ((/* implicit */long long int) 920664297);
    var_16 = ((/* implicit */long long int) (~((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (var_13)))) : (max((8286026182882148657ULL), (((/* implicit */unsigned long long int) (signed char)126))))))));
    var_17 = ((/* implicit */unsigned short) (~(((((/* implicit */int) ((_Bool) var_7))) << (((max((14628829887057963922ULL), (((/* implicit */unsigned long long int) 0U)))) - (14628829887057963916ULL)))))));
    var_18 = ((/* implicit */_Bool) min((((/* implicit */int) var_9)), (max((var_4), (((((/* implicit */int) (signed char)126)) >> (((13251164103549308283ULL) - (13251164103549308266ULL)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_19 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)31))));
        var_20 += max((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) | (-2065832516)))) * (min((((/* implicit */unsigned long long int) (signed char)81)), (var_0))))), (((/* implicit */unsigned long long int) ((_Bool) min((var_6), (var_13))))));
        var_21 = ((/* implicit */int) 13251164103549308296ULL);
    }
    for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 2; i_3 < 14; i_3 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) max((((unsigned long long int) -12LL)), (((/* implicit */unsigned long long int) (signed char)121))));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 1; i_5 < 15; i_5 += 1) 
                        {
                            var_23 = ((((/* implicit */_Bool) 10U)) ? ((-(((((/* implicit */int) (short)15872)) / (((/* implicit */int) var_1)))))) : (((/* implicit */int) ((short) 10160717890827402958ULL))));
                            arr_14 [i_1] [(unsigned short)0] [(unsigned short)0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (-(57644008)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))) | (13251164103549308283ULL))) : (((/* implicit */unsigned long long int) ((int) var_7))))));
                            arr_15 [i_1] [i_2] [i_2] [i_1] [i_5] [i_3] = ((/* implicit */unsigned long long int) (signed char)118);
                        }
                        arr_16 [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)107));
                        arr_17 [i_1] [i_2] [i_3] [i_4] [i_1] [i_3 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 16192794101042035319ULL)) ? (8286026182882148654ULL) : (10160717890827402962ULL)))))));
                        arr_18 [i_1 - 1] [i_2] [i_3] [i_1] = ((/* implicit */int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (18446744073709551613ULL)))) ? (2ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 262140)) ? (var_4) : (var_4))))))));
                    }
                    var_24 = ((/* implicit */unsigned long long int) min((max((((/* implicit */signed char) (_Bool)1)), (((signed char) var_9)))), (((signed char) ((unsigned long long int) var_12)))));
                }
            } 
        } 
        var_25 &= ((/* implicit */short) var_14);
    }
}

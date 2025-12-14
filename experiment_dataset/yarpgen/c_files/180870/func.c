/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180870
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
    var_20 = ((/* implicit */unsigned char) (short)20465);
    var_21 ^= ((/* implicit */long long int) var_18);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_22 ^= ((/* implicit */unsigned short) ((arr_6 [i_0]) > (((/* implicit */int) (unsigned short)15))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (short i_4 = 3; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) var_5);
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_18) != (18446744073709551615ULL)))) / (((/* implicit */int) ((((/* implicit */_Bool) 17045651456ULL)) || (((/* implicit */_Bool) (unsigned char)180)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 3] [i_0 - 3]))) > (((((/* implicit */_Bool) arr_7 [i_1] [i_0] [i_1] [i_3 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41491))) : (var_3)))))) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_3 + 2] [i_4]))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */_Bool) 14529676286806208045ULL);
                }
            } 
        } 
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) -5696935561752091438LL))));
        arr_17 [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_0 + 2] [(short)13] [(short)13] [i_0]);
    }
    for (short i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        var_27 ^= (unsigned char)0;
        var_28 = ((/* implicit */short) var_2);
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_6 [i_5]))))))) > ((~(((/* implicit */int) ((unsigned char) (unsigned char)76))))))))));
    }
    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) max((((/* implicit */short) (unsigned char)55)), ((short)-32752))))));
}

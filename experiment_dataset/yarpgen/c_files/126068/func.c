/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126068
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_3 [8ULL]))))))))));
                arr_5 [(_Bool)1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (var_3)))) / (((/* implicit */int) (short)-6632))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_1])) * (((/* implicit */int) ((signed char) arr_3 [i_0])))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 2554817262U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            arr_11 [i_0] [(signed char)18] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)5)) && (((/* implicit */_Bool) -6822521116520663382LL))));
                            arr_12 [i_0] [i_1] [i_1] [i_1] [15U] [(short)2] = (~(((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) arr_2 [i_0] [i_3])) : (((/* implicit */int) arr_10 [19ULL] [i_1] [(short)17] [i_2] [i_0] [i_0]))))) ? (((/* implicit */int) ((16840929356678428174ULL) <= (((/* implicit */unsigned long long int) 3585539119106900353LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(signed char)9] [(_Bool)1] [i_3]))))))));
                            var_16 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_13)) ? (((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)112))))) : (((/* implicit */long long int) (+(arr_7 [i_3] [(signed char)15] [i_1] [i_0])))))) * (((((long long int) (short)512)) / (max((1904406850882372317LL), (((/* implicit */long long int) arr_10 [(unsigned char)0] [i_1] [(signed char)12] [i_2] [i_1] [(short)16]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_7);
    var_18 -= ((/* implicit */unsigned long long int) max((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)19))))) >= (((/* implicit */int) var_1)))), (min((((((/* implicit */int) var_7)) <= (((/* implicit */int) (signed char)127)))), ((!(var_14)))))));
}

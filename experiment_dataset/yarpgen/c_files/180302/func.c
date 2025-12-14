/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180302
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
    var_10 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)12256))));
    var_11 = ((/* implicit */unsigned short) min((var_11), (var_4)));
    var_12 = (+(18446744073709551596ULL));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = min((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned short)53276)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (3771518918642821741LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))), (((/* implicit */long long int) arr_0 [i_0])));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_10 [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 2651907178U)) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_7 [i_0] [i_2] [i_0] [i_0]), (((/* implicit */unsigned char) arr_1 [i_1]))))))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                            {
                                arr_15 [i_4] [i_1] [i_2] [i_1] [i_0] = ((var_6) | (((((/* implicit */long long int) ((((/* implicit */_Bool) 4344100222827920106ULL)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [(unsigned short)2] [i_3] [i_0] [4LL])) : (((/* implicit */int) arr_7 [i_0] [i_1] [4U] [i_3]))))) % (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2] [i_2])) ? (7447444270281953514LL) : (((/* implicit */long long int) arr_8 [i_0] [i_2] [i_3] [i_4])))))));
                                var_14 = ((/* implicit */_Bool) var_6);
                            }
                            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) -3771518918642821746LL)) ? (((/* implicit */int) (_Bool)1)) : (arr_0 [i_3])))) || (((/* implicit */_Bool) max((arr_11 [i_0] [i_0] [i_3]), (((/* implicit */unsigned int) arr_12 [(_Bool)1] [i_0]))))))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_5 = 1; i_5 < 17; i_5 += 2) 
                {
                    arr_19 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) var_5);
                    arr_20 [i_0] [i_1] [i_1] [i_5] = ((((/* implicit */_Bool) ((int) max((arr_4 [i_0] [i_0] [i_1] [i_5 + 1]), (((/* implicit */unsigned long long int) var_0)))))) ? (((/* implicit */long long int) arr_18 [i_5])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_1) : (var_5)))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [7] [7U] [i_0] [i_1] [i_1] [i_5]))))));
                    var_16 = ((/* implicit */unsigned int) var_2);
                    var_17 = min((((/* implicit */int) ((var_7) == (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_11 [i_1] [i_1] [i_5])))))), ((~(((/* implicit */int) (_Bool)1)))));
                }
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    var_18 = ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_14 [i_6] [i_0] [i_0])) ? (arr_5 [i_0]) : (var_1))) : (((/* implicit */long long int) var_9)));
                    arr_25 [i_6] [i_6] [i_1] = ((arr_8 [i_6] [i_1] [i_0] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 18014398509481983ULL)) || (((/* implicit */_Bool) 3690323366U)))))));
                }
            }
        } 
    } 
}

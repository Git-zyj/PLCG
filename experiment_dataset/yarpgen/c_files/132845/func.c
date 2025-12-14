/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132845
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
    var_13 = ((/* implicit */long long int) var_10);
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */long long int) (_Bool)1);
                        arr_11 [2U] [i_0] [i_0] [i_1] |= ((/* implicit */unsigned int) -6584695163663135235LL);
                    }
                    for (unsigned short i_4 = 2; i_4 < 13; i_4 += 3) 
                    {
                        arr_14 [i_1] [i_1 + 1] [i_2 + 1] [i_4] [i_4] = ((/* implicit */_Bool) max(((unsigned short)5722), (((/* implicit */unsigned short) (_Bool)1))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)102)) - (((/* implicit */int) (signed char)0))));
                    }
                    arr_15 [i_0] [i_0 + 1] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) (_Bool)1)), (arr_10 [i_0 - 2] [i_1 + 1] [i_2 + 2] [(unsigned char)4]))), (((/* implicit */long long int) (_Bool)1))));
                    var_16 = ((/* implicit */unsigned short) 6149959814607158327LL);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_17 *= ((/* implicit */_Bool) arr_0 [i_1 + 1]);
                        var_18 -= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))));
                        var_19 &= ((/* implicit */unsigned long long int) ((long long int) arr_16 [i_0] [i_1 + 1] [i_1] [i_1] [i_1 + 1]));
                    }
                }
            } 
        } 
    } 
}

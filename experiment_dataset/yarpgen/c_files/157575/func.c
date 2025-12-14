/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157575
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
    var_10 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1911734223))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)0)))), ((~(((/* implicit */int) (short)-12875))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_12 [i_3] [(unsigned char)8] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) ((1542442036311752782LL) >> (((((/* implicit */int) (unsigned char)144)) - (98)))));
                        arr_13 [i_0] [(unsigned char)5] [i_0] [(unsigned char)5] [i_3] [i_3] = ((/* implicit */_Bool) 17792559978836089345ULL);
                    }
                    arr_14 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [(_Bool)1] [i_2] [i_1] [i_0]))))), (var_8)));
                    var_11 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2])) / (var_9)))) ? (((((/* implicit */int) (short)-12884)) / (-1911734240))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) -2147483641)) < (var_5)))))), (-1305094165)));
                }
            } 
        } 
    }
    var_12 = ((/* implicit */long long int) (+(((/* implicit */int) ((((14310059285522222325ULL) * (var_5))) <= (((((/* implicit */_Bool) (unsigned char)14)) ? (var_5) : (var_3))))))));
    var_13 -= ((/* implicit */unsigned char) var_4);
    var_14 *= ((/* implicit */unsigned long long int) var_2);
}

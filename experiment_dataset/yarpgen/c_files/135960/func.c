/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135960
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
    var_17 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = var_6;
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) arr_3 [i_1 - 1] [i_1 - 1] [i_1 + 1]);
                    arr_11 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [(unsigned char)15] [i_1 + 1] [i_2])) * ((~(((/* implicit */int) var_0))))));
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((11ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3])) ? (5010794145681218687LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)233))))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_3]))) != (var_11)))) : (((/* implicit */int) (unsigned short)48507))));
        var_20 = ((/* implicit */long long int) var_6);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_4 = 1; i_4 < 14; i_4 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) ((short) ((var_16) >> (((((/* implicit */int) var_6)) - (9204))))));
            var_22 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (~((-(5942023606745747712ULL))))))));
            var_24 |= 18446744073709551605ULL;
            var_25 = ((/* implicit */signed char) ((var_8) * (246733106117173525ULL)));
        }
        var_26 = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) 9027932036807547873LL)) ? (((/* implicit */int) var_15)) : ((~(((/* implicit */int) arr_7 [i_3]))))))));
    }
}

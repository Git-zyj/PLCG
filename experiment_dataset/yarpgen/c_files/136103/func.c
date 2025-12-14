/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136103
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
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned char)238)) | (((/* implicit */int) (unsigned char)238))))))) != (min((((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) arr_0 [(unsigned short)16] [(unsigned short)16]))))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (arr_1 [(unsigned char)1])));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) max((max((3632130392263900533ULL), (((/* implicit */unsigned long long int) arr_3 [i_1])))), (((/* implicit */unsigned long long int) var_4)))))));
        var_16 = ((/* implicit */unsigned short) ((unsigned char) var_8));
        arr_6 [i_1] = ((/* implicit */unsigned short) arr_3 [i_1]);
    }
    var_17 = ((/* implicit */unsigned char) ((unsigned long long int) var_4));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            for (unsigned char i_4 = 1; i_4 < 20; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) 9441622062480412552ULL);
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) 9669811487788477107ULL))));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((unsigned short) var_11)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 1; i_5 < 19; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) min(((unsigned char)80), ((unsigned char)230))))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            var_22 &= ((/* implicit */unsigned short) (+(max(((~(((/* implicit */int) arr_14 [(unsigned short)0] [i_2] [i_4 + 2] [i_2] [i_2] [(unsigned short)0])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)241))))))));
                            var_23 ^= ((/* implicit */unsigned short) var_3);
                            arr_18 [i_4] = ((/* implicit */unsigned short) ((unsigned long long int) (((!(((/* implicit */_Bool) arr_13 [i_2] [i_2])))) || (((((/* implicit */_Bool) 2147483640ULL)) && (((/* implicit */_Bool) var_11)))))));
                            var_24 = (~(((unsigned long long int) var_12)));
                            var_25 = ((/* implicit */unsigned char) var_12);
                        }
                    }
                    arr_19 [i_2] [i_4] [(unsigned char)20] = arr_3 [i_4];
                }
            } 
        } 
    } 
}

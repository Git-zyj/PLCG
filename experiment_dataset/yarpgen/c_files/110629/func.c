/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110629
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) ((var_9) > (1303424156U)))));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)16577))));
            arr_8 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_11)))) ? (max((var_11), (((/* implicit */long long int) (unsigned char)169)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0 - 1]))))));
        }
        var_19 += ((/* implicit */unsigned short) ((((/* implicit */int) (short)26512)) + (((/* implicit */int) (short)-29378))));
    }
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (-7413524165196189898LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    var_21 -= ((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned short)21978)) / (((/* implicit */int) min(((unsigned short)3677), (((/* implicit */unsigned short) var_8))))))), (((/* implicit */int) ((max((var_9), (3317242141U))) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3677))))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 14; i_2 += 2) 
    {
        for (unsigned int i_3 = 1; i_3 < 12; i_3 += 2) 
        {
            {
                arr_15 [i_3] = ((/* implicit */_Bool) max((max((min((((/* implicit */unsigned short) (unsigned char)84)), ((unsigned short)48523))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)56520))))))), (((/* implicit */unsigned short) (!((_Bool)1))))));
                arr_16 [(unsigned short)0] &= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? ((-(((/* implicit */int) (unsigned char)40)))) : (((/* implicit */int) var_5)))));
            }
        } 
    } 
}

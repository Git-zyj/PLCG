/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124256
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) == (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) (_Bool)1);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) 0U);
        var_18 = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    for (int i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) min((min((arr_10 [i_1 + 1] [i_1] [i_3]), (arr_10 [i_2] [i_2] [i_1 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3] [i_2] [i_1 - 1])) && (((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_3])))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) max((max((((/* implicit */long long int) var_8)), (var_0))), (((/* implicit */long long int) (unsigned char)255)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            arr_14 [i_4] [i_4] = ((/* implicit */unsigned long long int) (unsigned char)255);
            arr_15 [i_4] = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) (unsigned char)238)), (((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) (unsigned short)2871)) : (((/* implicit */int) var_11)))))), ((+(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_9 [i_1 + 1])) : (((/* implicit */int) var_13))))))));
        }
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (unsigned short)39282))) - (((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 2] [i_1])) ? (((/* implicit */int) (unsigned short)26254)) : (((/* implicit */int) (unsigned char)14))))))) || (((/* implicit */_Bool) ((short) (unsigned char)18)))));
    }
}

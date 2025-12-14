/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145239
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
    var_13 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) -583275907)) + (var_10))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
    var_14 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (var_10) : ((~(min((((/* implicit */unsigned long long int) var_3)), (var_11))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */int) ((((arr_11 [i_0] [i_1 - 1]) % (arr_11 [8] [i_1 - 1]))) > (arr_11 [19] [i_1 - 1])));
                        arr_12 [i_1] [(unsigned char)7] [i_2] [(unsigned char)7] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_1)))) || (((/* implicit */_Bool) arr_2 [i_1 - 1]))));
                    }
                    var_16 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1] [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_2]))))) : (((((/* implicit */_Bool) arr_11 [i_1] [i_1])) ? (var_5) : (((/* implicit */unsigned long long int) arr_0 [i_2]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 583275906)) ? (-583275906) : (((/* implicit */int) (_Bool)1))));
                var_18 = var_3;
            }
        } 
    } 
}

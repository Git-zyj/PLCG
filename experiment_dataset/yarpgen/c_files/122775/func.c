/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122775
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
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_11 = ((/* implicit */short) (unsigned char)143);
            var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_0 [i_0])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) var_2)))))))));
            var_13 = ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))))));
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_2)))) & (((/* implicit */int) ((short) arr_3 [i_0] [i_0] [i_1])))));
        }
        var_14 = ((/* implicit */short) (~((+(((/* implicit */int) min((var_1), (arr_4 [i_0] [i_0]))))))));
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (((int) max((var_3), (((/* implicit */unsigned char) (signed char)7)))))));
    }
    for (short i_2 = 1; i_2 < 24; i_2 += 1) 
    {
        var_15 = ((/* implicit */short) ((signed char) (signed char)-31));
        var_16 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((int) arr_10 [i_2 + 1]))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_10)))))));
        arr_11 [i_2] [i_2] = var_9;
    }
    var_17 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            {
                var_18 = ((short) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_9 [i_4]))))));
                arr_16 [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) - ((-(var_10)))))));
}

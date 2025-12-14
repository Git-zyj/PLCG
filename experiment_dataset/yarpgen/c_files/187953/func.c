/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187953
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
    var_20 = ((/* implicit */signed char) ((((((/* implicit */int) (short)18620)) | ((~(((/* implicit */int) (signed char)127)))))) & (((/* implicit */int) var_15))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [(signed char)7] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))), (((((((/* implicit */int) var_8)) + (2147483647))) << (((/* implicit */int) var_11))))));
        var_21 -= ((/* implicit */signed char) min(((-(((/* implicit */int) (short)-5991)))), (((/* implicit */int) min((var_15), (((/* implicit */short) arr_0 [i_0])))))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_0 [i_0]))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        for (signed char i_2 = 1; i_2 < 24; i_2 += 3) 
        {
            {
                var_23 = ((/* implicit */signed char) arr_6 [i_1]);
                var_24 = ((/* implicit */unsigned short) ((max(((~(((/* implicit */int) var_9)))), (((/* implicit */int) var_12)))) >= (((arr_7 [i_1 - 1]) ? (((/* implicit */int) arr_7 [i_1 + 4])) : (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)254))))))));
            }
        } 
    } 
}

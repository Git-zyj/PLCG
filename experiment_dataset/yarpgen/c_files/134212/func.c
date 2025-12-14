/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134212
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
    var_20 = ((/* implicit */signed char) ((unsigned short) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_11))))), (((unsigned char) (short)(-32767 - 1))))));
    var_21 = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */int) var_4)), ((~(((/* implicit */int) var_18)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_11);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_22 += ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((unsigned short) (signed char)46))) <= (((/* implicit */int) max((((/* implicit */signed char) var_6)), ((signed char)-46)))))) && (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (0U))))))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((int) ((2079550773) != (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))));
        }
        /* LoopSeq 2 */
        for (unsigned int i_2 = 4; i_2 < 22; i_2 += 1) 
        {
            var_23 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */int) arr_4 [i_2 - 4] [i_2 + 2])) : (((/* implicit */int) (unsigned char)20))));
            var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((arr_7 [i_2] [i_2] [i_2]), (arr_7 [i_0] [i_0] [i_2])))), ((-(((unsigned int) var_1))))));
            arr_9 [i_0] = ((/* implicit */long long int) var_7);
            var_25 += (signed char)0;
        }
        for (short i_3 = 3; i_3 < 23; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((short) ((unsigned int) (~(((/* implicit */int) arr_8 [i_3] [i_4] [(unsigned short)20])))))))));
                        var_27 = ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0))))), (max((arr_5 [i_3 + 1] [i_3 + 1]), (arr_5 [i_3 + 2] [i_3 + 2])))));
                        var_28 = ((/* implicit */unsigned char) arr_5 [i_3] [(unsigned char)0]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_6 = 2; i_6 < 23; i_6 += 2) 
            {
                arr_21 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)2);
                arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_15);
            }
            arr_23 [i_3 - 1] [i_3] [i_3 + 2] = ((/* implicit */unsigned char) arr_20 [i_0] [i_0]);
            var_29 ^= ((/* implicit */unsigned int) (unsigned char)255);
        }
    }
}

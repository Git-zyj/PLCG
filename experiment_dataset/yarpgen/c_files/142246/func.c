/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142246
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
    var_19 = ((/* implicit */unsigned short) ((min((((((/* implicit */int) (signed char)18)) / (((/* implicit */int) (unsigned short)896)))), (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)-6802)))))) % (((/* implicit */int) var_8))));
    var_20 = ((/* implicit */short) var_0);
    var_21 -= ((/* implicit */long long int) ((unsigned short) var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                var_22 += ((/* implicit */int) arr_1 [i_1 + 2] [i_1 - 1]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_23 = ((/* implicit */signed char) (-(1879727599U)));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 - 2] [i_2] [i_3])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [2] [i_0])) ? (((/* implicit */int) arr_0 [0] [i_0])) : (((/* implicit */int) arr_7 [i_2] [i_3])))))));
                        var_25 = ((/* implicit */int) min((var_25), ((-(((/* implicit */int) arr_1 [i_1 - 2] [i_3]))))));
                    }
                    for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        arr_13 [i_1] [i_0] [i_1 - 2] [i_0] [i_1] = ((/* implicit */short) arr_10 [(unsigned char)0] [i_1] [i_1 + 1] [i_1 + 1]);
                        var_26 = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_2] [4] [(unsigned short)5] [i_1 + 1])) % (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) != (2199022206976ULL))))));
                    }
                    var_27 = ((/* implicit */unsigned int) ((-1870109135) > (1870109139)));
                    var_28 = arr_6 [(unsigned short)9] [i_1] [i_0];
                    var_29 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_0] [i_1 + 2] [i_1 - 1] [i_1] [i_2]))));
                }
                var_30 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_2 [i_1 + 1])))) && (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 4294967275U)) ? (((/* implicit */unsigned int) 1870109158)) : (21U)))))));
                var_31 -= ((/* implicit */unsigned short) ((((unsigned int) (-(((/* implicit */int) (unsigned short)2032))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [(unsigned short)5])) && (((/* implicit */_Bool) 1870109135)))) || (((/* implicit */_Bool) 8388608))))))));
                var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9U)) ? (((/* implicit */int) (unsigned short)42082)) : (1870109158)))) ? (((/* implicit */int) ((unsigned short) 839679888U))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned short)2])) ? (((/* implicit */int) (short)4095)) : (((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_33 = ((/* implicit */short) 3455287425U);
}

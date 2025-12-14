/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12726
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) -1966581526)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (-1413441896)))) ? (((/* implicit */unsigned long long int) var_12)) : ((-(292679279669235294ULL)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = (+((-(((/* implicit */int) ((signed char) var_10))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) arr_1 [7])), (625351117842897593LL))), (((/* implicit */long long int) ((unsigned char) (short)1023)))))) || (((/* implicit */_Bool) (unsigned char)151)))))));
                    var_15 = ((/* implicit */long long int) var_1);
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        var_16 |= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (arr_7 [i_0 - 3] [i_0 + 1] [i_0 - 1] [i_0 - 1]) : (arr_7 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_1]))));
                        var_17 = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0] [i_0 - 1]);
                        arr_12 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) (+(1413441895)));
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_10))));
                    }
                    for (short i_4 = 2; i_4 < 15; i_4 += 4) 
                    {
                        arr_15 [i_0] [i_1] [(unsigned char)10] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_4 - 1])) ? (var_8) : (((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_1]))) + (arr_13 [(_Bool)1] [i_2] [i_2] [i_1] [i_0]))))))));
                        var_19 = ((((/* implicit */_Bool) ((var_6) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1023))) : (21U))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [4] [i_4] [i_4] [i_4]))) : (max((max((((/* implicit */long long int) arr_13 [i_0] [i_0] [i_2] [i_4] [i_2])), (var_3))), (((/* implicit */long long int) arr_1 [i_0])))));
                        arr_16 [i_0] [i_0] [i_1] [i_4 + 1] [i_4 + 1] [i_0] = ((/* implicit */unsigned char) arr_8 [i_0]);
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_5 = 2; i_5 < 13; i_5 += 3) 
        {
            for (unsigned char i_6 = 1; i_6 < 15; i_6 += 3) 
            {
                {
                    var_20 = ((/* implicit */long long int) -1413441896);
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        arr_25 [i_0] [i_5 - 2] [i_5] [i_0] = 182234955U;
                        arr_26 [i_5] [i_6 + 1] [i_6 + 1] [i_6] = ((/* implicit */unsigned long long int) ((int) var_4));
                        var_21 = ((/* implicit */signed char) -7703841262401886861LL);
                        arr_27 [i_0] [i_5] [i_5] [i_7] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5 - 1] [i_5]))) : (max((((/* implicit */long long int) 696373115U)), (var_0))))));
                    }
                    var_22 = ((/* implicit */int) max((var_22), (max(((-(((/* implicit */int) arr_5 [i_0 + 1] [2ULL] [i_6 + 1])))), (((((/* implicit */int) arr_22 [i_0] [i_0] [2ULL])) | (((/* implicit */int) ((((/* implicit */_Bool) 1413441895)) || (((/* implicit */_Bool) 21U)))))))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_7)) ? (((var_7) / (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)49))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) var_10)))) : ((-(1413441895))))))));
}

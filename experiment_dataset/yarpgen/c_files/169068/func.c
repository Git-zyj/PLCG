/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169068
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13685)) ? (((/* implicit */int) (short)13684)) : (((/* implicit */int) (unsigned char)192)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_12 [i_3] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */int) (signed char)2)) ^ (((/* implicit */int) arr_8 [i_1] [i_0] [i_2] [i_3])))) >> ((((~(arr_7 [i_0] [i_0 - 1] [i_0] [i_0]))) - (410789202)))));
                                arr_13 [i_1] [i_1] [i_1] = ((/* implicit */short) arr_1 [i_1] [i_4]);
                                var_11 = ((/* implicit */unsigned char) ((((arr_8 [i_1] [i_1] [i_0 - 1] [i_1]) ? (((/* implicit */int) arr_8 [i_1] [i_0] [i_0 - 2] [i_2])) : (((/* implicit */int) arr_8 [i_1] [i_0 - 4] [i_0 + 2] [i_3])))) + (((arr_8 [i_1] [i_1] [i_0 - 2] [i_1]) ? (((/* implicit */int) arr_8 [i_1] [i_0] [i_0 + 2] [i_0])) : (((/* implicit */int) arr_8 [i_1] [i_0] [i_0 - 3] [i_2]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 18; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */int) arr_8 [i_1] [i_1] [i_5] [i_6]);
                            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((unsigned char) (unsigned char)185)))));
                            arr_19 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (unsigned short)12414)) : (((/* implicit */int) (short)25855))))));
                            var_14 = ((/* implicit */int) max((var_14), ((-(((/* implicit */int) ((unsigned short) -1040064744)))))));
                        }
                    } 
                } 
                arr_20 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_1]))) / (arr_18 [i_0 + 1] [i_1])))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_1])) : (((((/* implicit */_Bool) (short)-15233)) ? (((/* implicit */int) (short)24576)) : (1073741824)))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 1; i_7 < 16; i_7 += 2) 
                {
                    for (unsigned char i_8 = 2; i_8 < 16; i_8 += 3) 
                    {
                        {
                            arr_27 [i_1] [i_7 + 3] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)21693)) / (((/* implicit */int) (signed char)9))));
                            var_15 = ((/* implicit */_Bool) (((-(arr_9 [i_0] [i_7] [i_1]))) & (((((/* implicit */int) arr_14 [i_0 - 2] [i_7 - 1] [i_8 + 2] [i_8])) / (((/* implicit */int) arr_14 [i_0 - 2] [i_7 - 1] [i_8 + 2] [i_8]))))));
                            /* LoopSeq 2 */
                            for (short i_9 = 0; i_9 < 19; i_9 += 3) 
                            {
                                var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_8] [i_8] [i_8] [i_7 + 1] [i_7] [i_7])) ^ (((/* implicit */int) ((signed char) (_Bool)1)))))) ? (max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_0] [i_0] [i_0 - 2] [i_0]))))), (arr_28 [i_9] [i_1] [i_1]))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_5 [i_8] [i_9] [i_9] [i_8])) ? (arr_17 [i_0] [i_1] [i_0] [i_8] [i_9]) : (((/* implicit */int) arr_26 [i_0] [(unsigned char)16] [(unsigned short)0] [i_9])))))))));
                                arr_30 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_25 [i_8 - 1] [i_9] [i_9] [3LL]), (arr_17 [i_0] [i_0] [i_0 - 1] [i_8 + 1] [i_9])))) ? (((((/* implicit */_Bool) arr_17 [i_0 - 4] [i_0 - 4] [i_0 - 4] [i_8 + 3] [i_0 - 4])) ? (((/* implicit */int) arr_26 [i_0 - 4] [i_1] [i_1] [i_8])) : (((/* implicit */int) arr_26 [i_0 - 4] [i_1] [i_7 + 3] [i_8])))) : ((-(arr_25 [i_8 - 2] [i_8] [i_8] [i_9])))));
                                var_17 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((((/* implicit */int) arr_26 [i_0] [16] [i_0 + 1] [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_16 [i_0] [i_1] [i_8] [i_8])) + (7637))) - (12))))), (((/* implicit */int) (unsigned short)46871)))))));
                            }
                            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_18 [i_0 + 1] [i_0 - 2]) % (((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) ^ (arr_31 [i_0] [i_0] [i_1] [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) (+(581739132)))) ? (((((/* implicit */_Bool) -7320656834961927205LL)) ? (-9223372036854775791LL) : (((/* implicit */long long int) 162625896)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-127))))) : (((/* implicit */long long int) ((arr_9 [i_0] [i_0] [i_1]) - (((/* implicit */int) (short)194)))))));
                                arr_35 [(unsigned short)11] [i_1] [i_1] [(unsigned short)11] [i_1] [i_10] = ((/* implicit */_Bool) ((((((/* implicit */int) (short)0)) & (((/* implicit */int) (signed char)127)))) | (((((/* implicit */int) arr_1 [i_1] [i_1])) & (((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_1 [i_0 - 2] [i_1]))))))));
                            }
                            arr_36 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_0] [i_1] [i_1] [i_7] [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_7 + 3] [i_7 + 1] [i_7 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_28 [i_7 + 2] [i_7 + 1] [i_7 + 2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_1);
    var_20 = ((/* implicit */long long int) ((5974785285912289024LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)70)))));
}

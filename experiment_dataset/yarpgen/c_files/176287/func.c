/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176287
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 14; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_2] [i_0])) ? (((/* implicit */int) arr_11 [i_2 + 2] [i_2] [i_0] [i_2 - 1])) : (((/* implicit */int) arr_9 [i_2] [i_0] [i_2]))))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)193)))) ? (((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)215)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)215))) >= (433138975U))))))) ? (arr_6 [i_2 - 3] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((min((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */int) (unsigned short)36174)))) << (((((unsigned int) (unsigned short)6144)) - (6136U))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_22 -= ((/* implicit */unsigned short) arr_2 [i_0]);
                    var_23 = ((/* implicit */short) ((unsigned long long int) (short)12271));
                }
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    arr_19 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_5])) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)51948)) < (arr_7 [i_0] [i_1] [i_1])))), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) ((((/* implicit */int) (unsigned short)6151)) <= (((/* implicit */int) arr_18 [i_0] [i_1] [i_5])))))))))));
                    var_24 = ((/* implicit */unsigned int) arr_1 [i_1]);
                    arr_20 [i_5] [(unsigned short)0] [(unsigned short)0] [i_0] |= ((var_9) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [4ULL])) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) (signed char)34))))));
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((((/* implicit */int) arr_3 [i_0])) ^ (((/* implicit */int) (unsigned short)14994)))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_0]))))))))));
                    var_26 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_16 [i_0] [i_1] [i_5]))) ? (((((/* implicit */_Bool) ((((((/* implicit */int) arr_14 [i_0] [i_0])) + (2147483647))) >> (((/* implicit */int) arr_2 [i_1]))))) ? (((unsigned long long int) arr_7 [(unsigned short)10] [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_5 [i_0] [8U] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) (unsigned short)14992)) ? (arr_1 [i_1]) : (18446744073709551615ULL)))))));
                }
                arr_21 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)7544);
            }
        } 
    } 
    var_27 &= ((/* implicit */unsigned int) (+(((/* implicit */int) ((var_5) > ((-(var_3))))))));
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 14; i_6 += 4) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_32 [i_6] [i_6] [i_6] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)12266)) : (((/* implicit */int) min(((unsigned char)215), (((/* implicit */unsigned char) (_Bool)0)))))))));
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((int) arr_31 [i_6] [i_6] [i_8])))));
                    var_29 -= ((/* implicit */unsigned short) (!(var_9)));
                    arr_33 [i_6] [(short)5] [i_8] [i_6] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_8] [i_7] [i_6] [i_8]))));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148347
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
    var_12 -= ((((/* implicit */_Bool) (((+(var_2))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_4))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) var_2)) != (-487369531984680417LL))))) : (((((/* implicit */_Bool) ((3271018364U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-16586)))))) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)19)))) : (((/* implicit */int) var_4)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) min((min((4294967295U), (((/* implicit */unsigned int) (signed char)21)))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)37)) + (((/* implicit */int) (signed char)-22)))))));
                arr_8 [i_1] [i_0] = ((/* implicit */unsigned char) (-(((max((arr_5 [i_1]), (((/* implicit */unsigned int) (short)4519)))) << (((((((/* implicit */int) (signed char)-25)) % (((/* implicit */int) (short)-22328)))) + (33)))))));
                arr_9 [i_0] [i_1] = ((/* implicit */int) arr_5 [(short)7]);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (long long int i_3 = 4; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 0U)))) + (max((arr_13 [i_3 + 2] [i_3 - 3] [i_3] [(_Bool)1] [i_3 - 2]), (arr_13 [i_3 - 3] [i_3 + 1] [i_3 + 3] [i_3] [i_3 + 3]))))))));
                            var_14 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)4519))) < (arr_13 [(signed char)15] [i_3] [i_2] [15] [15])))) & (((/* implicit */int) ((unsigned short) 2))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_4 = 2; i_4 < 20; i_4 += 2) 
                {
                    for (long long int i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        for (int i_6 = 2; i_6 < 18; i_6 += 3) 
                        {
                            {
                                arr_24 [i_0] [i_1] [i_1] [i_5] = (signed char)-22;
                                var_15 = ((/* implicit */short) (~((~((-(((/* implicit */int) (signed char)21))))))));
                                arr_25 [i_0] [i_0] [i_5] [i_4 - 2] [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) (_Bool)1)))));
                                var_16 = min((((/* implicit */unsigned int) ((unsigned char) (_Bool)0))), (max((((/* implicit */unsigned int) arr_23 [i_6] [i_4 + 1] [i_5 + 1] [i_4 + 1])), (((unsigned int) 1147048392105958866ULL)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

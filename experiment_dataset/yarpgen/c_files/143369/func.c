/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143369
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_19 [(unsigned char)1] [i_1] [(unsigned char)1] [i_3] [(unsigned char)1] = ((/* implicit */int) 82045314973034009LL);
                                arr_20 [i_0] [i_1] [i_2] [i_2] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(var_14))) * (((((/* implicit */int) (unsigned short)15)) ^ (((/* implicit */int) (unsigned short)15))))))) ? (((/* implicit */int) (((+(((/* implicit */int) (unsigned char)255)))) <= (((/* implicit */int) min(((unsigned char)241), (((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_6 [i_0] [(short)2] [i_0]))))))))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_1] [i_2] [i_1] [i_4]))))), (8592019398803560820ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)12))))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_0] [i_1] [(signed char)12]))))) * ((-(arr_10 [i_2])))))) ? ((-((-(((/* implicit */int) var_4)))))) : (((/* implicit */int) max(((signed char)(-127 - 1)), ((signed char)-2)))))))));
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */_Bool) (((~(((/* implicit */int) var_4)))) | ((-(((/* implicit */int) arr_13 [i_0] [i_0] [(signed char)19] [i_0]))))));
                        var_21 ^= ((/* implicit */_Bool) (+((-(((/* implicit */int) ((((/* implicit */int) (signed char)1)) != (((/* implicit */int) (unsigned short)65521)))))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        arr_26 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) - (min((((/* implicit */int) arr_11 [(signed char)16] [(signed char)16] [i_1] [i_2] [i_2] [i_6])), (-1)))));
                        arr_27 [(_Bool)1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            {
                                arr_34 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) (-(((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) % (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_1] [i_7] [i_8]))))));
                                arr_35 [i_0] [i_7] [i_2] [i_0] = ((/* implicit */short) max((((/* implicit */int) (((-(((/* implicit */int) (signed char)127)))) > ((+(((/* implicit */int) var_3))))))), ((+(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (arr_5 [14ULL]))))))));
                                var_22 ^= ((/* implicit */_Bool) 8559231047823652958ULL);
                                arr_36 [i_7] [i_8] [i_2] [i_7] = ((/* implicit */short) arr_7 [i_8]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_0))))) ^ (((/* implicit */int) var_17))));
    var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)29)), ((-(var_6)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129934
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) ((long long int) min((arr_1 [i_3 - 1]), (((/* implicit */unsigned long long int) arr_0 [i_3 - 2])))));
                            var_18 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_0] [i_3 - 2]))))) : (((((/* implicit */_Bool) arr_6 [i_3 - 1] [i_3 + 1] [i_3 - 2] [i_0])) ? (arr_6 [i_3 - 1] [i_3 - 2] [i_3 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3 - 1] [i_3 + 1] [i_3 - 2] [i_3 - 2]))))));
                        }
                    } 
                } 
                var_19 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1440398546U)) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_1 [i_0])))));
                arr_11 [i_0] = var_8;
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_3))));
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (long long int i_5 = 3; i_5 < 12; i_5 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5 - 1] [i_6])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_4 [i_4] [i_5 + 1] [i_4]))))) ? (((unsigned long long int) arr_5 [i_4])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_6] [i_5 - 2] [i_4])) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) var_12)))))))));
                            var_22 = ((/* implicit */unsigned long long int) ((short) (short)-1));
                            var_23 = ((/* implicit */unsigned long long int) ((int) ((int) ((short) arr_4 [i_4] [i_4] [i_4]))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 7189662586893226212ULL)) ? (((/* implicit */int) (unsigned short)35173)) : (((/* implicit */int) arr_8 [i_5 - 3] [i_5 - 2] [i_5] [12LL])))) >= (((((/* implicit */_Bool) arr_8 [i_5 + 1] [i_5] [i_4] [i_4])) ? (((/* implicit */int) arr_8 [i_5 - 2] [i_5 - 2] [i_5] [i_5 + 1])) : (((/* implicit */int) arr_8 [i_5 - 2] [i_5 - 2] [i_4] [(_Bool)1]))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (1197738025745988623ULL))))))));
}

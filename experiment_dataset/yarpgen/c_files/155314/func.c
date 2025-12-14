/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155314
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
    var_20 = ((/* implicit */int) min((((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned long long int) var_15)), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_18)) > (((/* implicit */int) var_19)))))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)20636)), (((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) (unsigned char)110)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_9 [i_1] [i_1] [i_1] [(unsigned char)6] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((arr_8 [(unsigned char)0] [(unsigned char)0] [i_2] [i_2]) - (var_7)))) ? (((((/* implicit */int) (unsigned char)137)) * (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))) : ((-2147483647 - 1)))), (((/* implicit */int) ((unsigned short) (signed char)-12)))));
                            arr_10 [(unsigned short)10] [i_1] [(signed char)9] [i_1] = ((/* implicit */short) ((int) (-(arr_0 [i_0]))));
                            arr_11 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) (-(arr_5 [i_3] [i_2] [i_2] [i_2]))));
                            arr_12 [i_0] [1LL] [i_0] [i_0] = ((unsigned long long int) (unsigned char)153);
                            arr_13 [i_0] [i_0] [3LL] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) max(((!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_1])))), ((!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [9LL]))))))) <= (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)11)) && (((/* implicit */_Bool) 5731028730322982675ULL))))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] = ((/* implicit */short) (signed char)-13);
                arr_15 [i_1] [9] = ((/* implicit */short) ((7088689927377634369ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((((/* implicit */long long int) -1154219653)), (var_16))))))));
                arr_16 [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            {
                arr_22 [i_4] [15] [i_4] = (signed char)11;
                arr_23 [i_4] = ((/* implicit */int) var_16);
                arr_24 [i_4] = ((((/* implicit */_Bool) arr_21 [i_4] [i_5])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_4] [i_4])))))))));
                arr_25 [(short)6] [(short)6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)9)), (arr_19 [i_5] [i_4])))) % (((/* implicit */int) max(((unsigned char)10), (arr_19 [i_5] [i_5]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((((unsigned int) var_0)) % (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (419657303)))))) >> (((var_16) - (2968253334420991500LL)))));
    var_22 = ((/* implicit */unsigned int) var_6);
}

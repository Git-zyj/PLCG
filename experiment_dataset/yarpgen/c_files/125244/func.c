/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125244
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) (+(((var_9) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)8191))))))));
                    var_16 = (((~(((((/* implicit */_Bool) 9599263955395293951ULL)) ? (13322308640541168299ULL) : (((/* implicit */unsigned long long int) -8877470279344908995LL)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
                    arr_7 [i_0] [12ULL] [i_2] = (i_2 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) >> ((((~(((/* implicit */int) arr_6 [i_2])))) + (110)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) >> ((((((~(((/* implicit */int) arr_6 [i_2])))) + (110))) + (97))))));
                    var_17 += ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (8877470279344908995LL)))) ? (((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_12))) : (((/* implicit */unsigned long long int) 8877470279344908992LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_2))))))))));
                    arr_8 [i_0] [i_1] [i_2] [(unsigned short)10] = ((/* implicit */unsigned char) arr_3 [i_2] [i_1] [10LL]);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(-8877470279344908995LL)))) ? (13707799640512238150ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        arr_12 [i_3] = ((/* implicit */unsigned char) max((((min((((/* implicit */unsigned long long int) 8877470279344908995LL)), (var_6))) == (max((var_12), (((/* implicit */unsigned long long int) arr_6 [14ULL])))))), (max((((((/* implicit */int) var_8)) < (((/* implicit */int) var_8)))), (((var_11) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
        var_18 = ((/* implicit */signed char) max((((/* implicit */int) var_14)), (((((/* implicit */int) (unsigned char)192)) | (((/* implicit */int) (signed char)-56))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [2LL])) ? (((/* implicit */int) arr_6 [(unsigned char)14])) : (((/* implicit */int) var_2)))))));
        var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))));
        arr_15 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4]))) > (10543620435392206987ULL)));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 8877470279344909019LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)132))) : (8877470279344908994LL)));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_25 [i_7] [7LL] [(unsigned char)9] [i_7])))))))) <= (((/* implicit */int) arr_20 [i_5] [i_6]))));
                    arr_27 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */unsigned int) max((((/* implicit */int) ((var_9) < (((/* implicit */long long int) ((((/* implicit */int) var_14)) - (((/* implicit */int) arr_6 [(short)0])))))))), (((((/* implicit */int) var_3)) * (((/* implicit */int) (signed char)-68))))));
                    var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32766))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 2; i_9 < 12; i_9 += 3) 
                        {
                            {
                                arr_32 [7ULL] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) (+(var_7)));
                                var_24 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

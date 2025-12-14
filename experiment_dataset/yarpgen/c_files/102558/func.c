/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102558
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
    for (int i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_11 = ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] [(unsigned char)17] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0 - 1] [i_0 - 1]))));
                        var_12 = ((/* implicit */signed char) arr_0 [i_0 - 2]);
                    }
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned char) arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 2]));
                        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)14627)) ? (((/* implicit */int) (unsigned char)78)) : (834367787)))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                    {
                        arr_15 [i_0] [i_2] [i_2] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3569684492815265040LL)) || (((/* implicit */_Bool) (unsigned char)0))));
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0] [i_1]))) ? (((((/* implicit */_Bool) -728476515487206942LL)) ? (-26) : (((/* implicit */int) (signed char)-78)))) : (arr_14 [i_0] [i_0 + 1] [(short)19] [i_0] [i_0])));
                    }
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)178);
                    arr_17 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (unsigned short)32768))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 2; i_7 < 23; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            {
                                arr_24 [i_0] [i_0 - 2] [i_0 - 2] [16LL] [(unsigned char)8] [i_0] [i_0] = ((/* implicit */unsigned short) max((((long long int) ((((/* implicit */_Bool) 3569684492815265040LL)) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) (unsigned short)63071))))), (((/* implicit */long long int) ((int) ((long long int) (signed char)104))))));
                                arr_25 [(unsigned short)6] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned int) min(((unsigned short)18862), (var_6))));
                                arr_26 [9U] [i_1] [i_1] [i_1] [9U] = ((/* implicit */signed char) (-((~(((/* implicit */int) var_10))))));
                            }
                        } 
                    } 
                    var_15 = min((16944152804560217657ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))));
                    /* LoopNest 2 */
                    for (signed char i_9 = 2; i_9 < 21; i_9 += 4) 
                    {
                        for (signed char i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            {
                                arr_32 [i_0] [(unsigned short)19] [i_0 - 3] [i_10] [i_0] [i_0] [i_0 - 1] = (signed char)-32;
                                var_16 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 807732657529546805LL)) ? (16) : (((/* implicit */int) (unsigned char)255))))))));
                                arr_33 [i_10] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_14 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2] [(unsigned char)2]))) ? (min((((/* implicit */unsigned int) max(((unsigned char)170), (((/* implicit */unsigned char) (signed char)77))))), (((unsigned int) 10386555569847108661ULL)))) : (((/* implicit */unsigned int) (+(var_7))))));
                                arr_34 [i_10] [i_9] [i_6] [i_1] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 33))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)93))) : (-2351016754879150427LL))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) 3360266487749317341ULL)))) ? (((/* implicit */int) arr_29 [i_0] [(unsigned short)12] [i_0 - 1] [i_0] [(unsigned short)12] [(short)5])) : (((/* implicit */int) var_6)))))));
                                arr_35 [i_1] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((3829512798U), (((/* implicit */unsigned int) arr_1 [i_9 + 3]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [(unsigned short)18] [i_10]))) : (((long long int) arr_20 [i_9 + 1] [i_9 + 2] [i_0 - 4] [i_0] [i_0 - 4]))));
                            }
                        } 
                    } 
                }
                arr_36 [i_1] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) min(((unsigned short)32002), (((/* implicit */unsigned short) (signed char)-18)))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-95))))) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (min((var_7), (((/* implicit */int) (unsigned char)159)))))) : (((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_0 - 1]))))));
                arr_37 [i_0 - 4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)65409)))) & (((((/* implicit */_Bool) var_2)) ? (arr_11 [i_0] [i_0 + 1] [i_0 - 3] [i_0 - 3] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                arr_38 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (unsigned short)17663)))) >= ((~(((/* implicit */int) (unsigned char)174))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_3);
}

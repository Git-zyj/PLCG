/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149301
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
    var_16 &= ((/* implicit */unsigned short) (~(4294967295U)));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((+(var_12)))))) ? ((+(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)-1)))))) : ((+((+(((/* implicit */int) (_Bool)1))))))));
    var_18 = var_10;
    var_19 &= ((/* implicit */unsigned char) (+(((long long int) (-(((/* implicit */int) var_13)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)196), (((/* implicit */unsigned char) (signed char)5)))))) : (max((((/* implicit */long long int) (unsigned short)33574)), (arr_4 [(short)8] [i_1]))))) : (((/* implicit */long long int) (((-(((/* implicit */int) arr_5 [i_1] [i_1] [i_0])))) & (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] &= ((/* implicit */unsigned short) ((short) ((_Bool) -8274906659211763884LL)));
                    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_2])) : (((/* implicit */int) var_3)))) & (((/* implicit */int) ((short) arr_7 [i_0] [i_1] [i_1] [i_2])))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38852)) ? (((/* implicit */unsigned long long int) var_14)) : (16764437605397689749ULL)))))))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_0 [i_1] [i_0]))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        arr_18 [i_0] [i_1] [i_3] [i_4 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) -8274906659211763884LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 18014123631575040LL)))) : (arr_13 [i_4 + 1] [i_4 + 1] [i_3])));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */_Bool) (unsigned short)38852)) ? (4269638591U) : (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_4]))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) (+(1849744772)))))));
                        arr_23 [i_0] [i_0] [i_1] [11U] [i_3] = ((/* implicit */signed char) (short)-24061);
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 131071U)) >= (15851690282782479214ULL)));
                        arr_28 [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3] [i_0]))) : (-1376742663612003492LL))) / (((/* implicit */long long int) (+(((/* implicit */int) var_5)))))));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        var_25 = ((/* implicit */signed char) (((_Bool)1) ? ((~(((/* implicit */int) (short)-25352)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 0)))))));
                        arr_32 [i_3] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_29 [i_0] [i_0] [(short)7] [i_7] [i_7])) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32754))) : (((((/* implicit */_Bool) (signed char)62)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [1] [i_7]))))))) + (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)511), (((/* implicit */unsigned short) (_Bool)1))))))));
                    }
                    for (unsigned char i_8 = 3; i_8 < 16; i_8 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_9 = 3; i_9 < 14; i_9 += 2) 
                        {
                            var_26 ^= ((/* implicit */int) ((((((/* implicit */_Bool) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))))) ? (((((/* implicit */_Bool) var_9)) ? (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1225982657)) ? (((/* implicit */int) (short)8176)) : (((/* implicit */int) arr_31 [i_0] [i_1] [(unsigned char)5] [i_9]))))))) < (((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_34 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) arr_31 [i_0] [i_1] [i_3] [i_1]))))))))));
                            arr_37 [i_9] [i_3] [i_3] [i_3] [i_1] [i_3] [i_0] = ((/* implicit */unsigned short) (((-(((/* implicit */int) ((_Bool) arr_31 [i_0] [i_0] [i_0] [i_0]))))) > (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_1)))))))));
                        }
                        var_27 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_3] [i_8] [i_8 - 1]))))), (((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_3] [i_3] [i_8 + 1])) ? (arr_20 [i_8 + 1] [0U] [i_3] [i_8 - 2] [(short)17]) : (arr_20 [i_0] [i_1] [i_3] [i_3] [i_8 - 1])))));
                        arr_38 [i_0] [i_3] [9LL] [i_8 + 1] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (arr_13 [i_1] [i_3] [i_3])))))))) < (min((((/* implicit */unsigned long long int) arr_15 [i_0] [(_Bool)1])), (3ULL))));
                        arr_39 [i_3] [i_3] [i_3] [i_8] [i_0] [i_0] = -1475429521;
                    }
                    for (unsigned char i_10 = 3; i_10 < 16; i_10 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned int) ((int) ((1302892361U) & (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))))));
                        arr_43 [i_3] [(unsigned char)11] [i_3] = ((/* implicit */unsigned short) min((arr_16 [i_0] [i_1] [i_3] [i_10 - 1] [i_10 - 3]), (((/* implicit */unsigned int) ((short) min((((/* implicit */unsigned short) (short)-32754)), ((unsigned short)65522)))))));
                    }
                }
            }
        } 
    } 
}

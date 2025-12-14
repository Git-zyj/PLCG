/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182187
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
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))));
                var_12 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned short)65535)))) % (((/* implicit */int) max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 2]))))));
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) (unsigned char)165))))))) ? (((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_1 - 1] [i_0]))) : (min((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)15317)))), (((/* implicit */int) (unsigned short)3)))))))));
                var_14 = ((/* implicit */unsigned short) ((1441783529U) << (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (short)16368)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)15315)))))) - (6736)))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_7 [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) (unsigned short)3)))));
        var_15 = var_0;
    }
    for (unsigned short i_3 = 2; i_3 < 12; i_3 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) max(((short)-15330), (((/* implicit */short) (_Bool)1))));
                    var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) min(((unsigned short)3486), ((unsigned short)32760))))));
                    var_18 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_4]))));
                    var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65511))) >= (3886596186U)));
                }
            } 
        } 
        arr_16 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_15 [i_3])) : (((/* implicit */int) (short)5230))))) ? (((/* implicit */int) min((arr_15 [i_3]), (arr_15 [i_3])))) : (((/* implicit */int) max((arr_15 [i_3]), (((/* implicit */unsigned short) var_10)))))));
        var_20 = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((arr_1 [i_3 + 1] [i_3 + 1]), (min(((short)-16360), (((/* implicit */short) var_2))))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_3 - 2] [(short)19]))))) / (((-4138882183822654910LL) / (((/* implicit */long long int) ((/* implicit */int) (short)16128)))))))));
        var_21 += ((((/* implicit */int) (unsigned short)8905)) / (max(((-(((/* implicit */int) (unsigned short)54702)))), (((/* implicit */int) (unsigned short)8917)))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 2; i_6 < 12; i_6 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) ((((var_2) ? (((/* implicit */int) arr_20 [i_6])) : (((/* implicit */int) (unsigned char)63)))) % (((/* implicit */int) (unsigned char)203))));
        var_23 = ((/* implicit */short) ((((/* implicit */int) arr_11 [i_6 + 3])) * (((/* implicit */int) var_5))));
    }
}

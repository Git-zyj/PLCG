/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188808
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65038)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4700)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_19 *= ((/* implicit */unsigned char) arr_2 [i_0] [i_1]);
                        arr_13 [i_0] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) min((((/* implicit */short) arr_10 [i_0 - 1] [i_2] [i_2 - 1] [i_2 - 1])), ((short)7242)))), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)45491)) : (((/* implicit */int) (_Bool)0))))));
                        arr_14 [i_2] [i_1] [i_2 - 2] [i_3] [i_3] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_4 [i_3])) ? ((~(((/* implicit */int) (unsigned char)101)))) : (((/* implicit */int) arr_1 [i_0] [i_2 - 2])))), (((/* implicit */int) (unsigned short)20044))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (~(var_6))))) && (((((/* implicit */int) (unsigned short)60836)) <= (((/* implicit */int) var_0)))))))));
                    var_21 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_11 [i_0] [i_0 + 2] [i_5] [i_4])) : (((/* implicit */int) arr_11 [i_0 + 2] [i_0] [i_5] [i_4]))))));
                }
            } 
        } 
        arr_22 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_20 [i_0] [i_0 + 1] [i_0]))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_0 + 1]))) / (2443505317U))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)180), (arr_11 [i_0] [i_0] [4U] [i_0 - 1])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_7)))) : (((unsigned long long int) var_0))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) arr_8 [i_6] [i_6] [(short)16])) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) var_15)))) << (((((/* implicit */int) arr_7 [i_6] [i_6] [i_6])) - (133)))))));
        arr_27 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_6] [(unsigned short)14] [(unsigned short)14] [i_6]))) | (((((/* implicit */_Bool) (unsigned short)60836)) ? (1696784788U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    }
}

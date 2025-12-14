/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179945
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */short) var_15);
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)30), ((unsigned short)30)))) << (((((/* implicit */int) (unsigned short)12288)) - (12279)))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)253))))), (((((/* implicit */_Bool) var_15)) ? (arr_1 [i_0]) : (arr_1 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))));
        var_20 *= ((/* implicit */unsigned short) (~(max((arr_2 [i_0 - 2] [i_0 + 1]), (arr_2 [i_0] [i_0 + 3])))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) var_14);
                    var_22 = ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (max((var_5), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_1 + 3]) != (arr_1 [i_1 - 1]))))));
                }
            } 
        } 
        var_23 -= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((var_0), (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned int) var_2)), (var_5)))))));
    }
    for (unsigned int i_3 = 4; i_3 < 12; i_3 += 3) /* same iter space */
    {
        var_24 -= ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_3 - 4] [(unsigned short)0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) (!(((/* implicit */_Bool) 9880409163804386675ULL)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3 - 4] [i_3] [i_3 + 2])) ? (var_7) : (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_12))));
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1423881251U)))) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) var_17)) + (((/* implicit */int) arr_6 [i_3]))))))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3]))) * (15878612224570231887ULL))), (((/* implicit */unsigned long long int) (~(2306635962U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3 + 3]))))))));
    }
    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (unsigned char)152))));
    /* LoopNest 3 */
    for (unsigned short i_4 = 2; i_4 < 17; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned char)152), (((/* implicit */unsigned char) arr_16 [i_5]))))) ? (((((/* implicit */_Bool) (short)4364)) ? (1423881262U) : (max((((/* implicit */unsigned int) var_9)), (var_8))))) : (var_15)));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (unsigned char)164)))))) : (((((/* implicit */_Bool) var_11)) ? (32640U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4 - 1] [i_4] [i_4 + 2] [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253))) == (var_5))))) : ((+(var_16))))))));
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned short) min((var_7), (2068146956U)));
                        var_30 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (unsigned short)240)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (var_0))), (((/* implicit */unsigned int) ((unsigned short) ((unsigned int) var_1))))));
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 16; i_9 += 1) /* same iter space */
                    {
                        var_31 &= ((/* implicit */unsigned int) arr_17 [i_4 - 2] [i_5] [i_4 - 2] [i_4 + 2]);
                        var_32 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)164)) && (((/* implicit */_Bool) (unsigned short)224))))), (var_3)));
                    }
                    arr_26 [i_4 - 2] [i_4] [i_5] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)16320)))) & (((/* implicit */int) var_17))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4 - 1]))) > (var_8)))) : (((((/* implicit */int) var_2)) | ((-(((/* implicit */int) var_17))))))));
                }
            } 
        } 
    } 
}

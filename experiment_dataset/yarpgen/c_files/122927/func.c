/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122927
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_8))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((unsigned char) var_8))) : (((/* implicit */int) ((unsigned char) (unsigned short)10403)))))));
    var_11 = ((/* implicit */long long int) 15401604228100574046ULL);
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((15401604228100574046ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */_Bool) ((signed char) var_8))) ? (3045139845608977582ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_1] [i_2 + 1] [i_0] = ((/* implicit */unsigned long long int) (-(min(((+(var_7))), (((/* implicit */unsigned int) ((signed char) 1879496368U)))))));
                            var_13 = ((/* implicit */unsigned char) ((signed char) arr_10 [i_0] [i_2 + 1] [i_2 + 1] [i_2 + 1]));
                            var_14 -= ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [15U] [i_2] [i_2 + 1] [i_2 + 1]))) != (-1LL)))) != (((/* implicit */int) (unsigned char)7)));
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)5476)) : ((-(((/* implicit */int) (short)-7924))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (-((~(arr_0 [i_0]))))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_17 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) 3045139845608977569ULL)) ? (max((((/* implicit */int) var_1)), (var_8))) : (((/* implicit */int) ((signed char) var_2))))) > ((+(((/* implicit */int) arr_11 [i_0] [i_1] [i_5]))))));
                                var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) -817843411)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)5476)) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) (unsigned char)232))))) : (((((/* implicit */unsigned int) ((var_8) | (((/* implicit */int) var_1))))) & (((unsigned int) (unsigned short)60059))))));
                                var_19 = ((/* implicit */unsigned short) ((arr_0 [i_0]) * (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) 1836286311827793714ULL))) ? (((/* implicit */int) ((var_2) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-31691)))))) : (min((((/* implicit */int) (unsigned char)224)), (1208614451))))))));
                            }
                        } 
                    } 
                    arr_20 [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) var_6);
                    arr_21 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((short) 655913916300012611LL))) || (((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) arr_6 [(signed char)0] [(signed char)0] [i_4] [i_1])) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)255)))) : (min(((-(arr_5 [i_1] [i_1]))), (((/* implicit */int) arr_16 [i_4] [i_4] [i_4] [(short)10] [i_4]))))));
                }
                for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        for (signed char i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            {
                                var_20 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31690)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19532))) : (1836286311827793714ULL)))) ? (((/* implicit */int) ((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_19 [i_0] [i_0] [16U] [15U] [11U])))), ((~(((/* implicit */int) arr_23 [i_0] [(short)4] [i_8] [i_9])))));
                                arr_31 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 655913916300012624LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)6))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)68))))) : (min((var_0), (((/* implicit */long long int) arr_18 [i_1] [(_Bool)1] [i_7] [i_8] [i_9])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) (~(((arr_4 [i_1]) << (((3164786988U) - (3164786966U)))))));
                                arr_37 [i_1] [(signed char)5] [i_7] [(short)15] [i_0] [i_1] = ((signed char) ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_10])) - (65)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) var_0);
                    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_7])) ? (var_8) : (arr_14 [i_1] [i_1] [i_7])))) && (((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_1] [i_7])));
                }
                for (int i_12 = 0; i_12 < 17; i_12 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_13 = 1; i_13 < 13; i_13 += 4) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) var_6);
                                arr_45 [11] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_13] [i_1]))) : (((long long int) (short)19532))))));
                            }
                        } 
                    } 
                    var_25 |= -5365499714037335155LL;
                    arr_46 [i_1] [i_1] [i_1] = ((/* implicit */int) arr_4 [i_1]);
                    var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])))) < ((+(((/* implicit */int) (short)30969))))));
                }
                arr_47 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_0] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) arr_36 [(signed char)5] [i_0] [(signed char)5] [(short)7] [i_1]))))) + ((-(((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (var_4)))))));
            }
        } 
    } 
}

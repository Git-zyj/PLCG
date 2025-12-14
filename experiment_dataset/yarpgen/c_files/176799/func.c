/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176799
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
    var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-43)) - (((/* implicit */int) var_4))))), (var_7)));
    var_13 = ((/* implicit */unsigned long long int) (signed char)-115);
    var_14 = ((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) (short)-5818)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60259))) : (4070388141U))) >> (((((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) - (608949071696983392ULL)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_9) > (((/* implicit */long long int) arr_4 [i_1])))))) : (var_9)));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_1] [i_1]);
            /* LoopNest 3 */
            for (unsigned short i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_12 [i_4] [i_0] [i_0] [i_1] [i_0])) ? ((-(((/* implicit */int) (unsigned char)172)))) : (((/* implicit */int) (short)-24030))))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(var_7)))) < (11042017829648804273ULL)));
                        }
                    } 
                } 
            } 
            arr_16 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_4)), ((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) arr_4 [i_1])) : (((((/* implicit */_Bool) (short)-5818)) ? (6168216719813419442ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_6 = 4; i_6 < 19; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        {
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_4);
                            arr_29 [i_0] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) var_2);
                            arr_30 [i_0] [i_0] [i_0] = var_6;
                            arr_31 [i_0] [i_0] [i_5] [i_6] [i_6] [i_0] [i_8] = ((/* implicit */unsigned char) ((11042017829648804273ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_0] [i_5] [i_6 - 3])) - (((((/* implicit */int) var_4)) * (((/* implicit */int) var_4)))))))));
                            arr_32 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (short)5823)) | (((/* implicit */int) var_11)))) << (((((((((/* implicit */_Bool) arr_22 [i_8] [i_6 - 1] [i_6])) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) var_11)))) + (136))) - (21)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_9 = 1; i_9 < 20; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    {
                        arr_39 [(signed char)18] [i_0] [i_5] [i_9 - 1] [i_10] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (short)-5824)) * (((/* implicit */int) var_4))))));
                        arr_40 [i_0] [i_0] [i_9 + 1] = ((((/* implicit */int) ((signed char) var_0))) != (((/* implicit */int) (signed char)96)));
                        arr_41 [i_0] [i_10] [i_10] [i_10] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) (signed char)-5))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_9] [i_9 + 1] [i_9 - 1] [i_9] [i_9 - 1]))) : (((long long int) arr_19 [i_0] [i_0] [i_0]))))) ? (max((min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0])), (var_10))), (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_33 [i_0] [i_0] [(unsigned char)18])), (arr_12 [i_0] [i_0] [i_0] [i_9] [(unsigned short)15])))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_33 [i_5] [i_0] [i_5])), (var_8)))) : ((~(((/* implicit */int) var_5))))))));
                        arr_42 [i_0] [i_0] [i_10] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) (signed char)122)), (11042017829648804273ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)114)))))));
                    }
                } 
            } 
        }
    }
}

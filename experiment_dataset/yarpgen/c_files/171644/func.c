/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171644
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_13 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((148956556U) / (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [(unsigned short)18])) / (arr_0 [(signed char)12]))))))), (min((((((/* implicit */_Bool) arr_0 [(unsigned short)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)206)) | (((/* implicit */int) var_5)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((var_1) | (((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */unsigned long long int) 1252366000)) : (14008794424510203787ULL)))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 24; i_1 += 3) 
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned char)195)))) || (((/* implicit */_Bool) (unsigned char)195)))))));
        var_15 += ((/* implicit */unsigned int) ((signed char) var_2));
        var_16 = ((/* implicit */unsigned long long int) (short)-15168);
    }
    for (unsigned char i_2 = 4; i_2 < 14; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                arr_13 [i_2 + 1] [i_3] = ((/* implicit */unsigned int) var_0);
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        {
                            var_17 -= ((/* implicit */int) arr_1 [i_2 - 1] [i_5]);
                            var_18 += ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) -860648597)) ? (((/* implicit */unsigned int) 1511364078)) : (679725204U)))) | (((long long int) arr_19 [i_2 + 1] [i_3] [i_4] [i_5] [i_2 - 4]))));
                            var_19 = ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) arr_18 [i_3] [i_3])), (var_1)))));
                            arr_20 [i_4] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) var_7);
                        }
                    } 
                } 
            }
            var_20 = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_4 [i_3])) / (((((/* implicit */_Bool) 154976371U)) ? (((/* implicit */int) arr_16 [i_2 + 1])) : (((/* implicit */int) arr_1 [i_3] [i_3]))))))));
            arr_21 [i_3] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (+(-1481105389)))) ? (((/* implicit */int) arr_16 [i_2 - 4])) : (((/* implicit */int) (short)26213)))));
        }
        for (int i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_0)), (var_4)))) ? (12299488667663732194ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63))))))));
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) | (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)72))))))), (15898225113049205680ULL))))));
            var_23 += ((/* implicit */_Bool) ((-2136041932) | (-712361604)));
            var_24 += (~(((/* implicit */int) (unsigned short)394)));
        }
        arr_25 [i_2 - 2] = ((/* implicit */signed char) arr_6 [i_2 - 1]);
        arr_26 [i_2 - 4] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)25822)), ((~(((3251090112U) | (((/* implicit */unsigned int) -839846462))))))));
        var_25 = ((((/* implicit */_Bool) 860648596)) ? (14791928419375606595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24849))));
        var_26 = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_2 - 4] [i_2 - 4] [i_2 - 4] [i_2 - 4] [(unsigned char)10])) | (((/* implicit */int) var_5))));
    }
    var_27 = ((/* implicit */signed char) ((((((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) | (((/* implicit */unsigned int) ((int) var_8)))));
}

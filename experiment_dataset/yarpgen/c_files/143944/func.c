/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143944
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_12 = (((~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)113)), (arr_2 [i_0] [i_0] [i_0])))))) | (((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_0]))));
                var_13 = ((/* implicit */signed char) min((var_13), (((signed char) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65514)) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) (short)-32749))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_14 -= ((/* implicit */signed char) ((short) arr_8 [i_0] [i_1] [i_2] [i_3]));
                        var_15 = ((/* implicit */unsigned short) ((short) (+(((/* implicit */int) (signed char)-16)))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((short) (unsigned short)22)))));
                        var_17 = ((/* implicit */int) (~(arr_4 [i_1] [i_4])));
                        arr_16 [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)3))));
                    }
                    var_18 = (((!(((/* implicit */_Bool) arr_7 [i_2])))) ? (((/* implicit */int) arr_14 [i_0] [i_2] [i_2] [i_0])) : (((/* implicit */int) (short)10722)));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((short) (unsigned short)0))) : (((/* implicit */int) ((short) var_7)))));
                    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))));
                }
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_2))));
                            /* LoopSeq 3 */
                            for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                            {
                                var_22 = (!(((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_1] [i_1] [i_5] [i_0] [i_7])));
                                var_23 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((signed char) 1804333286U))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_6] [i_0] [i_0]))) / (10516125908241861390ULL)))));
                                arr_26 [i_0] [i_5] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (((unsigned long long int) 3565786194832583611ULL)))))));
                            }
                            for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) 
                            {
                                var_24 = ((/* implicit */short) ((signed char) ((((/* implicit */int) arr_19 [i_0] [i_0] [(signed char)5] [i_6] [i_8])) | (((/* implicit */int) arr_19 [i_0] [i_1] [i_5] [i_0] [i_8])))));
                                var_25 = ((/* implicit */unsigned short) min(((signed char)-40), (((/* implicit */signed char) (!((_Bool)1))))));
                                var_26 -= ((/* implicit */long long int) arr_8 [i_0] [i_1] [i_0] [i_6]);
                            }
                            for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
                            {
                                var_27 = ((/* implicit */long long int) ((((((unsigned int) (unsigned short)59105)) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))))) ^ (arr_28 [i_0] [i_1] [i_5] [i_6] [i_9])));
                                var_28 *= ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0]))))) == (((/* implicit */int) arr_10 [i_0] [i_0] [i_9]))));
                            }
                            arr_31 [i_6] [i_1] [i_6] [i_6] [i_0] [17U] = ((/* implicit */int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_25 [i_0] [i_1] [i_5] [i_5] [i_6])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6] [i_5] [i_1] [i_0]))) : (((unsigned int) (signed char)104)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) (unsigned short)17268)) : (((/* implicit */int) arr_17 [i_0] [16] [i_0] [i_6])))) < (((/* implicit */int) arr_23 [i_0] [i_1] [i_0] [i_0]))))))));
                        }
                    } 
                } 
                var_29 -= ((/* implicit */signed char) ((unsigned short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))))), (((arr_13 [i_0] [i_0] [i_0] [i_1] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) ((int) var_3));
    var_31 *= ((/* implicit */unsigned short) var_4);
}

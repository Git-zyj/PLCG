/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109110
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
    var_14 = ((/* implicit */unsigned int) ((short) var_10));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)896)) ? ((~((+(((/* implicit */int) var_1)))))) : (((((/* implicit */_Bool) ((unsigned char) 2220984600U))) ? (((/* implicit */int) max(((short)10894), (((/* implicit */short) arr_4 [i_0]))))) : (((((/* implicit */int) var_6)) | (((/* implicit */int) var_8))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_6)))));
                            arr_15 [(unsigned short)1] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 10380303661828134456ULL)) ? (-2253547132309289692LL) : (((/* implicit */long long int) 3067965502U))))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)30997))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (unsigned char)229)))))));
                        }
                        arr_16 [i_3] [i_2] [7] [i_0] |= ((short) ((((/* implicit */_Bool) arr_12 [i_3 - 1] [i_3] [i_3] [i_3])) || (((/* implicit */_Bool) arr_12 [i_3 - 1] [i_3 + 1] [i_3] [i_3]))));
                        arr_17 [i_2] [i_2] [i_2 + 2] [i_2 + 2] [i_2] [i_2 - 1] = ((/* implicit */unsigned long long int) (short)-26377);
                    }
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned int) (unsigned short)50726);
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)10900)), (1227001793U)))) ? ((+(((/* implicit */int) (unsigned char)14)))) : ((-(((((/* implicit */int) (unsigned short)58498)) + (((/* implicit */int) var_8)))))))))));
                        var_20 = ((/* implicit */unsigned short) (short)-10894);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) (-((~(2381488713U)))));
                            arr_22 [i_1] [2LL] [(signed char)11] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */int) (short)-10894)) ^ ((-(((/* implicit */int) (signed char)3))))));
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2 - 1])) ? (6599076269316458215ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((int) arr_25 [i_2] [i_2] [i_2 + 1] [i_2 - 3]));
                            arr_26 [i_0] [i_1] [i_0] [(signed char)2] [i_0] [i_1] [i_0] = ((/* implicit */signed char) var_13);
                            arr_27 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [3])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))))) : (((unsigned long long int) -963820407))));
                            var_24 = ((/* implicit */long long int) ((arr_0 [i_7]) ? (((unsigned long long int) arr_11 [i_5])) : (((/* implicit */unsigned long long int) arr_8 [i_2 - 3] [i_2 - 3] [i_2 + 2] [i_2 + 1]))));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_8 = 1; i_8 < 19; i_8 += 3) 
                    {
                        var_25 |= ((/* implicit */short) (unsigned short)1536);
                        /* LoopSeq 4 */
                        for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            var_26 += ((/* implicit */short) (-(arr_8 [i_1] [i_2 - 1] [i_8 + 1] [i_8])));
                            arr_32 [i_0] [i_1] [i_2] [i_8] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_25 [8U] [i_2] [i_2] [i_2 - 1]))));
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) (unsigned short)39263))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 3067965519U)) / (7912386202037881726ULL)));
                            var_29 += ((/* implicit */unsigned long long int) 1661680697);
                        }
                        for (int i_10 = 1; i_10 < 17; i_10 += 2) 
                        {
                            arr_35 [i_0] [i_0] [i_0] [(signed char)5] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((_Bool) 786432))) : (arr_8 [i_2 - 3] [(signed char)12] [i_8 - 1] [i_10 + 2])));
                            var_30 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) (_Bool)1)))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned int) (+(arr_19 [i_2 + 2] [i_2 + 1])));
                            arr_38 [i_0] [i_1] [i_11] [i_8] [(signed char)11] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))) < (arr_34 [(_Bool)0] [i_1] [i_2] [i_1] [6U] [i_8]))));
                            arr_39 [i_0] [i_11] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned short)39278)) ? (arr_28 [i_2 - 3] [i_2 + 2] [i_2 + 1] [i_2 - 3] [i_8 - 1] [i_8 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            var_32 = ((/* implicit */signed char) ((short) arr_31 [i_8 + 1] [i_1] [i_1] [i_8 + 1] [14U]));
                            var_33 = (unsigned char)0;
                            arr_42 [i_0] [i_1] [i_2] [i_8] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)10900)) ? (((/* implicit */unsigned long long int) ((int) var_10))) : (12688835716061785763ULL)));
                        }
                        arr_43 [i_8 - 1] [i_2] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (short)-16384)) >= (((/* implicit */int) (unsigned short)44074)))))));
                    }
                    arr_44 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 3483305803U))))));
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */int) (short)-10922)) < (((/* implicit */int) (short)7))))) : (((/* implicit */int) ((short) (short)10893))))))))));
}

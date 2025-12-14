/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110883
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
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_13 += ((/* implicit */short) ((long long int) (-(max((1971991037), (((/* implicit */int) arr_2 [i_0])))))));
                arr_6 [i_1] = ((/* implicit */unsigned int) arr_3 [i_0 + 1]);
                /* LoopSeq 4 */
                for (unsigned int i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    arr_10 [2U] [(unsigned char)0] [(unsigned char)0] [i_2] &= ((/* implicit */unsigned char) (-(arr_4 [i_0 + 2] [5] [i_0])));
                    var_14 = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 + 3])))));
                    arr_11 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */unsigned int) ((arr_7 [i_0] [i_1] [i_2] [i_0]) + (((/* implicit */int) var_10))))) < (((((/* implicit */unsigned int) arr_4 [i_2] [i_0] [i_0])) ^ (arr_1 [i_2])))))), (((((/* implicit */int) ((short) arr_8 [i_0] [i_1] [i_2 + 2] [i_2 + 2]))) + (arr_9 [i_0] [i_1 + 2] [i_2])))));
                }
                for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_3])) ? (arr_5 [(_Bool)1] [i_1] [i_3]) : (((/* implicit */int) arr_0 [i_1])))))))) + (((/* implicit */int) max((arr_12 [5] [i_0 + 1] [i_1] [i_1 - 1]), (arr_12 [i_0] [i_0 + 1] [i_0] [i_1 + 2])))))))));
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_3]))))), (((unsigned char) var_7)))))));
                }
                for (int i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
                {
                    arr_16 [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) (short)414)) && (((/* implicit */_Bool) (unsigned char)63)))) ? (min((((/* implicit */unsigned long long int) 1057832265)), (13226727811934394949ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])))));
                    var_17 = ((/* implicit */int) (-(9234685207901620227ULL)));
                    arr_17 [i_1] [i_1] [i_4] [i_1] = ((/* implicit */short) ((long long int) ((short) -1971991037)));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
                {
                    var_18 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_0 - 2] [(short)9] [(unsigned char)11])) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)70)))))));
                    arr_20 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_5] [i_1 - 1] [i_0])) ? (((/* implicit */unsigned int) arr_5 [i_5] [i_1 + 2] [i_1])) : (arr_14 [i_5] [i_1] [i_1 - 1] [i_1])));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)192)) : (arr_9 [i_0] [i_0] [(unsigned char)12])))) && (((/* implicit */_Bool) var_0))));
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        arr_23 [i_0] [i_1] [(short)0] [i_5] [i_5] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)241)) ? (743151835) : (arr_4 [i_0 + 3] [i_0 + 3] [i_1 + 2])));
                        arr_24 [i_0] [i_0] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_9)))))) ^ (arr_1 [i_0]));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((unsigned char) arr_3 [i_5])))));
                        arr_25 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_1 + 1] [i_5] [8U]))));
                        arr_26 [i_1] [i_1] [i_5] [i_6] = ((/* implicit */unsigned int) (-(var_7)));
                    }
                }
                arr_27 [i_1] = ((/* implicit */unsigned char) (~((+((~(((/* implicit */int) (short)-1))))))));
                var_21 = ((((/* implicit */_Bool) ((unsigned char) arr_9 [i_0] [(_Bool)1] [i_0]))) ? (((((/* implicit */_Bool) -1971991037)) ? (((/* implicit */int) (unsigned short)62017)) : (0))) : (((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_1] [i_0])));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (-(min((5064778572711290885ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2588631517U)) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) (unsigned char)215)))))))));
}

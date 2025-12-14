/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110831
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) -420562387))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_14)));
    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 420562386)))) / (var_8)));
    var_22 = ((/* implicit */unsigned char) var_19);
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) -420562373)) % (13509220713808796706ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [16U]), (arr_1 [(unsigned char)18]))))))))));
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_2 [i_0 - 2]))) && (((/* implicit */_Bool) arr_2 [i_0 - 1])))))));
    }
    /* LoopSeq 2 */
    for (int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (~(((/* implicit */int) ((unsigned short) ((unsigned long long int) arr_3 [i_1] [i_1])))))))));
        var_26 = ((/* implicit */unsigned char) max((((/* implicit */long long int) -420562387)), (6420670800967739991LL)));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) arr_3 [8LL] [i_3])) : (((/* implicit */int) arr_3 [i_3] [i_2])))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 8; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_5 + 1] [i_5 + 2]))));
                                arr_18 [i_2] [i_2] [i_3] [5LL] [i_2] [7LL] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_5 + 1] [i_3] [i_4] [i_5 + 2])) != ((~(((/* implicit */int) var_11))))));
                                arr_19 [i_2] [5LL] [i_4] [i_5] [i_5] [i_2] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_4] [i_5 + 2] [i_6])) ? (((/* implicit */int) (unsigned short)48104)) : (((/* implicit */int) ((short) 424978946)))));
                            }
                        } 
                    } 
                    arr_20 [i_2] [i_2] [(signed char)7] [(signed char)7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_15 [i_4] [i_4] [i_4] [i_2]))) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) ((unsigned short) 13207184471654523384ULL)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 4) 
            {
                {
                    var_29 += ((((/* implicit */_Bool) 1577385646U)) ? (1748955151743895959ULL) : (((/* implicit */unsigned long long int) 8632279843113572786LL)));
                    arr_28 [i_8] = ((/* implicit */long long int) (unsigned short)57525);
                    arr_29 [i_8 + 1] [i_7] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [(unsigned char)10] [9ULL] [i_7] [i_8 - 1])) % (((/* implicit */int) (unsigned short)11076))));
                    arr_30 [i_2] = ((/* implicit */unsigned char) ((_Bool) arr_5 [i_2] [i_8 - 1]));
                    var_30 = arr_21 [i_8 - 1] [i_8 - 1];
                }
            } 
        } 
        arr_31 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [(unsigned char)2] [i_2] [i_2] [i_2])) || (((/* implicit */_Bool) 13207184471654523384ULL))));
    }
}

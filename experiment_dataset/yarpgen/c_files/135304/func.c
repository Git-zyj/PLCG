/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135304
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_12 = ((((/* implicit */_Bool) max((((long long int) arr_8 [i_0] [(unsigned short)10] [i_2])), ((-(arr_8 [i_0] [5ULL] [i_2])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_7)))) ? (((((/* implicit */_Bool) var_3)) ? (arr_2 [i_2]) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) > (((/* implicit */int) (unsigned char)243)))))))) : (max((arr_1 [i_1] [i_2]), (((/* implicit */unsigned long long int) max((var_0), (var_4)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        arr_11 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [18])) && (((/* implicit */_Bool) var_6)))))));
                        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)55)) : (2132837507)));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        var_14 = ((/* implicit */signed char) max((max((var_9), (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_1])))), (((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_0])))))));
                        var_15 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((int) var_9))) ? (((/* implicit */unsigned long long int) ((int) arr_9 [i_0] [15LL] [15LL] [i_0]))) : (((((/* implicit */_Bool) arr_12 [(unsigned char)4] [i_4] [15ULL] [i_4] [i_4] [7LL])) ? (var_7) : (((/* implicit */unsigned long long int) var_0))))))));
                    }
                }
            } 
        } 
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65134)))))));
        arr_14 [i_0] [i_0] &= ((/* implicit */unsigned short) ((unsigned char) arr_7 [i_0] [2] [i_0]));
    }
    var_17 = ((/* implicit */int) min((var_17), (var_4)));
    /* LoopSeq 1 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_18 = ((/* implicit */int) max((((((((/* implicit */unsigned long long int) var_3)) > (arr_0 [0]))) ? (((/* implicit */unsigned long long int) var_3)) : ((+(arr_15 [i_5 - 1]))))), (((((((/* implicit */_Bool) arr_9 [12ULL] [12ULL] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5 - 1] [10] [i_5 - 1]))) : (arr_1 [i_5] [15U]))) / (((/* implicit */unsigned long long int) (~(arr_13 [i_5] [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5]))))))));
        var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1601316286551860222LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_8 [i_5 - 1] [i_5 - 1] [i_5 - 1])) ? (arr_8 [(unsigned short)0] [i_5 - 1] [i_5 - 1]) : (arr_8 [i_5 - 1] [i_5 - 1] [i_5 - 1]))) : ((+(arr_8 [i_5 - 1] [i_5 - 1] [i_5 - 1])))));
        var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_5 - 1]))), ((~(((arr_15 [i_5 - 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
        arr_17 [i_5] &= ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) / (((unsigned long long int) arr_7 [i_5] [i_5] [i_5])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)26668)) | (((/* implicit */int) (_Bool)0))))))));
    }
    var_21 = ((/* implicit */unsigned long long int) var_0);
}

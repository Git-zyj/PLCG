/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119405
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
    var_11 = ((/* implicit */_Bool) (-((+((+(((/* implicit */int) var_2))))))));
    var_12 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) min((var_13), (((arr_0 [2U]) ? (((/* implicit */int) ((unsigned char) arr_2 [6]))) : (((((/* implicit */_Bool) arr_1 [12LL] [i_0 + 1])) ? (((/* implicit */int) ((_Bool) var_5))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(signed char)0])))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) /* same iter space */
            {
                arr_7 [(unsigned short)2] [i_0] = ((/* implicit */unsigned int) arr_5 [i_0] [(_Bool)0]);
                arr_8 [(_Bool)1] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((arr_0 [i_0]) ? (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_4)))) : (((/* implicit */int) (_Bool)0))));
            }
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
            {
                var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [4LL] [i_1])) && (arr_9 [(unsigned char)10] [i_1] [(unsigned char)4] [(unsigned short)4])));
                arr_11 [8] [(_Bool)1] &= ((/* implicit */unsigned int) (-(((arr_5 [(_Bool)0] [i_3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_1 [(unsigned char)10] [12])))));
                var_15 = ((/* implicit */int) ((_Bool) arr_0 [i_0]));
                arr_12 [i_0] = ((/* implicit */int) arr_6 [(_Bool)1] [(signed char)5] [i_0] [i_0]);
            }
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
            {
                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((unsigned char) ((unsigned long long int) var_7))))));
                arr_15 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_0] [i_0 + 1] [i_0])) | (((/* implicit */int) arr_3 [i_0] [i_1]))));
            }
            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((signed char) (_Bool)1)))));
                var_18 = ((var_2) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [5U] [7U] [12U])));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+(((/* implicit */int) arr_18 [(signed char)8] [i_1])))))));
                arr_20 [i_5] [i_0] [(_Bool)1] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) != (arr_13 [i_0] [i_1] [(_Bool)1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [9ULL] [i_0 + 1] [i_5]))) : (((((/* implicit */unsigned long long int) var_10)) | (arr_19 [i_5] [(unsigned char)11])))));
            }
            var_20 = ((/* implicit */_Bool) ((short) ((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
            arr_21 [i_0] [i_0] = ((/* implicit */_Bool) arr_19 [i_0 + 1] [i_0 - 1]);
        }
        arr_22 [i_0] = ((/* implicit */signed char) var_10);
    }
    for (int i_6 = 0; i_6 < 25; i_6 += 1) 
    {
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-26)) ? (arr_25 [1] [i_6]) : (((/* implicit */int) arr_23 [(unsigned short)21]))))) ? (((/* implicit */int) var_0)) : ((((_Bool)1) ? (var_7) : (((/* implicit */int) arr_23 [(signed char)6]))))))) ? (min((min((var_10), (((/* implicit */unsigned int) arr_24 [(unsigned char)20] [i_6])))), (((/* implicit */unsigned int) -1734642120)))) : ((+(((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))))));
        var_22 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) (unsigned char)43)) && (((/* implicit */_Bool) (unsigned short)31925))))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_24 [i_6] [i_6]), (((/* implicit */signed char) var_2)))))))), (((((/* implicit */_Bool) ((var_4) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
        var_24 *= ((((/* implicit */_Bool) 1948644776U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)19078))) : (min((var_10), (((/* implicit */unsigned int) 324611343)))));
    }
    var_25 = ((/* implicit */unsigned short) var_8);
}

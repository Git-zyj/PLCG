/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118409
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
    var_17 = ((/* implicit */unsigned short) ((var_3) != (((/* implicit */int) min((var_14), (var_4))))));
    var_18 = ((/* implicit */int) var_2);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        arr_2 [(short)21] = ((/* implicit */short) ((8441662040790045682ULL) / (((/* implicit */unsigned long long int) ((arr_0 [i_0]) >> ((+(((/* implicit */int) (_Bool)0)))))))));
        var_19 ^= ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_13))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [8U])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_11)))) ? (((/* implicit */int) arr_1 [8ULL])) : (((/* implicit */int) var_16))))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_0))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 136902082560ULL))))), (((unsigned long long int) arr_0 [i_0])))))))));
        arr_3 [i_0] [i_0] = ((((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_0])))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((arr_0 [0ULL]) + (-1170891412))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [(signed char)19])) : (((/* implicit */int) (unsigned char)199)))))) + (1060041120))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] [i_1] &= ((/* implicit */unsigned short) ((signed char) arr_1 [i_1]));
        var_21 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [17])) | (((/* implicit */int) var_4))))) : ((+(var_12)))))));
    }
    for (signed char i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_14)) + (2147483647))) << (((((((/* implicit */_Bool) (signed char)74)) ? (arr_0 [i_2]) : (((/* implicit */int) arr_1 [19LL])))) - (110850320))))) / (var_3)));
        /* LoopNest 2 */
        for (signed char i_3 = 3; i_3 < 23; i_3 += 3) 
        {
            for (unsigned short i_4 = 1; i_4 < 22; i_4 += 3) 
            {
                {
                    var_22 = ((/* implicit */int) min((var_22), ((-(((/* implicit */int) ((signed char) ((short) arr_8 [i_3] [i_4 + 3]))))))));
                    arr_16 [i_3] [i_3] [i_2] [12] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_0 [i_2]))))));
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_3))));
                    var_24 = ((/* implicit */signed char) ((((_Bool) arr_10 [(_Bool)1])) ? (((((/* implicit */_Bool) ((var_9) >> (((arr_12 [i_2]) - (3910697578U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) var_16)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2] [i_3 - 3])) ? (((/* implicit */int) ((short) 1170891412))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))) > (arr_8 [(signed char)19] [(unsigned short)3])))))))));
                    var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((arr_10 [i_3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) (!(var_0)))) : (var_7)));
                }
            } 
        } 
        var_26 = (_Bool)1;
        var_27 = ((/* implicit */unsigned long long int) (+((-(var_7)))));
    }
    var_28 = ((/* implicit */_Bool) 1170891398);
}

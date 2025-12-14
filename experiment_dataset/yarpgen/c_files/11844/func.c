/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11844
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) ((arr_1 [i_0] [i_0]) == (arr_1 [i_0] [i_0])));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)40)) ^ (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_18 |= ((/* implicit */signed char) (+((+(((var_6) ^ (((/* implicit */int) (signed char)-6))))))));
        var_19 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((long long int) arr_3 [i_1]))))) ? (((arr_3 [i_1]) * (((/* implicit */unsigned long long int) 2000368765)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_20 |= ((/* implicit */int) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_1])) : (var_16)))), (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (arr_3 [i_1])))));
        arr_5 [i_1] = (+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (var_11) : (((/* implicit */int) arr_4 [i_1]))))), (((((/* implicit */_Bool) var_11)) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))));
    }
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        var_21 = ((/* implicit */int) min((((((((/* implicit */_Bool) arr_6 [i_2] [i_2])) || (((/* implicit */_Bool) 2258002264U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_2] [i_2])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (1LL))))), (((/* implicit */long long int) ((min((((/* implicit */unsigned int) var_8)), (arr_7 [i_2]))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2]))))))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_2] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2])))))) : (var_14))))))));
    }
    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) (+(((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))))), (arr_4 [i_3 + 2]))))));
        arr_10 [i_3] [i_3] &= ((/* implicit */short) ((_Bool) min((((/* implicit */unsigned long long int) var_14)), (arr_3 [i_3 + 1]))));
    }
    for (unsigned char i_4 = 1; i_4 < 13; i_4 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4 + 4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))))))));
        arr_15 [i_4] [i_4] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)18))) : (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_9 [i_4] [i_4]) || (((/* implicit */_Bool) arr_6 [i_4] [i_4 + 4])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)125))) ^ (var_13)))))) : (((((/* implicit */_Bool) min((var_8), (((/* implicit */signed char) arr_13 [i_4]))))) ? (((/* implicit */unsigned long long int) ((var_4) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32762)))))) : (arr_11 [i_4 + 2] [i_4 + 3])))));
    }
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
    {
        arr_18 [i_5] &= ((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) arr_7 [i_5]))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_17 [i_5] [i_5])) : (((/* implicit */int) arr_17 [i_5] [i_5]))))));
        var_25 = ((/* implicit */_Bool) arr_11 [i_5] [i_5]);
        var_26 = ((/* implicit */int) min((var_26), ((+((+(((/* implicit */int) arr_17 [i_5] [i_5]))))))));
    }
    for (int i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) max((((/* implicit */int) var_1)), ((((!(((/* implicit */_Bool) var_8)))) ? ((-(18))) : (min((((/* implicit */int) arr_16 [i_6] [i_6])), (-1))))))))));
        arr_22 [i_6] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) arr_16 [i_6] [i_6])) <= (((/* implicit */int) arr_6 [i_6] [i_6]))))), (((((/* implicit */int) arr_6 [i_6] [i_6])) | (((/* implicit */int) arr_16 [i_6] [i_6]))))));
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) var_11)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32512))) >= (min((arr_3 [i_6]), (((/* implicit */unsigned long long int) (unsigned char)245))))))) : ((-(((/* implicit */int) ((var_4) && (((/* implicit */_Bool) arr_17 [i_6] [i_6]))))))))))));
    }
}

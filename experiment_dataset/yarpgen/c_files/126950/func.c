/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126950
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
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_1))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] |= ((/* implicit */_Bool) arr_0 [i_0]);
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0]))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66))) : (arr_0 [i_0])))))) ? (((((_Bool) arr_1 [i_0])) ? (((/* implicit */int) min((var_10), (((/* implicit */unsigned char) var_8))))) : (((/* implicit */int) ((_Bool) arr_1 [i_0]))))) : ((-(((/* implicit */int) arr_1 [i_0])))))))));
    }
    for (short i_1 = 2; i_1 < 13; i_1 += 3) 
    {
        arr_7 [i_1 + 3] = ((((/* implicit */int) (unsigned char)58)) != (((/* implicit */int) (unsigned char)156)));
        arr_8 [i_1 - 2] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) var_3))))) ? ((~(((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) var_4))))));
        arr_9 [i_1] = ((/* implicit */_Bool) (unsigned char)171);
        arr_10 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (_Bool)1))));
    }
    for (int i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((int) ((((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (4281725736U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_2]))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)8176))))))))));
        /* LoopSeq 1 */
        for (int i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) (unsigned char)66);
            arr_19 [i_3] [i_3 - 1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)112)) ? (max((((/* implicit */unsigned int) arr_11 [i_2] [i_3])), (4281725738U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_13 [(signed char)11])) != (2147483633)))))))));
            var_20 = ((/* implicit */long long int) min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))));
        }
        var_21 *= ((/* implicit */long long int) arr_12 [i_2]);
        var_22 = ((/* implicit */long long int) ((((arr_15 [i_2] [i_2] [i_2]) >= (arr_15 [i_2] [i_2] [i_2]))) ? (((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_18 [i_2] [i_2] [i_2])) : ((+(var_11))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 281406257233920LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    }
    for (int i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
    {
        var_23 += ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_11))) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_4] [i_4])) || (((/* implicit */_Bool) (unsigned char)169)))))))), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_20 [i_4])) : (((/* implicit */int) arr_14 [i_4] [i_4]))))) & (((unsigned int) var_13))))));
        /* LoopSeq 2 */
        for (signed char i_5 = 1; i_5 < 19; i_5 += 2) 
        {
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 8191U)) ? (((/* implicit */int) (unsigned short)42050)) : (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (2423056526244417336ULL)))) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) var_1))))));
            arr_27 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5 + 1] [i_5 + 2] [i_5])) || (((/* implicit */_Bool) ((unsigned short) arr_22 [i_4]))))))));
            arr_28 [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_22 [(unsigned short)17])))) ? (((/* implicit */int) min((arr_16 [i_5 - 1] [i_5] [i_5 - 1]), (arr_16 [i_5 + 2] [i_5 + 1] [i_5])))) : (((((/* implicit */_Bool) 1228213896U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_20 [i_5]))))));
            var_25 -= ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_11 [i_4] [i_5 - 1])))) - (((/* implicit */int) max((arr_16 [i_4] [i_4] [i_5 + 1]), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) arr_26 [i_5 + 2])), ((unsigned char)62)))))))));
        }
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(-3778744287299343080LL)))) ? (((((/* implicit */int) arr_25 [i_4] [i_6])) & (((/* implicit */int) arr_24 [i_6] [i_6])))) : (((((/* implicit */_Bool) arr_24 [i_4] [i_4])) ? (((/* implicit */int) arr_25 [i_4] [i_6])) : (((/* implicit */int) arr_25 [i_6] [i_4]))))));
            arr_31 [i_4] [i_4] = ((/* implicit */unsigned long long int) min(((unsigned char)179), (((/* implicit */unsigned char) (_Bool)1))));
        }
        arr_32 [i_4] = ((/* implicit */int) (+(((long long int) arr_14 [i_4] [i_4]))));
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) max((((/* implicit */long long int) (-(((/* implicit */int) var_10))))), (max((((((/* implicit */_Bool) arr_30 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4]))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((unsigned char) (unsigned char)255))))))))));
        arr_33 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967285U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)171))));
    }
}

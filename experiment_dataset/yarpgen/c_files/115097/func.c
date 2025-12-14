/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115097
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_19 -= ((/* implicit */signed char) ((unsigned long long int) max((((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0] [2LL]) : (((/* implicit */int) (unsigned char)177)))), (((/* implicit */int) arr_4 [i_1])))));
                    var_20 -= ((/* implicit */short) 60129542144ULL);
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) : (((/* implicit */int) max(((short)-17261), (((/* implicit */short) var_12)))))))) && (((/* implicit */_Bool) var_16))));
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_5 = 2; i_5 < 19; i_5 += 4) 
                {
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) max(((-(max((4294967295U), (((/* implicit */unsigned int) arr_2 [i_3] [i_4] [(unsigned char)12])))))), (((arr_5 [(unsigned char)15] [i_4] [i_3]) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) 901073141))));
                                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_5 - 1] [i_5 - 2] [i_5 + 1])) && (((/* implicit */_Bool) arr_2 [i_5 - 1] [i_5 - 2] [i_5 + 1]))))))))));
                                var_25 -= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_6 [i_6]))));
                                var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((long long int) -901073141)) * (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_6 [i_3])), (arr_15 [i_4] [(signed char)14]))))))) ? (((((arr_12 [i_3] [i_6] [i_3]) != (((/* implicit */unsigned long long int) 901073123)))) ? (arr_3 [(unsigned short)23] [i_4] [i_7]) : (((/* implicit */int) var_15)))) : ((+(((/* implicit */int) (_Bool)1))))));
                                var_27 = ((/* implicit */unsigned int) max((var_27), ((~(3140183212U)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_8 = 1; i_8 < 18; i_8 += 4) 
                    {
                        arr_20 [i_4] [i_4] [i_8] [(_Bool)1] [i_8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_8] [i_8] [i_5] [i_3] [i_3] [i_3])) ? (var_0) : (((unsigned long long int) ((unsigned char) arr_14 [i_3] [i_3] [i_5] [i_3])))));
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((int) arr_11 [i_5 + 1] [i_4] [i_8] [(unsigned short)13])) + ((-(((/* implicit */int) arr_7 [i_8]))))))) ? (((long long int) (-(arr_3 [i_4] [i_5] [i_8 + 2])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65509)) ? (max((-1189156192), (((/* implicit */int) arr_0 [i_5] [i_5])))) : (((((/* implicit */int) (unsigned char)89)) ^ (((/* implicit */int) var_13))))))))))));
                    }
                    arr_21 [i_3] [i_3] [i_4] [i_3] |= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_5 - 1] [6ULL] [i_3])) || ((!(((/* implicit */_Bool) arr_0 [i_3] [i_3])))))))));
                }
                var_29 &= ((/* implicit */unsigned short) ((long long int) (+(((/* implicit */int) var_2)))));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        {
                            arr_26 [(unsigned char)7] [i_9] [i_10] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((-2124790600) & (-1))) : (var_4)));
                            var_30 ^= ((/* implicit */long long int) (~(((((/* implicit */int) ((arr_12 [i_4] [i_4] [i_10]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2)))))) << (((((/* implicit */int) ((signed char) arr_2 [i_3] [i_3] [1ULL]))) - (73)))))));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 2) 
                            {
                                var_31 ^= ((/* implicit */unsigned short) ((int) (-(arr_9 [i_9] [(unsigned short)14]))));
                                var_32 -= ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_11] [(unsigned short)15] [i_11]))));
                            }
                            for (signed char i_12 = 0; i_12 < 20; i_12 += 2) 
                            {
                                arr_32 [i_3] [i_3] [i_4] [i_9] [i_10] [i_12] &= ((/* implicit */_Bool) arr_31 [i_4] [(signed char)17] [i_4] [i_4] [13U]);
                                var_33 |= ((/* implicit */unsigned long long int) (+((+(-901073124)))));
                            }
                        }
                    } 
                } 
                var_34 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_3] [i_3]))));
                var_35 += ((((((unsigned long long int) (unsigned short)60537)) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) * (arr_12 [i_4] [i_3] [13U]));
            }
        } 
    } 
}

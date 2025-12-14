/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142210
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
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) (+(((((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) * (((/* implicit */int) max(((_Bool)0), (arr_1 [i_0] [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_2 [i_0 - 1])) >> (((/* implicit */int) ((arr_1 [i_0] [i_0]) && (((/* implicit */_Bool) arr_0 [i_0])))))))));
        var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0 - 2])))), (((/* implicit */int) max((arr_1 [i_0 + 3] [i_0 - 2]), (arr_1 [i_0 + 2] [i_0 + 3]))))));
        var_16 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_1 [i_0] [i_0]))) && (arr_1 [i_0 + 2] [i_0]))))) | (((6833805990961508544ULL) % (((/* implicit */unsigned long long int) ((-8885477453222861957LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)105)))))))));
        arr_4 [i_0 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)148))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0 + 1] [i_0 + 3])), (arr_0 [i_0 + 1])))) : (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) arr_0 [i_0 + 1]))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_17 += ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 3])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_7 [i_1]) : (arr_7 [i_1])))))))));
        var_18 |= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1 + 2])) % (max((((/* implicit */int) (short)13568)), (-1844109214)))))), (((arr_1 [i_1 + 2] [i_1 + 2]) ? (0ULL) : (((/* implicit */unsigned long long int) -676170198))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_2 = 1; i_2 < 20; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            for (unsigned char i_4 = 3; i_4 < 19; i_4 += 2) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 + 1])) ? (arr_7 [i_2 + 1]) : (18446744073709551604ULL)))) ? (((arr_7 [i_2 + 1]) >> (((arr_7 [i_2 + 1]) - (3882194143483878014ULL))))) : (max((arr_7 [i_2 - 1]), (arr_7 [i_2 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (((-(((/* implicit */int) arr_11 [i_2 + 1])))) - (((((/* implicit */_Bool) arr_9 [i_4 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_9 [i_4 - 3] [i_2 + 1])) : (((/* implicit */int) (unsigned short)65535)))))))));
                                arr_24 [i_2] [i_2] [i_4] [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_15 [i_4 - 2] [i_6] [i_4 - 2])) ? (((/* implicit */int) arr_15 [i_4 - 2] [i_4] [i_4])) : (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) max(((unsigned short)16352), (((/* implicit */unsigned short) arr_15 [i_4 - 2] [i_4 - 3] [i_5])))))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */signed char) arr_21 [i_4 - 2] [i_2 + 2])), (arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))) * (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) ((arr_21 [i_2] [i_2]) && ((_Bool)1)))))))))));
                                var_22 = ((/* implicit */unsigned long long int) ((-5897143804680644287LL) | (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2] [i_3])))));
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) max((((max((((/* implicit */int) (unsigned short)22697)), (arr_13 [i_6]))) % (((/* implicit */int) max((arr_20 [i_2 + 1] [i_2 + 1] [i_4 + 3] [i_5]), (((/* implicit */unsigned short) arr_23 [i_2] [i_2] [i_2] [(unsigned short)16] [i_2 + 2]))))))), (max(((((_Bool)1) ? (((/* implicit */int) arr_0 [(signed char)14])) : (((/* implicit */int) arr_21 [i_2] [i_3])))), (((/* implicit */int) max(((unsigned char)193), (((/* implicit */unsigned char) (_Bool)1))))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 3; i_7 < 18; i_7 += 4) 
                    {
                        for (int i_8 = 2; i_8 < 20; i_8 += 1) 
                        {
                            {
                                arr_30 [i_2] [3U] [i_4] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2 - 1])) ? (arr_16 [i_2 + 1]) : (arr_16 [i_2 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_18 [i_2 + 2] [i_4 + 2] [i_7] [i_7] [i_7 + 3] [i_8 - 2]), (arr_18 [i_2 + 2] [i_4 + 2] [i_7] [i_7] [i_7 + 3] [i_8 + 2]))))) : (max((arr_16 [i_2 - 1]), (((/* implicit */unsigned int) arr_23 [i_2 + 2] [i_4 + 1] [i_4 + 1] [i_7 + 1] [i_7 - 3]))))));
                                var_24 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_20 [i_8 + 1] [i_8 + 1] [i_8 + 2] [i_8 - 2]))))), (((unsigned long long int) arr_0 [i_7 + 2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

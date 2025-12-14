/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111412
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_10 *= arr_4 [i_0];
                    arr_7 [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(6612770551704898472ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [13]), (arr_1 [(short)11]))))) : (min((arr_2 [i_2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [(unsigned char)12])) : (((/* implicit */int) arr_1 [i_2])))))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) -3127527755734742218LL))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_2] [6LL] [i_0] [i_0])), (arr_4 [i_2])))) : (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_5 [(unsigned char)19] [(unsigned char)19] [i_0])))))), (((/* implicit */int) max((((/* implicit */short) (signed char)126)), ((short)23833))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((11833973522004653164ULL) ^ (11833973522004653159ULL)))) ? (((/* implicit */int) ((signed char) var_9))) : ((~(((/* implicit */int) ((short) var_9)))))));
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                {
                    arr_19 [i_3] [(_Bool)1] [i_5] [i_5] = ((/* implicit */long long int) (unsigned char)122);
                    var_12 |= ((/* implicit */short) min((min(((~(((/* implicit */int) (signed char)-126)))), ((~(((/* implicit */int) (short)-7700)))))), (((/* implicit */int) ((_Bool) arr_2 [i_5])))));
                    arr_20 [i_3] [i_5] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)47093)) ? (((/* implicit */int) arr_4 [i_5])) : (((/* implicit */int) arr_4 [i_3]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-126)) ? (-8893917520936795629LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8893917520936795610LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) : (2147483648U)))) ? (((/* implicit */long long int) arr_24 [i_6])) : (arr_25 [i_6] [i_6] [i_8] [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_25 [i_6] [i_7] [i_8] [i_6]) >= (arr_25 [i_6] [i_6] [i_8] [i_8]))))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_30 [i_6] [i_7] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(6612770551704898478ULL)))) ? (((((/* implicit */long long int) var_5)) & (-8893917520936795593LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)7726)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) (unsigned short)20534)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_6] [(unsigned short)6] [i_6] [i_6] [i_6] [(signed char)11]))) : (arr_28 [(signed char)10] [(signed char)10] [i_6] [i_6] [(unsigned short)8] [(signed char)10])))));
                        var_14 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_26 [i_6] [i_7] [i_8] [i_9])) ? (arr_26 [i_9] [i_7] [i_9] [i_7]) : (arr_26 [i_6] [i_7] [i_8] [i_9])))));
                    }
                    for (short i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (short i_11 = 0; i_11 < 23; i_11 += 3) 
                        {
                            arr_35 [i_6] [i_7] = ((/* implicit */signed char) ((arr_31 [i_8] [i_8] [i_11]) / (((/* implicit */long long int) ((/* implicit */int) ((short) (short)-18414))))));
                            arr_36 [i_6] [i_7] [i_6] [i_8] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (~(826463396)))) ? (7574243601951794499ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2954722081U)), (-8893917520936795629LL))))));
                        }
                        for (short i_12 = 0; i_12 < 23; i_12 += 4) /* same iter space */
                        {
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((5688345832852830734ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45017)))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_33 [i_6] [i_7] [i_8] [i_7] [i_7] [i_12])) : (((/* implicit */int) arr_37 [i_12] [i_6]))))) : (arr_26 [i_6] [i_8] [(_Bool)1] [i_12])))) ? (((((/* implicit */_Bool) max((((/* implicit */short) (signed char)28)), ((short)-26125)))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_23 [i_12] [i_8]), (arr_29 [i_6] [i_10] [i_6] [i_6] [i_6] [i_6]))))) : (min((var_2), (arr_31 [i_6] [i_12] [(unsigned short)7]))))) : (((/* implicit */long long int) (((_Bool)1) ? (arr_24 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_7] [i_8] [i_6] [i_12]))))))));
                            var_16 = ((/* implicit */unsigned char) ((arr_39 [i_6]) ? (arr_26 [i_12] [i_12] [i_12] [i_12]) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_28 [i_12] [i_12] [(short)5] [(short)5] [i_6] [i_6])), (arr_25 [i_7] [i_8] [i_6] [i_12]))))));
                        }
                        for (short i_13 = 0; i_13 < 23; i_13 += 4) /* same iter space */
                        {
                            var_17 ^= ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_27 [i_6] [i_6] [i_8] [i_6]))))));
                            var_18 = ((/* implicit */unsigned char) arr_29 [i_6] [i_7] [i_6] [i_7] [i_7] [i_8]);
                        }
                        var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8147451793646772331LL))))) : (((/* implicit */int) (unsigned short)26141)))), (((/* implicit */int) ((unsigned char) 158289906U)))));
                    }
                }
            } 
        } 
    } 
}

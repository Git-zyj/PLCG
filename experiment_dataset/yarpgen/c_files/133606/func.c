/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133606
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
    var_16 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) arr_2 [19] [(unsigned short)1]);
        arr_4 [i_0] = ((/* implicit */unsigned int) var_9);
        arr_5 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))) ^ ((~(7204889664431659874ULL)))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            arr_9 [i_0] = ((/* implicit */int) var_1);
            arr_10 [i_1] = ((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)166)))) < (((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_5))))))) ? (min((134086656ULL), (((/* implicit */unsigned long long int) (unsigned char)31)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))));
            arr_11 [10ULL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)20))));
            arr_12 [0ULL] [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) 2343517459119658561ULL))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52015))) - (266287972352ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2343517459119658561ULL)) ? (((/* implicit */int) arr_6 [i_0] [(unsigned char)7])) : (((/* implicit */int) var_15))))))) : (((/* implicit */unsigned long long int) (~(var_2))))));
            arr_13 [2ULL] = ((((((/* implicit */_Bool) arr_0 [i_0] [i_1 + 1])) ? (arr_2 [i_1 - 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((13ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)22))))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [11LL] [i_1 + 1]) >= (arr_2 [i_0] [i_1 - 1]))))));
        }
        for (signed char i_2 = 2; i_2 < 22; i_2 += 4) 
        {
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((-1308154266), (var_7))) < (((((/* implicit */int) min((((/* implicit */unsigned short) var_15)), ((unsigned short)14315)))) >> (((var_7) + (866408)))))));
            arr_17 [17] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_6 [(unsigned char)5] [i_2 - 1])))) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) arr_6 [i_2] [(unsigned char)10])) - (((/* implicit */int) var_5))))))), (min((((12238621948996667273ULL) & (2343517459119658561ULL))), (9646435718456890449ULL)))));
            arr_18 [(unsigned short)18] [i_2 - 2] [3] = ((/* implicit */signed char) ((((/* implicit */int) min(((!(((/* implicit */_Bool) arr_7 [i_0])))), ((_Bool)0)))) < ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) arr_8 [16] [i_2] [i_2])))))))));
        }
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            arr_21 [i_0] [i_3] = (~((~(((/* implicit */int) arr_1 [i_0] [(unsigned short)21])))));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 3; i_4 < 21; i_4 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    arr_27 [i_5] [i_0] [i_3] [16ULL] [i_3] [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [15] [15])) <= (((/* implicit */int) var_5)))))));
                    arr_28 [i_0] [i_4 - 2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [20ULL])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_3])))))))) : (((unsigned int) ((arr_8 [i_3] [i_3] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0]))))))));
                    arr_29 [i_0] [i_0] [i_5] [i_4 + 2] [i_0] |= ((min((((/* implicit */unsigned int) min(((signed char)8), (((/* implicit */signed char) (_Bool)0))))), (((var_12) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) - (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)161)), (((((/* implicit */_Bool) arr_7 [i_4 - 3])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_13))))))));
                    arr_30 [i_3] [2ULL] [2ULL] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_15))));
                }
                for (short i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 3; i_7 < 19; i_7 += 1) 
                    {
                        arr_36 [i_0] [i_3] [i_0] [i_3] [i_7 - 3] = ((/* implicit */unsigned char) arr_25 [i_4 - 1]);
                        arr_37 [i_3] [i_6] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (signed char)-23)), ((unsigned short)0)));
                        arr_38 [(unsigned short)2] [(signed char)18] [i_0] [16ULL] [i_4 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((18418834171156601533ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        arr_41 [i_0] [i_8] [i_4] [i_8] [i_0] [i_6] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_24 [i_0] [i_0])) ? (4717162612184324300ULL) : (((/* implicit */unsigned long long int) arr_24 [i_0] [i_0]))))));
                        arr_42 [i_0] [i_3] [i_4 - 3] = ((/* implicit */unsigned int) ((int) max((arr_14 [i_4 + 2] [i_4 - 1] [i_4 + 2]), (arr_14 [i_4 + 1] [i_4 - 3] [i_4 + 1]))));
                    }
                    arr_43 [i_3] [i_3] = max((((4717162612184324300ULL) << (((min((0LL), (((/* implicit */long long int) (signed char)-23)))) + (32LL))))), (max((min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])), (arr_39 [i_3] [i_3]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_6 [i_0] [i_3])), (var_15)))))));
                }
                arr_44 [i_3] = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)94)), (2147483647)));
                arr_45 [i_3] [i_3] [i_4] = ((((/* implicit */unsigned long long int) arr_24 [i_4 - 3] [i_3])) == ((-(2458943808884255746ULL))));
            }
        }
        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            arr_50 [i_9] = ((/* implicit */short) (((!(((var_12) < (((/* implicit */unsigned int) 1506402050)))))) && (((/* implicit */_Bool) (~((~(61572651155456ULL))))))));
            arr_51 [i_0] [(_Bool)1] [i_9] = ((/* implicit */int) ((unsigned int) 15987800264825295876ULL));
            arr_52 [i_0] = ((/* implicit */unsigned int) (unsigned short)65535);
            arr_53 [1ULL] [(signed char)18] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_0])) == (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9))))))), (((unsigned long long int) ((((/* implicit */_Bool) 760155064398930038ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) : (var_11))))));
        }
        arr_54 [i_0] = ((/* implicit */unsigned short) var_6);
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154429
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
    var_10 = ((((/* implicit */_Bool) ((unsigned int) ((4224577196U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)21147))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_2] [(short)11])) : (((/* implicit */int) arr_8 [i_3] [i_3]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_3]))) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_8 [i_0] [i_0]), (((/* implicit */unsigned short) var_4))))))));
                        arr_10 [(signed char)0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) 63);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_4 = 1; i_4 < 17; i_4 += 2) 
        {
            var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 70390107U)) ? (4224577175U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192)))))))) | (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)63))))), (max((1835719606U), (((/* implicit */unsigned int) arr_13 [i_0] [i_4]))))))))))));
            arr_14 [i_0] [8ULL] [i_4] = ((/* implicit */int) arr_7 [i_0] [i_4] [i_4] [i_4]);
            arr_15 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (short)22675)) : (((/* implicit */int) var_5)))), (((/* implicit */int) arr_7 [i_4 + 3] [i_4] [i_4 + 3] [i_4])))) >> (((343872306U) - (343872292U)))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_5 = 1; i_5 < 18; i_5 += 1) 
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)511)) ? (((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))) : (4468310450657876735ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                var_14 = (i_4 % 2 == 0) ? (((/* implicit */int) ((((343872306U) >> (((((/* implicit */int) arr_13 [i_4] [i_4 + 2])) - (8258))))) << (((((/* implicit */int) arr_13 [i_4] [i_4])) - (8257)))))) : (((/* implicit */int) ((((343872306U) >> (((((((/* implicit */int) arr_13 [i_4] [i_4 + 2])) - (8258))) - (21787))))) << (((((((/* implicit */int) arr_13 [i_4] [i_4])) - (8257))) - (21778))))));
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_5] [i_5 + 2] [i_5 + 1])) ? (var_9) : (((/* implicit */int) var_0))));
            }
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
            {
                var_16 = ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_16 [i_4 + 1] [(short)8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) : (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_4 + 1])) ? (86053946U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4 + 2] [i_4 + 2])))))));
                var_17 = ((/* implicit */unsigned int) ((arr_4 [i_6] [(_Bool)1] [i_6]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62)))));
                arr_21 [(unsigned char)14] [(short)8] [i_4] = ((/* implicit */int) ((unsigned short) var_3));
            }
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_6 [i_4] [i_7]) : (var_7)))) ? (((/* implicit */int) arr_20 [i_0] [i_4] [i_4 + 3] [i_0])) : (((/* implicit */int) ((_Bool) arr_23 [i_0] [i_4 + 1] [i_7] [i_7]))))), (((/* implicit */int) ((((/* implicit */int) ((var_3) >= (((/* implicit */long long int) ((/* implicit */int) var_5)))))) <= (((/* implicit */int) var_4))))))))));
                arr_26 [i_0] |= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_8 [i_0] [i_4 + 3])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (4294967287U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))));
            }
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(59822534)))) ? (((/* implicit */int) arr_25 [i_4 + 1])) : (((/* implicit */int) arr_11 [i_0]))))) ? (((/* implicit */int) arr_19 [i_4 - 1] [i_4 + 3] [i_4 - 1] [i_4 - 1])) : (((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(short)0] [i_4])) || (((/* implicit */_Bool) arr_17 [11U] [i_4] [i_0] [i_4]))))) / (((/* implicit */int) arr_16 [i_0] [i_0]))))));
        }
        var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_25 [i_0])) : (((/* implicit */int) var_4)))) % (((/* implicit */int) var_0))))), (arr_4 [i_0] [i_0] [(unsigned short)15])));
    }
    /* vectorizable */
    for (signed char i_8 = 1; i_8 < 16; i_8 += 2) 
    {
        arr_29 [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) 235924455U))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_13 [12LL] [i_8 + 1]))));
        var_21 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) arr_22 [2ULL] [i_8 - 1] [i_8] [i_8 + 1]))));
    }
}

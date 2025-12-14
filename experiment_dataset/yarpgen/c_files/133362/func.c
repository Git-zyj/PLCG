/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133362
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
    var_10 -= ((/* implicit */unsigned int) var_7);
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(var_6))), (((/* implicit */long long int) (signed char)103))))) ? ((-(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) 1995900679)))) > (var_6))))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
        {
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (short)9395))) ? (((((/* implicit */int) var_2)) >> (((var_4) + (1268335500))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
            var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1104039568427152507ULL)) ? (-1177212565) : (((/* implicit */int) ((short) var_7)))))) + (arr_0 [i_1]))))));
            var_13 ^= ((/* implicit */unsigned long long int) ((int) arr_4 [i_1] [(signed char)8]));
        }
        for (int i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned long long int) ((unsigned int) (-(6459696627172097826LL))));
            /* LoopSeq 3 */
            for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max(((unsigned short)60273), (((/* implicit */unsigned short) var_3)))), (((unsigned short) arr_5 [i_2] [i_3]))))) ? (arr_0 [i_2]) : (arr_12 [i_0] [i_2] [i_3] [(_Bool)1])));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned short) (-(1254296826)));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-9395))) : (var_7))) ^ (arr_10 [(signed char)12] [i_4])))) ? ((~(arr_8 [i_4] [i_2] [i_0]))) : (((/* implicit */unsigned long long int) 4284003947U))));
                    var_18 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((signed char) (unsigned short)37220))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [12LL]))))), (var_7)))));
                }
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */long long int) arr_3 [i_0]);
                    var_20 |= ((((((/* implicit */_Bool) arr_10 [i_2] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : ((+(2970480570934277101ULL))))) & (((/* implicit */unsigned long long int) var_8)));
                }
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [(signed char)8])) < (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0])) || (((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_3)))))))));
            }
            for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 3) 
            {
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_11 [i_2] [i_2] [i_2]) * (((/* implicit */long long int) ((/* implicit */int) var_1)))))) && (((/* implicit */_Bool) ((-6190502954427338279LL) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))))))) == (((((/* implicit */_Bool) arr_13 [i_0])) ? (arr_18 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                arr_21 [(short)6] [i_0] [i_6 - 1] = ((/* implicit */int) var_0);
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    for (unsigned short i_8 = 1; i_8 < 20; i_8 += 2) 
                    {
                        {
                            var_23 = arr_15 [i_0] [i_2] [2U] [i_7] [i_7] [i_8 + 1];
                            arr_28 [i_0] [i_0] [i_0] [13] [i_8 + 1] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-40)))))));
                        }
                    } 
                } 
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_12 [i_0] [i_2] [i_2] [i_2]))));
                var_25 = (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)28315)) || (((/* implicit */_Bool) arr_18 [17])))))));
            }
            var_26 -= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max(((short)-23175), ((short)21169)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_2]))))))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 21; i_10 += 4) /* same iter space */
        {
            arr_36 [i_0] [i_10] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (3952222471U)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_9))))) : (arr_9 [i_0] [i_10])));
            /* LoopSeq 1 */
            for (unsigned short i_11 = 3; i_11 < 20; i_11 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 3; i_12 < 20; i_12 += 3) 
                {
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_12 - 3] [i_12] [(_Bool)1] [i_12 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-6602)))))) : (4176114646U)));
                    arr_42 [i_0] = ((/* implicit */signed char) var_0);
                    arr_43 [i_0] [i_10] [i_11] [(short)5] = ((/* implicit */_Bool) arr_10 [i_0] [i_0]);
                }
                arr_44 [i_0] [(_Bool)1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_37 [i_0] [19LL] [11]))))) ? (((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [0U] [i_0])) : (((/* implicit */int) arr_13 [i_0]))));
            }
            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (~(arr_22 [i_0] [i_10] [i_0] [i_10] [i_0]))))));
            var_29 -= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-5))) : (arr_19 [i_0] [14LL] [i_0]))));
        }
        arr_45 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned short)65510)), (((unsigned int) var_3))));
    }
    /* vectorizable */
    for (unsigned int i_13 = 0; i_13 < 10; i_13 += 2) 
    {
        arr_50 [i_13] &= ((/* implicit */short) (+(var_6)));
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_13] [10LL] [i_13])) ? (arr_6 [i_13] [i_13] [i_13]) : (arr_6 [i_13] [i_13] [i_13])));
    }
}

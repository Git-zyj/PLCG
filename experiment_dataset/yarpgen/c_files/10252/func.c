/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10252
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
    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (var_9) : (-723609662))) : ((-(((/* implicit */int) (unsigned char)233)))))) | (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    arr_6 [i_0 - 2] = ((/* implicit */unsigned int) min((max(((~(-723609658))), ((((_Bool)0) ? (-706617313) : (((/* implicit */int) var_0)))))), (((/* implicit */int) arr_0 [i_0] [i_0]))));
                    var_14 = ((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) arr_4 [i_0 + 2])))));
                    arr_7 [i_0] = ((/* implicit */long long int) (-(max((((/* implicit */int) (!(((/* implicit */_Bool) 706617313))))), (max((-834033498), (((/* implicit */int) (short)3372))))))));
                }
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        var_15 += ((/* implicit */signed char) min((var_0), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)54547)) <= (((/* implicit */int) (unsigned char)22))))) <= (min((320557173), (((/* implicit */int) arr_0 [i_0] [5])))))))));
                        arr_13 [2ULL] [i_3] [2ULL] [(short)10] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_3] [i_3] [i_0 + 2])) ? (7) : (((/* implicit */int) var_7))))), (((long long int) arr_9 [i_3] [i_0 - 3]))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            arr_18 [i_0] [(_Bool)1] [i_3] [i_3] [i_5] [i_3] = ((((/* implicit */_Bool) (-(arr_17 [i_0 + 3] [i_0 + 3] [i_3] [i_5] [i_5] [(short)7])))) ? (max((((/* implicit */long long int) var_7)), ((~(var_8))))) : (((min((((/* implicit */long long int) var_10)), (8120222411089241624LL))) & (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0 + 1]))))));
                            arr_19 [i_3] [i_1] [i_1] [0U] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_0)), (var_11))), (((/* implicit */unsigned long long int) max((706617323), (((/* implicit */int) var_1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_6] [i_0 - 1] [i_0 - 1]))))))))) : (((unsigned long long int) (unsigned short)57085))));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (_Bool)0))));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0 + 3] [i_0 + 2] [i_0 + 1] [i_0 + 2])) ? ((-(17069990676172034841ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_14 [i_0 + 2] [i_1] [i_0 + 2] [i_7]))))))));
                            var_18 *= ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_5 [i_0] [(signed char)21] [i_7])))));
                        }
                        var_19 |= ((/* implicit */_Bool) max((((/* implicit */unsigned char) ((signed char) (short)12761))), (arr_16 [i_0 - 1] [i_1] [i_3])));
                        arr_22 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_7)) << (((((arr_20 [i_0] [i_0] [i_1] [i_0] [0U]) + (1482991366))) - (14)))));
                        arr_23 [i_0 + 1] [i_0 + 1] [i_3] [i_3] [i_5] [i_5] = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) arr_3 [i_5] [i_3] [i_1])) ? (((/* implicit */int) arr_12 [(signed char)18] [i_1] [i_3] [(_Bool)1])) : (((/* implicit */int) arr_21 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0]))))))));
                        arr_24 [i_0] [(unsigned char)13] [(short)3] [i_3] [(signed char)3] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_0] [i_0])), ((+((-(((/* implicit */int) var_0))))))));
                    }
                    var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 706617323)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)-39))))))) >= (min((max((var_4), (((/* implicit */unsigned long long int) arr_1 [0U] [i_3])))), (((/* implicit */unsigned long long int) ((int) (unsigned short)8450)))))));
                    var_21 *= ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) 16678127665522189203ULL)))), ((!(((/* implicit */_Bool) arr_16 [i_0 - 2] [(signed char)17] [(signed char)17]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -644820141))))));
                    var_22 = ((/* implicit */signed char) arr_4 [i_3]);
                }
                arr_25 [i_0] [(signed char)10] [i_0 - 3] = ((/* implicit */int) ((signed char) (-(((((/* implicit */_Bool) -320557174)) ? (1909880752U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))))))));
            }
        } 
    } 
}

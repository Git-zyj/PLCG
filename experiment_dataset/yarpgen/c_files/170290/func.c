/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170290
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_1)) : (var_9)))))));
    var_11 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_12 -= ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */short) ((unsigned long long int) ((-518035477) / (((/* implicit */int) (unsigned short)5097)))));
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0] [i_0])) == (((/* implicit */int) arr_3 [i_0] [i_0]))));
        var_13 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_1 [i_0])));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            arr_10 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))));
            /* LoopSeq 3 */
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                arr_13 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)227))))) ? (var_6) : (((((/* implicit */_Bool) arr_12 [i_3] [i_2] [i_1])) ? (14063302546348163696ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [14])))))));
                /* LoopSeq 4 */
                for (unsigned short i_4 = 1; i_4 < 23; i_4 += 4) 
                {
                    arr_18 [i_1] [i_3] [i_2] [i_1] = ((/* implicit */long long int) (unsigned char)214);
                    arr_19 [i_1] [i_2] [i_3] [i_4 + 1] [i_4 + 1] = ((/* implicit */int) ((((arr_12 [i_4 - 1] [i_4 - 1] [i_4 - 1]) | (((/* implicit */unsigned long long int) arr_0 [i_4 - 1])))) | (((/* implicit */unsigned long long int) arr_2 [i_4 - 1] [i_4 - 1]))));
                }
                for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    arr_24 [(unsigned short)16] [(unsigned short)16] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1] [i_1])))))));
                    arr_25 [i_1] = ((/* implicit */long long int) (~(arr_2 [i_5] [i_3])));
                }
                for (int i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
                {
                    var_14 -= ((/* implicit */unsigned char) (+(3957791338U)));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (((+(arr_23 [i_1]))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1] [(unsigned short)1] [i_3] [i_3] [(unsigned short)1])) ? (3093231127U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-4089)))))))))));
                        arr_31 [i_6] [i_6] [i_6] [i_2] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)229)) || (((/* implicit */_Bool) arr_2 [i_1] [i_2])))))));
                        arr_32 [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_15 [i_1] [i_1] [i_1] [i_1]) + (arr_15 [i_7] [7ULL] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1])))) : (((var_0) * (((/* implicit */unsigned long long int) 130560U))))));
                        arr_33 [i_6] [i_2] [i_3] [i_2] [i_6] = ((/* implicit */unsigned int) arr_29 [i_1] [i_1] [i_3] [i_3] [i_1]);
                    }
                }
                for (int i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_9 = 1; i_9 < 23; i_9 += 4) 
                    {
                        arr_38 [i_1] [i_2] [i_8] [i_8] [i_9 + 1] = ((/* implicit */unsigned long long int) 3957791343U);
                        arr_39 [i_1] [i_1] [i_1] [i_8] [i_8] [i_9 + 1] [i_9 + 1] = arr_20 [i_9 - 1] [i_9] [i_9] [i_9 - 1] [i_9] [i_2];
                        arr_40 [3] [i_8] [i_8] [4] = ((/* implicit */int) 9ULL);
                    }
                    arr_41 [i_1] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((unsigned short) ((arr_7 [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
                    arr_42 [i_8] = ((/* implicit */short) arr_27 [i_2] [i_2] [i_2] [(unsigned char)1]);
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 3; i_10 < 22; i_10 += 1) 
                {
                    var_16 ^= ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
                    arr_46 [i_10] = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_3]);
                    arr_47 [i_10] [i_10] [i_10] [i_10] [(short)6] = ((/* implicit */unsigned short) 3093231117U);
                }
                var_17 = ((/* implicit */long long int) ((int) arr_1 [i_1]));
                arr_48 [i_3] [7] [i_2] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (337175955U) : (arr_2 [i_1] [i_1]))))));
            }
            for (int i_11 = 0; i_11 < 24; i_11 += 2) 
            {
                var_18 = ((/* implicit */int) 7853497660742945886LL);
                var_19 *= ((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_3)))));
                arr_51 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) 337175965U);
            }
            for (int i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                arr_54 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_20 [i_1] [i_1] [i_12] [i_1] [i_1] [i_1]);
                arr_55 [i_12] [i_12] [4] [i_1] = ((((/* implicit */_Bool) arr_37 [i_12] [i_2])) ? (((((/* implicit */_Bool) arr_44 [i_2] [i_2] [i_12] [i_12] [22LL])) ? (var_4) : (((/* implicit */unsigned long long int) 1201736178U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1201736151U)) && (((/* implicit */_Bool) (unsigned char)201)))))));
                arr_56 [i_1] [23U] = ((/* implicit */int) (unsigned short)65535);
            }
            var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) -557883062)) ? (arr_50 [i_1] [i_2]) : (((/* implicit */unsigned long long int) arr_17 [i_2] [i_2] [i_1] [i_1] [i_1]))));
            var_21 ^= ((/* implicit */unsigned long long int) 1335041030);
            arr_57 [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        /* LoopSeq 2 */
        for (unsigned char i_13 = 3; i_13 < 23; i_13 += 1) 
        {
            arr_61 [11ULL] [i_13] [i_13] = ((/* implicit */_Bool) ((unsigned short) arr_6 [i_13 + 1] [i_13 - 3]));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_1] [14LL] [i_13 - 3])) ? (1201736146U) : (((/* implicit */unsigned int) -557883061))))) : (((((/* implicit */_Bool) var_3)) ? (arr_21 [19ULL] [2LL] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [14ULL] [i_13])))))));
            arr_62 [4LL] [4LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
        }
        for (unsigned char i_14 = 0; i_14 < 24; i_14 += 3) 
        {
            arr_67 [(unsigned char)18] |= ((((/* implicit */int) ((arr_65 [i_1] [i_14] [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4884)))))) % (((/* implicit */int) ((unsigned char) 2667619039U))));
            arr_68 [i_1] [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_43 [i_1] [i_1] [i_1] [i_1])) ? (((unsigned long long int) arr_15 [(unsigned char)21] [i_14] [i_14] [i_14])) : (((/* implicit */unsigned long long int) arr_20 [i_1] [i_14] [i_1] [i_14] [i_14] [i_1]))));
        }
    }
}

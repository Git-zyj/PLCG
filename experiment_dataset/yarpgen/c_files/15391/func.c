/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15391
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (var_10)))) ? (min((((/* implicit */unsigned long long int) (signed char)0)), (var_11))) : (((/* implicit */unsigned long long int) max((-1695198293), (((/* implicit */int) var_10)))))))))));
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */short) (unsigned char)255)), ((short)-13778)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) -1695198301);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) : ((-(((/* implicit */int) var_9)))))))));
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((unsigned int) (short)-11029)) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_3]))))))));
                        arr_11 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_0] [i_1] [i_0])) || (((/* implicit */_Bool) arr_8 [13ULL] [i_1] [i_1] [i_3] [i_1]))));
                        arr_12 [i_0] [i_0] [i_2 + 1] [i_3] [11ULL] [i_1] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) arr_0 [i_2 - 1] [i_1])) * (((/* implicit */int) var_13)))));
                        var_22 *= ((/* implicit */unsigned int) arr_6 [i_1] [i_2 - 1] [(unsigned short)10]);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 2; i_5 < 13; i_5 += 3) 
                {
                    for (unsigned int i_6 = 3; i_6 < 13; i_6 += 1) 
                    {
                        {
                            arr_21 [i_1] [11U] [4ULL] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_1] [i_5 + 2] [i_6 - 2])) + (arr_18 [i_0] [i_6 - 2] [i_4] [i_5] [i_6 - 2] [i_5 + 1])));
                            var_23 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_16 [10ULL] [i_1] [i_4] [i_5 + 1])) || (((/* implicit */_Bool) arr_1 [i_1] [i_5 - 1])))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) (short)-15736))));
                            arr_22 [i_0] [i_0] [i_4] &= ((/* implicit */unsigned long long int) arr_7 [i_0] [(unsigned char)3] [14ULL] [7U]);
                            var_24 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) 9687369055734426669ULL)));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_7 = 1; i_7 < 14; i_7 += 1) 
                {
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((unsigned long long int) 4U)))));
                    arr_25 [i_1] = ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_7 + 1] [i_7 + 1])) ? (arr_5 [i_1] [i_4] [i_7 - 1] [i_7 + 1]) : (arr_5 [(unsigned char)2] [i_7 + 1] [i_7 + 1] [(unsigned char)2]));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_7 - 1] [i_7] [5U] [i_7 - 1])) ? (((/* implicit */int) (short)11029)) : (((/* implicit */int) (short)-13775))));
                    var_27 = ((3152017525282927630ULL) * (11054471536182396851ULL));
                }
                for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    arr_30 [i_0] [i_1] [i_1] = ((/* implicit */short) arr_2 [0ULL]);
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_4] [i_8] [i_8])) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) arr_27 [i_0] [i_1] [i_4] [i_8] [8]))));
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (signed char)-4))));
                }
            }
            for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 4) 
            {
                arr_33 [i_1] [i_1] = ((/* implicit */unsigned char) var_8);
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) arr_4 [i_1] [5ULL] [11U]);
                            arr_39 [i_10] [i_1] [i_1] [i_0] [i_11] [i_0] = ((/* implicit */unsigned long long int) (+(arr_19 [i_1] [i_1] [i_9] [i_11] [i_11] [i_11] [i_11])));
                            arr_40 [14U] [i_9] [i_1] [i_9] [i_9] = ((/* implicit */int) (+(var_14)));
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) 3929129031U))));
                        }
                    } 
                } 
            }
        }
    }
    for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 2) 
    {
        arr_45 [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_36 [(signed char)1] [i_12] [i_12] [(unsigned char)4] [i_12] [(short)7]))) ? (min((((unsigned long long int) (short)8192)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_12] [i_12]))) & (1458079620160169912ULL))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)2))))), (((((/* implicit */int) var_2)) & (((/* implicit */int) var_1)))))))));
        var_32 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_12] [i_12] [i_12] [i_12]))))), (arr_20 [i_12] [i_12] [i_12] [i_12]))) > (min(((~(15752433820734305903ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65519)) % (((/* implicit */int) var_15)))))))));
        var_33 += ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)33779));
        /* LoopNest 2 */
        for (unsigned int i_13 = 2; i_13 < 11; i_13 += 1) 
        {
            for (int i_14 = 0; i_14 < 13; i_14 += 3) 
            {
                {
                    arr_52 [i_12] [i_13] [i_13] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) ((unsigned long long int) var_1))))));
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1765695917)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_13 - 1] [i_13] [i_13 + 1] [i_13]))) : (15294726548426623992ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16988664453549381708ULL)) ? (arr_35 [i_13 + 1] [i_13 + 1] [i_13] [i_13 + 1]) : (arr_35 [(unsigned char)12] [i_13 - 1] [i_13 + 1] [i_13 - 2])))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_15)) * (((/* implicit */int) arr_38 [i_12] [i_13 + 1] [i_14] [7ULL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 1458079620160169908ULL)))) : (min((var_8), (((/* implicit */unsigned long long int) var_5))))))));
                }
            } 
        } 
    }
    var_35 = var_7;
    var_36 = min((((/* implicit */unsigned long long int) (unsigned short)31756)), (15294726548426623972ULL));
}

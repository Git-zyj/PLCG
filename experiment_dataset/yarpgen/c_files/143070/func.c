/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143070
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_4))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((arr_2 [i_0]) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) (unsigned char)220))));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_3))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_8 [i_0 + 1] [i_0] = ((/* implicit */short) ((var_7) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) : (((/* implicit */int) (signed char)(-127 - 1)))));
            var_14 = ((/* implicit */short) (unsigned char)200);
            arr_9 [(unsigned short)20] |= ((/* implicit */short) ((unsigned int) (_Bool)1));
        }
        var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((_Bool) arr_4 [i_0] [i_0] [(signed char)14]))) : (((((/* implicit */_Bool) arr_5 [(unsigned short)0] [i_0 - 1] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [10ULL]))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (short i_4 = 1; i_4 < 11; i_4 += 2) 
            {
                {
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (unsigned char)92))))) : (max((((/* implicit */long long int) (-(((/* implicit */int) var_7))))), (var_11))))))));
                    var_17 = (unsigned char)110;
                }
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_5 = 2; i_5 < 12; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 1; i_6 < 11; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_26 [i_6] [i_5] [i_5] [i_6] [i_5] [i_2] = ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) arr_13 [i_2])))));
                        /* LoopSeq 2 */
                        for (long long int i_8 = 1; i_8 < 11; i_8 += 3) 
                        {
                            var_18 |= ((/* implicit */_Bool) max((max((var_10), (arr_11 [i_8 + 1] [(short)9]))), (arr_11 [i_7] [i_8])));
                            arr_30 [i_5] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10485))));
                            arr_31 [i_5] [i_5] [(unsigned short)8] [i_5] [i_5] [i_2 - 2] = var_7;
                            var_19 &= var_6;
                        }
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            arr_35 [i_6] [i_5] [i_9] = ((/* implicit */unsigned int) ((5489438647218611829LL) < (((/* implicit */long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) (_Bool)0)))))));
                            var_20 = ((/* implicit */int) ((_Bool) (signed char)52));
                            var_21 = ((/* implicit */int) -6970825753978330696LL);
                            arr_36 [i_2 - 3] [i_5] [i_7] [i_9] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_5 - 2] [(unsigned short)3] [(unsigned short)3])) ? (((/* implicit */int) arr_7 [i_5 - 2] [i_7])) : (((/* implicit */int) arr_7 [i_5 - 2] [i_6])))));
                        }
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_10 = 0; i_10 < 13; i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    for (unsigned short i_12 = 1; i_12 < 9; i_12 += 3) 
                    {
                        {
                            arr_43 [i_2] [i_2] [i_2] [i_5] = ((/* implicit */_Bool) (signed char)-1);
                            arr_44 [i_5] [i_5] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_10] [i_10] [i_10]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) (signed char)(-127 - 1)))), (arr_38 [i_10] [i_10] [i_12]))))) : (max((((/* implicit */unsigned int) (unsigned char)110)), ((+(3910433176U))))));
                            var_22 = ((/* implicit */short) (((~(min((126721684), (((/* implicit */int) var_0)))))) | (((/* implicit */int) ((_Bool) arr_12 [i_11] [i_12])))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_39 [i_2 + 2] [i_2 + 2] [(unsigned short)12] [i_2 - 3])))))));
                arr_45 [i_5] = ((/* implicit */short) (-((-(((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_6)))))))));
            }
            /* vectorizable */
            for (unsigned short i_13 = 0; i_13 < 13; i_13 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */short) (unsigned short)35395);
                arr_50 [(signed char)12] [(signed char)12] |= ((/* implicit */unsigned short) (unsigned char)156);
            }
        }
        for (unsigned short i_14 = 4; i_14 < 9; i_14 += 2) 
        {
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) arr_20 [i_2 + 1] [i_2 + 1])))))));
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) min(((-(((/* implicit */int) arr_24 [i_14 - 2] [i_14] [i_14] [i_2 - 1])))), ((+(((/* implicit */int) arr_11 [(short)10] [i_14]))))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-75))) : (arr_46 [i_14 + 1] [i_14] [i_2])))));
        }
        /* vectorizable */
        for (short i_15 = 1; i_15 < 10; i_15 += 3) 
        {
            var_27 = ((/* implicit */unsigned int) var_0);
            arr_56 [i_2 + 2] [i_2 - 1] [i_15 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [0LL] [i_15] [i_15 + 1]))));
        }
    }
}

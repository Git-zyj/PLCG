/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119155
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) var_4);
        arr_4 [(unsigned char)16] = (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_1] [i_1]))))) ? (((/* implicit */int) ((unsigned char) var_7))) : (((/* implicit */int) (!(arr_6 [i_1] [i_1])))))));
        arr_8 [(signed char)4] = ((/* implicit */unsigned short) min((((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_1]))))), (((signed char) arr_0 [i_1] [i_1]))))), ((-(((/* implicit */int) arr_1 [(signed char)6]))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
    {
        arr_13 [i_2] [6U] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (signed char)72))))));
        arr_14 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_2] [i_2]))))) ? (var_9) : (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59752))) : (var_14))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 2; i_4 < 11; i_4 += 3) 
        {
            arr_20 [i_3] = ((/* implicit */unsigned short) ((signed char) arr_17 [i_3] [i_4 + 1]));
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_23 [8] [i_3] [i_4 - 2] [i_3] = ((/* implicit */int) ((unsigned char) ((_Bool) var_6)));
                arr_24 [i_3] [i_3] [(unsigned short)10] = ((/* implicit */signed char) var_2);
                arr_25 [(_Bool)1] [i_4 - 1] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_1 [(signed char)14]))));
            }
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        {
                            arr_35 [i_3] [i_4] [i_6] [i_8] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_19 [i_8] [i_7] [i_8]))) * (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) var_8))))));
                            arr_36 [i_6] [i_4] [i_6] [i_3] [i_8] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_19 [i_8] [i_4] [i_6])) >= (arr_10 [(_Bool)1])))) / (var_10)));
                            arr_37 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_3] [i_3]))));
                            arr_38 [i_8] [i_4] [i_4] [i_4 + 1] [i_4 + 1] = ((/* implicit */unsigned short) (-(arr_12 [i_4 - 1] [i_4 - 1])));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned char i_9 = 1; i_9 < 11; i_9 += 4) /* same iter space */
        {
            arr_41 [i_3] = ((/* implicit */unsigned long long int) (~(-167779815)));
            arr_42 [(short)4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_14))))));
        }
        for (unsigned char i_10 = 1; i_10 < 11; i_10 += 4) /* same iter space */
        {
            arr_45 [8U] = ((/* implicit */unsigned short) var_1);
            arr_46 [8ULL] [(signed char)10] = ((/* implicit */unsigned short) (-(arr_44 [4ULL] [i_10 - 1] [(_Bool)1])));
            arr_47 [i_3] [i_3] = ((/* implicit */short) ((signed char) (~(((/* implicit */int) var_8)))));
        }
    }
    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 3) 
    {
        arr_51 [i_11] = ((/* implicit */unsigned char) var_8);
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 3) 
        {
            for (signed char i_13 = 1; i_13 < 22; i_13 += 4) 
            {
                {
                    arr_56 [i_13 + 1] [i_12] [i_12] [i_11] = ((/* implicit */unsigned int) arr_52 [i_11] [i_11] [(signed char)17]);
                    arr_57 [i_11] [i_11] [i_11] = ((/* implicit */signed char) min((((/* implicit */unsigned short) min((min((arr_48 [(unsigned char)10]), ((unsigned char)147))), (((/* implicit */unsigned char) arr_50 [i_13 + 2]))))), (arr_49 [i_12] [i_11])));
                }
            } 
        } 
        arr_58 [(unsigned short)3] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_53 [i_11])), (((((((/* implicit */int) arr_54 [i_11])) >= (((/* implicit */int) arr_52 [i_11] [i_11] [i_11])))) ? (min((var_14), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_54 [i_11])))))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101846
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 3) /* same iter space */
    {
        var_11 = ((int) 2328089660U);
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) max((arr_3 [i_0] [i_0]), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1]))) > (((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_0])) ? (1966877617U) : (3647705171U)))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) arr_3 [i_1] [i_0]);
            var_13 = ((/* implicit */unsigned long long int) arr_4 [i_0]);
        }
    }
    for (unsigned char i_2 = 2; i_2 < 9; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] [i_2] = -2147483642;
        arr_10 [i_2] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) (unsigned char)72)))), (((/* implicit */int) min((arr_8 [i_2 - 1]), (arr_8 [i_2 + 1]))))));
        var_14 = ((/* implicit */unsigned char) (!(((max((((/* implicit */unsigned long long int) -1774420697)), (18446744073709551599ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3)))))));
    }
    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)167))));
                        var_16 = (signed char)-78;
                    }
                } 
            } 
            var_17 = var_0;
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    {
                        var_18 = ((/* implicit */short) arr_23 [i_8]);
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_9)), ((unsigned char)96)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (20U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10930)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_3] [i_4] [i_8])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_9)))))) + ((-(arr_21 [i_4] [i_7] [i_8])))))));
                        var_20 = ((/* implicit */unsigned short) (+(var_0)));
                        var_21 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2536439101U))))), (arr_15 [i_8] [i_4]))), (arr_21 [i_8] [i_8] [i_8])));
                        arr_25 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned char)88), (min((arr_17 [i_3] [i_4] [i_4]), (((/* implicit */unsigned char) var_9))))))) ? ((~(((/* implicit */int) ((var_4) == (var_0)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)234)))))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) 
            {
                for (int i_11 = 1; i_11 < 11; i_11 += 4) 
                {
                    {
                        arr_34 [i_10] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_2)) % (((/* implicit */int) arr_27 [i_11 + 1] [i_10] [i_9 + 1])))) | ((~(arr_24 [i_11 - 1] [i_11 + 1] [i_9] [i_9 + 1])))));
                        /* LoopSeq 3 */
                        for (short i_12 = 2; i_12 < 8; i_12 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) var_9)))));
                            arr_39 [0] [i_3] [0] = ((/* implicit */unsigned long long int) var_6);
                            arr_40 [i_3] [i_3] = ((arr_21 [i_3] [i_9 + 1] [(unsigned char)5]) - (((/* implicit */unsigned long long int) 1966877595U)));
                            var_23 ^= ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) >= (((arr_28 [i_3] [10U] [10U]) ? (var_4) : (((/* implicit */unsigned long long int) 0U)))))) ? (min((((/* implicit */unsigned int) arr_24 [i_3] [i_9] [i_10] [i_11])), ((-(arr_22 [i_3] [i_9] [i_10] [i_9]))))) : (((/* implicit */unsigned int) ((int) (~(((/* implicit */int) (unsigned char)151)))))));
                            var_24 = var_7;
                        }
                        for (short i_13 = 2; i_13 < 8; i_13 += 3) /* same iter space */
                        {
                            arr_43 [i_3] [i_10] [i_11] [i_3] = ((/* implicit */int) var_0);
                            arr_44 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) (((+(arr_41 [i_3] [i_11 - 1] [i_13]))) | (((/* implicit */unsigned long long int) (~((-2147483647 - 1))))))));
                            var_25 = (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-67))) | (18446744073709551607ULL))));
                        }
                        for (short i_14 = 2; i_14 < 8; i_14 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) 2147483642))));
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((int) max((((/* implicit */int) (short)14184)), (((((/* implicit */_Bool) arr_35 [i_11] [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */int) arr_18 [i_11] [i_14])) : (var_8)))))))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 12; i_15 += 1) 
                        {
                            arr_49 [i_3] [(unsigned char)2] [i_10] [i_11] [i_15] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_46 [i_9] [i_9 + 1] [i_9 + 1] [i_9] [i_9] [i_9] [i_9 + 1]))));
                            arr_50 [i_3] [i_9] [i_9] [i_3] [i_15] = ((/* implicit */unsigned long long int) (short)12591);
                        }
                        arr_51 [i_9 + 1] [i_3] [i_11] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_32 [i_3] [i_9 + 1] [i_9] [i_9] [i_11 + 1])) : (((/* implicit */int) arr_32 [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_11 + 1]))))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) 0ULL))));
    }
    var_29 = ((/* implicit */unsigned char) max((2097088U), (((/* implicit */unsigned int) var_2))));
    var_30 = ((/* implicit */int) var_6);
}

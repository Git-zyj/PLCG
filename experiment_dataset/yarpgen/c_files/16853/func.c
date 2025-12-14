/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16853
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (+(var_10))))));
    var_14 ^= ((/* implicit */int) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] = ((/* implicit */unsigned int) var_6);
            var_15 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)115))));
            var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)115))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] &= ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned char)130)))) >= ((+(((/* implicit */int) (unsigned char)120))))));
            var_17 *= 486625161U;
            var_18 |= ((/* implicit */unsigned char) ((signed char) -7468090028003566388LL));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            var_19 = ((/* implicit */unsigned int) var_1);
            var_20 = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0]);
            var_21 = ((/* implicit */long long int) max((var_21), ((+(arr_3 [i_0] [i_0])))));
            /* LoopSeq 1 */
            for (unsigned int i_4 = 2; i_4 < 8; i_4 += 4) 
            {
                var_22 = ((/* implicit */long long int) (((~(7468090028003566392LL))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3725009776U)) && (((/* implicit */_Bool) arr_11 [(unsigned char)3] [5] [7]))))))));
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (-(arr_10 [7LL] [i_4 - 2] [i_4 - 1]))))));
                /* LoopSeq 4 */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    var_24 ^= ((/* implicit */int) var_9);
                    var_25 = ((/* implicit */signed char) ((long long int) (~(var_12))));
                    var_26 &= ((/* implicit */int) (unsigned char)124);
                }
                for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                {
                    var_27 -= ((/* implicit */signed char) (~(arr_16 [i_0] [i_0] [6ULL] [i_6] [i_4 + 2] [i_0])));
                    arr_21 [i_0] [i_6] [i_4] = ((/* implicit */unsigned int) ((long long int) var_5));
                    var_28 = ((/* implicit */signed char) arr_20 [8LL] [i_4 - 1] [8LL] [i_4 - 1] [8LL]);
                }
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
                {
                    arr_24 [i_4] [i_3] [i_7] [i_4] = ((/* implicit */unsigned char) (-(arr_4 [i_4 + 1] [i_4 + 1] [i_4 + 1])));
                    var_29 = ((/* implicit */unsigned long long int) ((arr_15 [(unsigned char)0] [(unsigned char)0] [i_4 + 2] [i_4 - 2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((((/* implicit */int) var_8)) / (((/* implicit */int) var_0)))) : (((/* implicit */int) ((signed char) var_3))))))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    var_31 ^= ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_4 - 2] [(unsigned short)1]))) - (var_6));
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((_Bool) (~(569957525U)))))));
                    var_33 += ((/* implicit */signed char) var_4);
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        arr_32 [i_0] [1] [9ULL] [i_8] [9U] [8LL] = ((/* implicit */unsigned char) ((unsigned int) ((4540790031992522680ULL) - (arr_11 [i_0] [i_4] [i_0]))));
                        arr_33 [i_0] [(signed char)1] |= ((/* implicit */_Bool) ((unsigned long long int) (unsigned char)113));
                        var_34 = ((/* implicit */unsigned int) (-(((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108)))))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */int) arr_18 [4ULL] [i_3] [4ULL]);
                            var_36 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_10 [i_0] [i_0] [i_0]) : (arr_10 [3] [i_10] [i_11])));
                            var_37 += ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)80)))))));
                            var_38 = ((/* implicit */unsigned int) ((int) arr_10 [i_4 - 1] [i_4 - 1] [i_4 - 1]));
                        }
                    } 
                } 
                var_39 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32))) % (((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
            }
            /* LoopSeq 1 */
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) var_5))));
                    var_41 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60079))) >= (arr_17 [i_12 - 1] [i_3] [i_3])));
                    var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)161))) / (arr_43 [i_12 - 1] [i_12 - 1] [2U] [i_12 - 1]))))));
                    var_43 = ((/* implicit */unsigned char) ((long long int) arr_31 [i_0] [i_12 - 1] [i_12 - 1] [i_12 - 1] [(unsigned short)4] [i_0]));
                    var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-55)) + (2147483647))) >> (((((long long int) -2121621892)) + (2121621915LL))))))));
                }
                for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    var_45 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_40 [i_12] [i_3])) / (var_9)));
                    var_46 += ((/* implicit */unsigned short) var_7);
                }
                arr_49 [i_12] = ((/* implicit */signed char) var_12);
            }
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_47 = ((/* implicit */_Bool) min((var_47), (((arr_23 [i_0] [i_15] [i_0] [i_0]) || (((/* implicit */_Bool) arr_37 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))))));
            var_48 = ((/* implicit */int) ((signed char) ((unsigned char) 6951534023319672940LL)));
        }
    }
}

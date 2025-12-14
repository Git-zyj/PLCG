/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180345
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
    var_12 = ((/* implicit */signed char) ((unsigned char) var_6));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) arr_1 [i_0 - 2]);
        arr_2 [i_0] = ((/* implicit */unsigned char) ((_Bool) ((((((/* implicit */int) var_11)) / (((/* implicit */int) var_2)))) / (((/* implicit */int) var_7)))));
        arr_3 [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_5))));
        arr_4 [i_0] = ((/* implicit */short) ((int) var_3));
    }
    for (short i_1 = 1; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))))), (((short) arr_5 [i_1] [i_1]))));
        var_15 -= ((/* implicit */long long int) var_9);
        var_16 = ((/* implicit */long long int) arr_6 [i_1]);
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 3; i_3 < 20; i_3 += 3) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((unsigned int) arr_6 [i_1]));
                    var_18 = ((/* implicit */int) var_4);
                    var_19 *= ((/* implicit */_Bool) max((min((((unsigned int) var_6)), (((/* implicit */unsigned int) ((signed char) arr_6 [10ULL]))))), (((/* implicit */unsigned int) (+(1833211427))))));
                }
            } 
        } 
    }
    for (short i_4 = 1; i_4 < 20; i_4 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */int) ((long long int) ((long long int) var_1)));
        var_21 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), ((-(arr_9 [6LL] [i_4 + 1] [6LL])))));
        arr_15 [i_4] [i_4] = ((/* implicit */_Bool) ((short) ((-1833211427) / (1833211427))));
        arr_16 [(unsigned char)17] |= ((/* implicit */unsigned char) min((arr_6 [14U]), (((unsigned int) min((var_8), (((/* implicit */long long int) (signed char)31)))))));
        /* LoopNest 2 */
        for (signed char i_5 = 2; i_5 < 20; i_5 += 1) 
        {
            for (signed char i_6 = 2; i_6 < 20; i_6 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_2))))))), ((~(((/* implicit */int) ((signed char) arr_17 [i_4] [i_4])))))));
                    var_23 = ((/* implicit */unsigned long long int) var_1);
                    arr_21 [i_4] [i_4] [i_5] [13U] = ((/* implicit */unsigned short) (-(((unsigned int) -8497820373611738094LL))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 2; i_7 < 20; i_7 += 4) 
                    {
                        var_24 -= ((/* implicit */unsigned long long int) var_10);
                        arr_24 [i_5] = ((/* implicit */long long int) (~(1833211427)));
                        var_25 -= ((/* implicit */unsigned int) var_2);
                        arr_25 [i_5] = ((/* implicit */unsigned char) (~((+(((((/* implicit */int) arr_23 [(_Bool)1] [i_5] [i_5] [i_4])) * (((/* implicit */int) var_5))))))));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_8 = 1; i_8 < 19; i_8 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            arr_32 [i_4] [i_5] [i_5] [i_5] [4] [(short)19] = ((/* implicit */long long int) var_2);
                            arr_33 [i_5] [i_9] = ((/* implicit */unsigned char) var_11);
                        }
                        for (unsigned int i_10 = 1; i_10 < 20; i_10 += 2) 
                        {
                            arr_36 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */short) (-(((/* implicit */int) min((arr_11 [i_5]), (arr_11 [i_5]))))));
                            arr_37 [i_4] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) var_1)), (min((((/* implicit */unsigned int) arr_22 [(unsigned short)5] [i_4] [i_6] [(unsigned short)0] [i_4])), (arr_14 [2] [i_8])))))));
                            var_26 = ((/* implicit */signed char) min((((max((((/* implicit */long long int) var_10)), (var_8))) / (((/* implicit */long long int) (~(((/* implicit */int) var_6))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_3)))))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_11 = 3; i_11 < 20; i_11 += 1) 
                        {
                            var_27 -= ((/* implicit */_Bool) (-(((/* implicit */int) var_11))));
                            var_28 = ((/* implicit */unsigned short) ((unsigned long long int) ((var_8) >> (((((/* implicit */int) var_5)) - (155))))));
                        }
                        arr_40 [(unsigned char)4] [i_5] [i_6] [(unsigned char)4] = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) arr_6 [i_5])))));
                        var_29 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned char) arr_20 [i_8] [i_6 + 1] [15LL] [i_4]))), (((unsigned int) ((short) var_9)))));
                    }
                    for (long long int i_12 = 1; i_12 < 19; i_12 += 3) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) var_7)))), (((((/* implicit */int) var_11)) & (arr_27 [(unsigned short)6] [15LL] [i_12 + 3] [(short)13])))));
                        var_31 *= ((short) (!(((/* implicit */_Bool) 3864816584U))));
                        var_32 = ((/* implicit */unsigned char) ((short) (~(((/* implicit */int) (_Bool)0)))));
                    }
                    for (signed char i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        var_33 = var_10;
                        /* LoopSeq 3 */
                        for (int i_14 = 2; i_14 < 21; i_14 += 1) 
                        {
                            var_34 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
                            arr_50 [(_Bool)1] [i_5] [14] [3] [(signed char)20] [i_5] [21LL] = ((/* implicit */short) min((((unsigned int) var_9)), (((unsigned int) (~(((/* implicit */int) var_7)))))));
                        }
                        for (long long int i_15 = 0; i_15 < 22; i_15 += 1) 
                        {
                            var_35 = ((/* implicit */short) arr_41 [i_5] [i_15] [i_13] [(short)9] [(unsigned char)13] [i_5]);
                            var_36 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
                            var_37 *= ((/* implicit */short) var_0);
                        }
                        for (unsigned int i_16 = 1; i_16 < 21; i_16 += 1) 
                        {
                            var_38 = ((short) (!(((/* implicit */_Bool) arr_49 [i_6 - 2] [i_6 - 2] [(signed char)16] [i_5] [(signed char)6] [(_Bool)1]))));
                            var_39 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (((unsigned int) (signed char)6)))));
                        }
                    }
                }
            } 
        } 
    }
    var_40 = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
    var_41 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_2)) + (2147483647))) << (((/* implicit */int) (!((_Bool)1))))));
}

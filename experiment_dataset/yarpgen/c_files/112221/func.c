/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112221
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
    var_10 |= ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned long long int) var_3)))) < (((/* implicit */unsigned long long int) var_8))))) > (((/* implicit */int) var_5))));
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), ((~(var_6)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */int) var_4)))) != (((/* implicit */int) var_1)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) arr_8 [(short)1] [i_1] [(short)5]);
                    var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-1LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)4064)) ^ (((/* implicit */int) (short)-11))))) : (((long long int) (signed char)-119))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)-16384))))) : (((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-120))))) - (max((((/* implicit */long long int) arr_2 [11ULL])), (9223372036854775803LL)))))));
                    var_14 -= ((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) -9223372036854775807LL))), ((~(1466338376)))));
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_6 [i_0] [i_2]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)10546)) && (((/* implicit */_Bool) var_0)))))))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) (short)-23437)))) : (((/* implicit */int) ((short) arr_6 [i_1 - 1] [i_1 - 1])))));
                }
            } 
        } 
        var_16 = ((/* implicit */_Bool) min((var_16), (((((/* implicit */int) var_9)) == (((((((/* implicit */int) (short)-23435)) > (((/* implicit */int) (signed char)-119)))) ? (((/* implicit */int) min((arr_6 [i_0] [i_0]), (((/* implicit */unsigned char) arr_4 [i_0] [i_0]))))) : (((/* implicit */int) ((unsigned short) arr_8 [14LL] [(unsigned char)13] [i_0])))))))));
        arr_9 [i_0] [2U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((short) 8191U)))) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) ((signed char) ((short) (signed char)15))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 16; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                {
                    arr_17 [i_0] [i_3 - 1] [i_3] [(signed char)0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3 + 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_8 [i_3 + 1] [i_3 - 1] [i_0])))));
                    var_17 = ((/* implicit */long long int) arr_6 [i_0] [i_0]);
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)84), (((/* implicit */unsigned char) arr_12 [i_0] [i_3])))))) ^ (var_0))) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (short)14564)) ? (((/* implicit */int) (short)-14575)) : (((/* implicit */int) arr_7 [i_0] [i_3 - 1] [i_4]))))))));
                }
            } 
        } 
    }
    for (int i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1016)) ? (((/* implicit */int) (short)14575)) : (max((((/* implicit */int) arr_7 [i_5] [(short)3] [3])), (var_3)))))) ? ((~(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) arr_4 [(short)13] [(signed char)5])) : (((/* implicit */int) (short)14698))))) ? (((((/* implicit */int) (signed char)105)) + (((/* implicit */int) arr_6 [i_5] [i_5])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_5])))))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-1015)) - (((/* implicit */int) (short)-3859))))) ? (min((((/* implicit */int) (_Bool)1)), (1367215138))) : (((/* implicit */int) var_5))));
        /* LoopSeq 1 */
        for (signed char i_6 = 1; i_6 < 12; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                arr_28 [i_6] = ((/* implicit */unsigned long long int) arr_24 [(_Bool)1] [i_6] [i_7]);
                /* LoopSeq 2 */
                for (signed char i_8 = 1; i_8 < 13; i_8 += 2) 
                {
                    arr_32 [i_8] [i_7] [i_7] [i_7] [i_6] [(_Bool)1] = ((/* implicit */signed char) min((((unsigned long long int) ((((/* implicit */_Bool) arr_31 [1] [12LL] [i_7] [i_5])) ? (((/* implicit */int) arr_23 [i_5] [i_6 - 1] [i_5])) : (((/* implicit */int) arr_12 [(unsigned char)5] [i_6 + 1]))))), (((unsigned long long int) (signed char)84))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)164)) ? (((/* implicit */int) arr_29 [i_8] [i_7] [(unsigned short)2] [i_5])) : (((/* implicit */int) (short)-28947)))))))))))));
                }
                for (unsigned long long int i_9 = 2; i_9 < 11; i_9 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_10 = 1; i_10 < 10; i_10 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) var_7);
                        arr_39 [i_7] [i_6] [i_6] [i_9] [i_10 + 3] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [0ULL] [i_10 + 1])) ? (((/* implicit */int) ((_Bool) arr_35 [(signed char)4] [(signed char)4] [i_10 - 1] [i_9 + 3] [i_7]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-105))) : (0ULL)))) ? (((/* implicit */int) ((_Bool) (signed char)-38))) : (((/* implicit */int) (short)-23437))))));
                        var_23 = ((/* implicit */_Bool) max((var_23), ((!(((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) var_7)))), (((/* implicit */int) arr_24 [i_10 + 1] [i_6 + 1] [i_9 - 1])))))))));
                        arr_40 [(short)3] [i_10] [i_6 + 2] [i_6 - 1] [i_7] [i_9] [i_10] = ((/* implicit */unsigned char) (~((+(((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) arr_14 [i_9] [i_6] [(signed char)5] [i_9])) : (((/* implicit */int) arr_5 [i_5] [i_5] [(short)1]))))))));
                    }
                    for (unsigned long long int i_11 = 1; i_11 < 10; i_11 += 2) /* same iter space */
                    {
                        arr_44 [i_11] [i_9 - 1] [i_6] = ((/* implicit */signed char) arr_14 [i_11] [(_Bool)1] [i_5] [i_5]);
                        arr_45 [i_5] [i_6 - 1] [i_7] [i_6 - 1] [i_6] [i_9] [i_5] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (short)29527)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)10540)))), ((+(2147483647)))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_35 [i_5] [i_6 - 1] [i_9] [(unsigned char)6] [i_11]))) == ((~(((/* implicit */int) (signed char)-94))))));
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 10; i_12 += 2) /* same iter space */
                    {
                        arr_48 [i_5] [i_12 - 1] [4] [i_9 - 1] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [i_9 - 2] [i_9 - 2] [i_9 + 2] [i_9 - 1]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-81)), ((unsigned short)53954)))) : (((/* implicit */int) arr_35 [i_5] [i_5] [i_9] [i_9 + 1] [i_9]))));
                        var_25 = ((/* implicit */short) ((((/* implicit */int) ((signed char) (+(((/* implicit */int) (signed char)-89)))))) != (((/* implicit */int) arr_4 [i_6 + 2] [i_7]))));
                        arr_49 [i_12 + 2] [i_5] [i_7] [i_12] [(signed char)12] [i_5] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_5] [i_5] [i_12 + 3] [i_6 - 1] [i_9 + 2])) ? (arr_46 [i_12 + 1] [i_9 - 2] [i_9 - 1] [i_6 + 2] [(unsigned char)4] [i_6 + 2] [i_6 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)13)))))) ? (((((/* implicit */_Bool) -2147483645)) ? (((/* implicit */int) (short)-23465)) : (((/* implicit */int) (short)-1)))) : (((int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned char)247)))))));
                    }
                    for (int i_13 = 3; i_13 < 10; i_13 += 2) 
                    {
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (+(((unsigned int) ((((/* implicit */_Bool) arr_2 [i_9 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) : (arr_26 [i_5] [i_7] [9] [i_5])))))))));
                        arr_53 [i_7] [(_Bool)1] [(_Bool)1] [i_9 - 2] [i_13] = ((/* implicit */unsigned short) (+(((unsigned int) ((((/* implicit */_Bool) arr_4 [i_5] [i_6 - 1])) ? (((/* implicit */int) arr_18 [i_5] [13U])) : (((/* implicit */int) var_5)))))));
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (~(((/* implicit */int) (short)-24077)))))));
                    }
                    var_28 &= ((/* implicit */short) 6332672965425687861ULL);
                    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_5] [i_9 + 2] [i_7]))) + (0ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) arr_41 [i_6] [(signed char)3])) : (((/* implicit */int) arr_35 [i_5] [i_6 + 2] [i_7] [i_9] [i_9 + 2]))))) ? (((/* implicit */int) ((_Bool) arr_52 [i_5] [i_6] [i_9 + 3] [(_Bool)1] [i_9]))) : ((+(((/* implicit */int) arr_4 [(short)4] [i_6])))))) : (((/* implicit */int) var_1))));
                    arr_54 [0U] [(signed char)13] [(signed char)13] [1ULL] [i_6] = ((/* implicit */unsigned int) 9223372036854775793LL);
                }
            }
            var_30 ^= ((/* implicit */short) (signed char)-27);
        }
    }
}

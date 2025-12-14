/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157077
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_12 &= ((/* implicit */long long int) max(((~(var_11))), ((~(((/* implicit */int) arr_0 [i_0]))))));
        var_13 &= ((/* implicit */unsigned short) var_5);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-21363))));
            arr_9 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) (~(var_9)));
            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */int) arr_6 [(short)10] [i_2])) + (((/* implicit */int) arr_6 [(unsigned char)20] [(unsigned char)20])))))));
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) arr_6 [(signed char)6] [i_2])) : (((((/* implicit */_Bool) arr_2 [(short)18] [(short)18])) ? (((/* implicit */int) arr_8 [i_2] [i_1])) : (((/* implicit */int) var_3)))))))));
        }
        for (short i_3 = 4; i_3 < 20; i_3 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_4 = 1; i_4 < 20; i_4 += 2) 
            {
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_11))) && (((/* implicit */_Bool) var_0))));
                var_18 -= ((/* implicit */signed char) var_2);
                var_19 ^= ((/* implicit */short) ((((/* implicit */int) var_2)) | (((/* implicit */int) arr_4 [i_3]))));
                var_20 = ((/* implicit */unsigned long long int) ((((4063232U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4]))))) && (((((/* implicit */int) var_7)) >= (-1)))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        {
                            var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)42327))))) ? (((/* implicit */int) ((short) 3549647132U))) : (((/* implicit */int) arr_10 [i_6] [i_3] [i_3]))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_14 [i_4 + 2] [i_5] [i_4 + 2] [i_4])) : (((/* implicit */int) arr_16 [i_6] [i_6] [i_4 - 1] [i_3]))));
                            arr_20 [i_1] [i_3] [i_1] [i_1] [i_1] = ((unsigned char) (unsigned char)245);
                        }
                    } 
                } 
            }
            for (int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned int) min((var_23), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) / (2096128U)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) arr_18 [i_1] [i_3 + 2] [0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_5 [i_7])))))));
                var_24 = ((/* implicit */int) (signed char)104);
                /* LoopSeq 2 */
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    var_25 |= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_23 [(unsigned short)14] [(unsigned short)14])) << (((((/* implicit */int) arr_13 [i_8])) - (74))))) > (((/* implicit */int) var_10))));
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (~(arr_25 [16] [16]))))));
                    arr_27 [i_1] = ((/* implicit */short) (-(((/* implicit */int) var_3))));
                    var_27 = ((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1]);
                }
                for (unsigned int i_9 = 1; i_9 < 20; i_9 += 3) 
                {
                    var_28 &= ((/* implicit */unsigned int) arr_24 [11ULL] [i_3]);
                    var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1]))))) || (((/* implicit */_Bool) var_7)))))));
                }
                var_30 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_22 [i_3 - 4] [i_7] [(unsigned short)14]))));
            }
            for (int i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
            {
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_1] [i_1])) != (((arr_28 [i_1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_1] [i_1]))))));
                var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) arr_7 [i_1]))));
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    var_33 += ((/* implicit */signed char) var_0);
                    var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((((int) var_9)) + (2147483647))) << (((((/* implicit */int) var_2)) * (((/* implicit */int) (signed char)22)))))))));
                }
            }
            for (short i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                arr_37 [i_1] = ((/* implicit */unsigned char) ((unsigned int) arr_22 [i_1] [i_3 + 1] [i_1]));
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 19; i_13 += 4) 
                {
                    for (unsigned int i_14 = 0; i_14 < 22; i_14 += 3) 
                    {
                        {
                            var_35 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_1] [i_1] [i_13 + 1] [i_3 - 2] [14U] [i_1])) || (((/* implicit */_Bool) var_6))));
                            var_36 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)4095))))) ? (((((arr_40 [i_1] [i_1] [i_3] [i_12] [i_13] [i_14]) + (9223372036854775807LL))) << (((((-1) + (25))) - (23))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6))))));
                        }
                    } 
                } 
            }
            var_37 += ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
            var_38 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [(short)20] [(short)20])) ? (((/* implicit */int) ((((/* implicit */int) arr_38 [i_3] [i_1] [i_1] [i_1])) < (((/* implicit */int) var_0))))) : (((/* implicit */int) ((-24) == (((/* implicit */int) arr_29 [i_3] [i_1] [i_1] [i_1])))))));
            arr_44 [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)17))))) || (((/* implicit */_Bool) (short)-1))));
            var_39 *= ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)32))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))));
        }
        var_40 = ((/* implicit */_Bool) min((var_40), (arr_3 [i_1])));
        var_41 = ((/* implicit */short) (-(3667813889968662284LL)));
        var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-17)) % (var_11))) ^ (((((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1])) / (((/* implicit */int) var_7)))))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_15 = 0; i_15 < 16; i_15 += 4) 
    {
        var_43 = ((/* implicit */unsigned int) (((+(min((((/* implicit */long long int) var_3)), (var_8))))) ^ (((/* implicit */long long int) ((unsigned int) var_3)))));
        var_44 = (-(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)7))))) ? (((unsigned int) arr_13 [i_15])) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))));
        var_45 ^= ((/* implicit */unsigned char) min((((((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_15] [i_15] [i_15]))))) / (((/* implicit */int) ((((/* implicit */unsigned int) -309525199)) >= (arr_5 [i_15])))))), ((-(((/* implicit */int) arr_31 [i_15] [i_15] [i_15]))))));
    }
    var_46 &= ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_0)));
}

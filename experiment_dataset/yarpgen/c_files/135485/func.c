/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135485
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)41))) >= (2820205381406988203LL))))))) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0ULL))))), (min((((/* implicit */unsigned long long int) (signed char)0)), (var_12)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        arr_3 [(unsigned short)10] [i_0] = arr_1 [(short)16] [i_0 + 1];
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 14; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_1 [i_1 + 1] [i_0 - 1]))));
                    arr_9 [i_1] [i_1 + 1] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                    var_22 &= ((/* implicit */short) (((+(((/* implicit */int) arr_8 [i_2] [i_1 - 3] [i_2])))) == ((~(((/* implicit */int) var_14))))));
                    var_23 = ((/* implicit */unsigned short) (_Bool)1);
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_1] [i_1 - 1] [i_1 + 1])) / (((/* implicit */int) arr_8 [i_1] [i_0] [i_1 - 1]))));
                            var_25 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >> (((arr_0 [i_0 - 1] [i_2]) - (3217768273U)))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_13 [i_3]) >> (((var_16) + (1376126133)))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) var_7)) | (var_16)))));
                            arr_15 [i_1] [i_1] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (signed char)85)))) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) < (arr_0 [i_0] [i_2]))))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)231)) == (((/* implicit */int) (signed char)1))));
                        }
                        var_28 = ((/* implicit */unsigned int) var_19);
                    }
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_16 [0] [(unsigned char)4] [i_0 + 1])), (max((arr_17 [i_1] [i_1] [i_2]), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)34587)) & (((/* implicit */int) (_Bool)1)))))))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) % ((~(((/* implicit */int) (!(((/* implicit */_Bool) 95244379)))))))));
                    }
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 20; i_6 += 2) 
    {
        for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            for (signed char i_8 = 1; i_8 < 16; i_8 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
                        arr_29 [(short)7] [(short)6] = ((/* implicit */signed char) ((long long int) arr_21 [i_6] [i_7]));
                    }
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (short)-1)) | (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) (((~(((/* implicit */int) arr_31 [i_7] [i_7])))) | ((~(((/* implicit */int) arr_27 [i_7] [i_6] [i_7] [i_6]))))))) : (arr_26 [i_10] [i_8] [17LL] [i_6]))))));
                        arr_32 [i_6] [i_6] [i_7] [6LL] [i_8 + 4] [i_6] = ((/* implicit */signed char) (~(((arr_20 [i_8 + 3] [i_8 + 2]) - (arr_20 [i_8 + 4] [i_8 + 2])))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned short) var_8);
                        var_34 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)0)))))) / (max((2137341409969052677ULL), (((/* implicit */unsigned long long int) -95244351))))));
                        arr_36 [(unsigned short)12] [i_7] [(unsigned short)12] [i_11] = (+(((((/* implicit */_Bool) arr_33 [i_6] [i_8 - 1] [8ULL] [(unsigned char)0])) ? (var_1) : (((/* implicit */long long int) arr_33 [i_6] [i_8 - 1] [i_8] [i_11])))));
                        var_35 = ((/* implicit */unsigned long long int) (signed char)62);
                    }
                    for (int i_12 = 2; i_12 < 18; i_12 += 2) 
                    {
                        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) (+(((/* implicit */int) var_5)))))));
                        var_37 = ((/* implicit */long long int) (((((-((+(((/* implicit */int) arr_24 [6] [i_7] [i_7])))))) + (2147483647))) << (((((/* implicit */int) (unsigned short)31)) - (31)))));
                        var_38 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (max((((((/* implicit */int) arr_24 [i_6] [i_6] [i_6])) >> (((((/* implicit */int) var_3)) + (16205))))), ((-(((/* implicit */int) arr_39 [i_7] [i_7]))))))));
                        var_39 = ((/* implicit */unsigned char) var_19);
                    }
                    var_40 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)-21685)))) < ((+(((/* implicit */int) (signed char)80))))));
                }
            } 
        } 
    } 
    var_41 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)29335)) - (29323)))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_10))));
    var_42 = ((/* implicit */long long int) 0);
}

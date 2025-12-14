/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166138
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_10 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */signed char) arr_4 [i_0 + 2] [i_0 + 2])), (arr_1 [i_0])))) + ((+(((/* implicit */int) arr_0 [i_0 + 3]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (2125108966) : (((/* implicit */int) (unsigned short)12039))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_0]))))) : (((-2686641817097024254LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_11 ^= (((~((-(((/* implicit */int) arr_2 [i_4] [i_3])))))) | (((((/* implicit */_Bool) min(((unsigned short)41332), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_6 [9U] [i_1] [i_1]))))) : ((~(((/* implicit */int) arr_3 [i_4] [i_4] [i_4])))))));
                                var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [18LL] [i_3] [i_2] [i_1])) ? (arr_10 [i_4] [6U] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >> ((((~(((/* implicit */int) arr_12 [i_0] [i_3] [i_3 + 3] [i_2] [i_1] [i_0] [i_0])))) + (17)))))) | ((~(arr_7 [i_0 + 3] [i_3 + 2])))));
                            }
                        } 
                    } 
                    arr_14 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */int) (short)29661)) & (-601005805)))));
                }
                /* LoopNest 3 */
                for (short i_5 = 1; i_5 < 18; i_5 += 3) 
                {
                    for (unsigned int i_6 = 2; i_6 < 19; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */int) max(((-(max((((/* implicit */long long int) (_Bool)0)), (4136748289304597882LL))))), (((((((-1LL) % (((/* implicit */long long int) 1247942377U)))) + (9223372036854775807LL))) << (((((var_2) & (((/* implicit */unsigned long long int) var_5)))) - (246192028885525257ULL)))))));
                                arr_24 [i_0] [i_6] [(unsigned char)19] [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((unsigned long long int) var_9)) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)196)))))))), (13447644827318386972ULL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_6);
    /* LoopNest 3 */
    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
    {
        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_15 *= ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)196)) | (((/* implicit */int) arr_1 [i_10]))))) && (((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)1054)))) << ((((+(3606633938U))) - (3606633938U)))))));
                    var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_8]))))) ? (((unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_8]))))) : (var_6)));
                    /* LoopSeq 4 */
                    for (int i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        var_17 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)53512)) ? (((/* implicit */int) (_Bool)1)) : (max((arr_6 [i_8] [3LL] [i_11]), (((/* implicit */int) (unsigned short)36791))))))), (((((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) == (4999099246391164658ULL))) ? (((-6828941011146310114LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_8] [(_Bool)1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_10])) ? (arr_19 [i_10] [i_10]) : (arr_32 [i_11] [i_10] [i_8] [i_9] [i_8]))))))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)62327)) >= (((/* implicit */int) arr_26 [i_8] [i_8]))))) & ((+(((/* implicit */int) arr_26 [i_8] [i_11]))))));
                        arr_36 [i_8] [i_10] = ((min((((-3219349310394457651LL) & (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_10] [i_9] [i_10] [i_9] [i_9] [i_8] [i_10]))))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) max((629876775U), (arr_33 [i_10])))) ? (((/* implicit */int) min((arr_34 [i_9] [i_9] [i_10] [1]), (arr_9 [i_9])))) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_26 [i_10] [i_8]))))))));
                        var_19 = max(((+((~(((/* implicit */int) var_9)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) var_8)) % (arr_17 [i_10]))))))));
                        arr_37 [i_10] [i_10] [i_9] [i_10] = ((/* implicit */unsigned int) arr_15 [i_10] [i_10] [i_10]);
                    }
                    for (long long int i_12 = 2; i_12 < 6; i_12 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) (((-(arr_19 [i_10] [i_10]))) | ((+(arr_22 [i_12 - 2] [i_12 + 2] [i_12 + 1] [i_12] [i_12 - 2])))));
                        var_21 = arr_34 [0] [i_10] [(unsigned short)3] [i_8];
                        var_22 = (~(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_35 [i_10] [i_10])), (arr_13 [i_12 + 2] [i_10] [i_9])))) && (((/* implicit */_Bool) min((629876771U), (((/* implicit */unsigned int) arr_32 [i_12] [i_10] [i_8] [i_8] [i_8])))))))));
                        arr_41 [i_12] [i_12] [i_10] [i_10] [i_9] [i_8] = ((/* implicit */long long int) (_Bool)0);
                    }
                    for (unsigned long long int i_13 = 2; i_13 < 9; i_13 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) 4136748289304597882LL);
                        var_24 -= ((/* implicit */_Bool) ((2321149400U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14)))));
                    }
                    for (long long int i_14 = 4; i_14 < 9; i_14 += 2) 
                    {
                        var_25 ^= ((/* implicit */_Bool) max((((/* implicit */int) ((7189517741645634750LL) == (((/* implicit */long long int) arr_21 [i_14 - 4] [i_14] [i_14 - 2] [i_14] [i_14 - 4]))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_7)), (arr_16 [i_14] [i_9])))) ? (((((/* implicit */int) arr_1 [i_10])) | (((/* implicit */int) arr_4 [i_14] [i_10])))) : (((/* implicit */int) (((_Bool)1) && (arr_4 [i_8] [i_10]))))))));
                        var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((((/* implicit */int) (unsigned short)62318)) == (arr_5 [i_8]))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 8; i_15 += 3) 
                    {
                        for (unsigned int i_16 = 3; i_16 < 9; i_16 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) (+(max((((((/* implicit */long long int) 0U)) - (-4136748289304597882LL))), (((/* implicit */long long int) ((arr_33 [i_10]) % (4294967282U))))))));
                                var_28 = ((/* implicit */short) (~((~(((18446744073709551615ULL) << (((/* implicit */int) (_Bool)1))))))));
                                arr_52 [i_16 - 2] [i_15] [i_10] [i_10] [0] [i_8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(arr_27 [i_15] [i_10] [7ULL])))) ? ((~(18446744073709551609ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_16 - 1] [i_16 - 1]))))) > ((~((-(18023844167740033870ULL)))))));
                                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (((-(arr_32 [i_8] [0LL] [i_10] [i_15] [i_16]))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_15 - 1] [i_8]))))))))));
                                arr_53 [i_10] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_48 [i_16 + 1] [i_16 - 3] [i_16 - 1] [i_16 - 1] [i_16 - 2] [i_15 - 1])), (4069015664692934415ULL))) >= (((/* implicit */unsigned long long int) ((long long int) arr_16 [i_10] [i_10])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

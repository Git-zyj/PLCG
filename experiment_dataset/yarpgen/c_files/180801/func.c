/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180801
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            arr_6 [i_0] [15] = ((/* implicit */unsigned int) ((long long int) arr_1 [i_0]));
            var_20 = ((/* implicit */long long int) max((var_20), (max((var_11), (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_1]))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_3 = 3; i_3 < 20; i_3 += 1) 
                {
                    for (int i_4 = 2; i_4 < 20; i_4 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */int) ((3048903878U) < (3048903878U)));
                            arr_14 [i_2] [i_1 - 2] [i_2] [i_1 - 2] [20] [i_3] [i_4 - 1] = ((/* implicit */long long int) arr_4 [i_0] [(short)12] [i_0]);
                            var_22 = ((/* implicit */int) 3048903885U);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        {
                            arr_21 [i_6] [i_6] |= ((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) var_17)) : (303411023080639985LL));
                            var_23 = arr_16 [i_0] [9];
                            arr_22 [i_0] [i_2] [4LL] [i_5] [i_6] = ((((/* implicit */_Bool) arr_17 [i_1 - 1] [i_2] [i_2])) ? (((/* implicit */int) arr_17 [i_1 - 2] [i_2] [i_1])) : (-1));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) -22)) | (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) -1)) : (3048903878U)))));
                        }
                    } 
                } 
            }
            for (unsigned int i_7 = 1; i_7 < 20; i_7 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */_Bool) arr_7 [i_7])) ? (288230376143323136LL) : (arr_7 [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_7 [i_7]))))));
                arr_26 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((var_0) + (2147483647))) << (((((/* implicit */int) arr_18 [(short)17] [(short)17] [(short)17] [14LL] [i_7 + 2] [(short)17])) - (77)))))) ? ((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)-18)) + (77))) - (59))))) : (((long long int) arr_18 [i_7] [i_1] [3] [i_7] [i_7 + 1] [i_1 - 2]))));
            }
            var_26 = ((/* implicit */unsigned int) var_6);
        }
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) max((((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_25 [i_0] [i_0] [16LL])))), (var_10))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) 
    {
        arr_29 [i_8] = ((unsigned int) ((((/* implicit */_Bool) 21)) ? (((((/* implicit */_Bool) 1439131319U)) ? (((/* implicit */long long int) arr_1 [i_8])) : (-9223372036854775807LL))) : (max((810218433618741640LL), (((/* implicit */long long int) arr_19 [i_8] [i_8] [i_8] [(signed char)20] [12] [i_8] [(short)16]))))));
        var_28 = ((/* implicit */short) -538493925);
        arr_30 [i_8] = ((/* implicit */unsigned char) ((max((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) 3048903869U))))))) - (((((/* implicit */_Bool) (short)11)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3972878271555578827LL)))))) : (max((-9223372036854775791LL), (((/* implicit */long long int) (short)-11))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [14] [i_8] [i_8] [0LL])) && (((/* implicit */_Bool) (~(9223372036854775806LL))))));
            var_30 = ((/* implicit */signed char) var_4);
        }
        for (unsigned int i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            var_31 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)16)), ((-9223372036854775807LL - 1LL))))) ? ((~(var_13))) : (((/* implicit */int) (unsigned char)255))))) | (9223372036854775806LL)));
            var_32 = ((/* implicit */long long int) arr_10 [i_8] [i_8] [18] [i_10] [i_10] [i_10]);
            /* LoopSeq 2 */
            for (long long int i_11 = 0; i_11 < 16; i_11 += 3) 
            {
                arr_38 [i_10] = ((/* implicit */signed char) max((-9223372036854775806LL), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_13 [9LL] [i_10] [i_10] [i_8] [i_8]) + (-810218433618741620LL)))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_8] [i_8] [i_8] [i_8] [i_8] [i_11]))))))))));
                arr_39 [i_10] [i_10] [i_8] [i_10] = ((/* implicit */unsigned short) (((((~(((((/* implicit */long long int) var_12)) / (9221073582972251324LL))))) + (9223372036854775807LL))) >> ((((~(max((var_7), (((/* implicit */long long int) var_2)))))) + (6224267473839051955LL)))));
            }
            for (long long int i_12 = 3; i_12 < 15; i_12 += 3) 
            {
                arr_44 [i_12] [(unsigned char)2] |= (((~(arr_3 [i_12]))) | (max((arr_3 [i_10]), (arr_3 [i_12 - 1]))));
                /* LoopNest 2 */
                for (unsigned char i_13 = 2; i_13 < 14; i_13 += 1) 
                {
                    for (unsigned char i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) (~(-40)));
                            arr_50 [i_8] [i_10] = ((/* implicit */int) 5804319632800807409LL);
                            var_34 += ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_13] [i_13 - 1] [i_12 + 1]))))), (((((/* implicit */_Bool) arr_28 [i_13 - 2])) ? (-3132123724854983320LL) : (3132123724854983322LL)))));
                        }
                    } 
                } 
            }
            var_35 = ((/* implicit */int) max((var_35), (((((/* implicit */int) (unsigned short)6144)) + (280640085)))));
        }
        arr_51 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_8])) ? (((/* implicit */long long int) (-((~(arr_31 [i_8] [i_8])))))) : ((+(-3132123724854983323LL)))));
    }
    for (long long int i_15 = 1; i_15 < 20; i_15 += 2) 
    {
        var_36 = ((/* implicit */signed char) 280640104);
        var_37 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_15] [i_15] [i_15])) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1)))))))))));
    }
    var_38 += ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (~(var_10)))) : (var_14))) * (((/* implicit */long long int) var_17)));
    var_39 = ((long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (4162607146U)))) ? (((((((/* implicit */int) var_8)) + (2147483647))) << (((var_3) - (1362817456710143857LL))))) : (((1135091101) << (((((/* implicit */int) var_4)) - (119)))))));
    var_40 |= ((/* implicit */unsigned char) var_16);
}

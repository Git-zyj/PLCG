/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161491
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
    var_20 = var_0;
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((((((/* implicit */long long int) ((/* implicit */int) var_7))) | (var_1))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (~(var_14))))))))));
        arr_3 [i_0] = var_15;
    }
    for (unsigned int i_1 = 1; i_1 < 8; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
        /* LoopSeq 3 */
        for (short i_2 = 3; i_2 < 8; i_2 += 1) 
        {
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (((~(var_11))) << (((((((int) var_13)) & ((~(((/* implicit */int) var_10)))))) - (636))))))));
            var_23 = ((/* implicit */unsigned long long int) var_16);
            var_24 = ((/* implicit */signed char) var_19);
            arr_13 [i_1] [i_2] [i_2] = ((/* implicit */short) (~(-155220018)));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_18 [i_1] [i_1] [i_1] = ((unsigned char) (-(((/* implicit */int) ((short) var_9)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    arr_25 [i_1] [i_1] [i_4] [i_5] = ((/* implicit */signed char) (~(var_14)));
                    var_25 = ((/* implicit */int) ((var_14) - (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                }
                arr_26 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
                /* LoopNest 2 */
                for (short i_6 = 3; i_6 < 8; i_6 += 1) 
                {
                    for (short i_7 = 2; i_7 < 9; i_7 += 1) 
                    {
                        {
                            arr_34 [i_1] [i_3] [i_7 - 1] [i_7 - 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))));
                            arr_35 [i_1] [i_3] [i_4] [(unsigned char)5] [(unsigned char)1] [(unsigned char)5] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_15))));
                            var_26 = ((/* implicit */short) min((var_26), (((short) var_7))));
                        }
                    } 
                } 
            }
            for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                var_27 *= ((/* implicit */unsigned char) (+((~((~(((/* implicit */int) var_7))))))));
                arr_38 [(signed char)8] [i_1] [i_8] [i_8] = ((/* implicit */short) ((_Bool) ((short) 4287061903U)));
            }
        }
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) var_7)))));
            var_29 = ((/* implicit */unsigned char) ((((unsigned int) var_8)) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_8))))));
            var_30 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)129)))) >= (((/* implicit */int) var_7))));
        }
        var_31 = ((/* implicit */unsigned char) (+((+((+(var_11)))))));
        var_32 ^= ((/* implicit */unsigned int) ((((unsigned long long int) var_5)) >> (((((/* implicit */int) ((unsigned char) var_11))) - (155)))));
    }
    for (short i_10 = 0; i_10 < 24; i_10 += 1) 
    {
        var_33 = ((short) ((unsigned short) ((short) var_1)));
        arr_46 [i_10] = ((/* implicit */unsigned short) ((int) ((unsigned char) ((signed char) var_15))));
    }
    for (short i_11 = 2; i_11 < 18; i_11 += 1) 
    {
        arr_50 [i_11] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) var_19)))));
        arr_51 [i_11] [i_11] = ((/* implicit */unsigned int) (~(((unsigned long long int) var_3))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155947
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
    var_13 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((/* implicit */int) max((var_1), (((/* implicit */signed char) ((var_12) != (((/* implicit */unsigned int) ((/* implicit */int) (short)1718)))))))))));
    var_14 = ((/* implicit */long long int) var_4);
    var_15 = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 2])) - (((/* implicit */int) (unsigned short)39919))));
        var_16 = ((/* implicit */unsigned long long int) ((((var_7) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 2]))))) & (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))));
        var_17 = ((/* implicit */unsigned char) var_2);
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 1; i_2 < 13; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) ((short) (short)1718));
                        var_19 = ((/* implicit */unsigned short) max((-8112154028818591035LL), (((/* implicit */long long int) (signed char)59))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned short) arr_13 [i_1] [i_1] [i_1]);
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (short)62))));
        arr_17 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_9)) | (((/* implicit */int) (unsigned short)39907)))) ^ (var_11)));
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            for (int i_6 = 3; i_6 < 14; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    {
                        var_22 = max(((short)-1718), ((short)1717));
                        var_23 = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                        var_24 = ((/* implicit */unsigned char) arr_16 [i_1] [i_5] [i_5] [2LL]);
                        var_25 = ((/* implicit */signed char) ((((/* implicit */int) (short)-1717)) < (((/* implicit */int) arr_22 [i_1] [i_5] [i_6 - 1] [i_1]))));
                        var_26 = ((/* implicit */unsigned long long int) var_11);
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        var_27 |= ((/* implicit */unsigned short) ((((((((((/* implicit */_Bool) (unsigned char)32)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) (-2147483647 - 1))))) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)35564)) - (35564)))));
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            for (unsigned short i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                {
                    var_28 = (short)-32753;
                    var_29 = ((/* implicit */unsigned int) ((short) arr_5 [i_10]));
                }
            } 
        } 
    }
    for (short i_11 = 0; i_11 < 22; i_11 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 22; i_12 += 4) 
        {
            for (unsigned char i_13 = 3; i_13 < 20; i_13 += 1) 
            {
                {
                    arr_40 [i_12] [i_13] = ((/* implicit */unsigned short) arr_35 [i_11]);
                    var_30 = ((/* implicit */signed char) ((((arr_30 [i_11]) + (9223372036854775807LL))) >> (((var_7) + (441921458854249408LL)))));
                }
            } 
        } 
        var_31 = ((/* implicit */signed char) (-(((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_11]))) / (7768823176023539420ULL))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)244)))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_14 = 2; i_14 < 21; i_14 += 2) 
        {
            for (unsigned short i_15 = 0; i_15 < 22; i_15 += 4) 
            {
                for (unsigned short i_16 = 0; i_16 < 22; i_16 += 3) 
                {
                    {
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? ((+(((((/* implicit */int) (signed char)0)) * (((/* implicit */int) (unsigned short)65512)))))) : (((/* implicit */int) max(((short)1717), (((/* implicit */short) arr_34 [i_14 - 1] [i_14 + 1] [i_16])))))));
                        var_33 = var_9;
                    }
                } 
            } 
        } 
        arr_48 [i_11] [(unsigned short)5] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)6304)) - (((/* implicit */int) (unsigned char)106))));
    }
}

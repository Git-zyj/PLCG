/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124894
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) * (max((var_0), (((((/* implicit */int) (signed char)0)) / (((/* implicit */int) (unsigned short)53250))))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */short) -7901850648898010776LL);
                                arr_15 [i_0] [i_1] [(unsigned char)3] [(unsigned char)3] [(unsigned char)3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)102))) | (((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)12285))))) ^ (((-2098784646995899102LL) ^ (67108863LL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                arr_22 [i_6] [i_5] [i_1] [i_1 - 1] [(short)8] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) arr_13 [i_0 + 1] [i_1] [i_2] [(unsigned short)8] [i_1])))));
                                arr_23 [i_1] [4U] = ((/* implicit */short) (~(((((/* implicit */int) (short)-32761)) ^ (((/* implicit */int) (unsigned short)511))))));
                                arr_24 [i_1] [i_1] [(signed char)16] = ((/* implicit */long long int) ((((/* implicit */int) (((+(((/* implicit */int) var_10)))) != (((/* implicit */int) (!(((/* implicit */_Bool) 33554431)))))))) + (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53258))) : (arr_4 [i_1] [i_2] [i_1])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_25 [i_0 + 1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53239))) * (4168814617U))))))), (((arr_0 [(_Bool)0]) & (((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
    }
    for (signed char i_7 = 1; i_7 < 17; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                {
                    arr_33 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (-(18U)))) ? (((((/* implicit */int) (unsigned short)29972)) / (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_13 [(unsigned short)16] [i_8] [i_8] [(unsigned short)16] [i_7])))));
                    arr_34 [i_7] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)205)) && (((/* implicit */_Bool) -1261194504)))))));
                    arr_35 [(unsigned char)14] [i_8] [i_8] [i_7] = ((/* implicit */_Bool) var_4);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
        {
            for (unsigned short i_11 = 0; i_11 < 18; i_11 += 2) 
            {
                for (unsigned short i_12 = 3; i_12 < 16; i_12 += 4) 
                {
                    {
                        arr_45 [i_12] [i_7 + 1] [i_7 + 1] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)102))));
                        arr_46 [i_7] [i_7 - 1] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)29972)) << (((((/* implicit */int) (unsigned char)255)) - (245)))));
                        arr_47 [i_10] [i_7] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) && (((/* implicit */_Bool) ((1313929098056465855ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4051))))))))) * (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)177))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (short)-32761))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_13 = 1; i_13 < 16; i_13 += 2) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    arr_52 [i_7] = ((/* implicit */_Bool) (short)-32738);
                    arr_53 [i_7] [i_13] [i_7] = 15502424023434132065ULL;
                }
            } 
        } 
    }
}

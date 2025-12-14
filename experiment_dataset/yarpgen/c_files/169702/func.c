/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169702
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [7ULL] [7ULL] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 1])) : (var_19))), (1073741696)));
                var_20 += ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) var_1)), ((~(var_7))))) < (((/* implicit */unsigned long long int) max((-1073741697), (((/* implicit */int) var_4)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 4; i_2 < 18; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_6] [i_4] [i_2 - 4] [i_2]))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)8)))) ? (((/* implicit */int) ((short) var_13))) : (((((/* implicit */_Bool) var_4)) ? (arr_8 [i_2] [i_2 - 4]) : (((/* implicit */int) arr_6 [i_2]))))))) : (((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 - 4])) ? (min((var_7), (((/* implicit */unsigned long long int) -1073741683)))) : (((/* implicit */unsigned long long int) ((long long int) 18446744073709551615ULL)))))));
                                var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_16 [i_2 - 2] [i_2 - 2] [i_2 - 3] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_16 [i_2 - 4] [i_2 + 1] [i_2 - 4] [i_2 + 1] [i_5] [i_2 - 4])) : (((/* implicit */int) arr_6 [i_2 + 1])))) >= (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_1))))));
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_10 [i_2] [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) != (var_6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_12)), ((short)-2048))))) : (min((((/* implicit */unsigned long long int) arr_13 [i_2] [i_2 - 3] [i_4] [i_5])), (arr_10 [i_2 - 2] [i_2 - 4])))));
                                arr_17 [i_2] [i_3] [i_3] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) ((long long int) (unsigned char)145));
                                var_24 = ((/* implicit */unsigned char) -1LL);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        var_25 ^= (((((!(((/* implicit */_Bool) arr_7 [i_7])))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)61557)) > (((/* implicit */int) var_17))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_7]))))))) + (((/* implicit */int) var_9)));
                        var_26 = ((/* implicit */long long int) ((((var_9) ? (((var_9) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) var_17)))) : (arr_14 [i_2 - 2] [i_2] [i_2] [i_2 - 4]))) << (((unsigned long long int) arr_6 [i_2 - 3]))));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((var_3) ? (((/* implicit */unsigned long long int) var_5)) : (867593308039631860ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) << (((((/* implicit */int) var_0)) << (((/* implicit */int) ((((/* implicit */int) var_11)) >= (var_5))))))));
    /* LoopNest 2 */
    for (short i_8 = 2; i_8 < 21; i_8 += 3) 
    {
        for (short i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            {
                var_28 = ((/* implicit */long long int) arr_22 [i_9]);
                var_29 -= ((/* implicit */short) max((((/* implicit */long long int) ((short) 805306368LL))), (max((arr_23 [4LL]), (arr_23 [16])))));
                var_30 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_8 - 1] [i_8 - 2]))))) != (((((/* implicit */_Bool) arr_25 [i_8 - 2] [i_8 - 1])) ? (((/* implicit */int) arr_25 [i_8 - 1] [i_8 - 2])) : (((/* implicit */int) var_11)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 2) 
    {
        for (long long int i_11 = 0; i_11 < 15; i_11 += 1) 
        {
            {
                arr_32 [i_11] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_16 [i_11] [(short)9] [i_11] [(unsigned short)1] [i_10] [(unsigned short)2])) / (((/* implicit */int) (short)-31823)))) >> (((/* implicit */int) ((_Bool) arr_13 [i_10] [i_10] [i_10] [i_10])))))) : (max((((((/* implicit */_Bool) arr_3 [i_10] [i_11] [i_11])) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117))))), (((/* implicit */unsigned long long int) 1073741682))))));
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 15; i_13 += 4) 
                    {
                        {
                            arr_39 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */int) arr_18 [i_10] [i_11] [i_12]);
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) max((arr_0 [i_10]), (((/* implicit */unsigned long long int) (unsigned char)112)))))) | (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (var_13)))) || (((/* implicit */_Bool) min((arr_25 [i_12] [i_11]), (((/* implicit */unsigned short) var_18))))))))));
                            arr_40 [i_10] [i_10] [i_12] = ((/* implicit */unsigned char) (unsigned short)1915);
                            arr_41 [i_12] [i_12] = ((long long int) max((arr_19 [i_10] [i_10] [i_11] [i_12] [i_11] [i_13]), (arr_19 [i_10] [i_11] [i_12] [i_12] [i_10] [i_13])));
                        }
                    } 
                } 
            }
        } 
    } 
}

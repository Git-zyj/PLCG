/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128596
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
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_19 = ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned char) arr_2 [i_0] [i_1]))))) ? ((~(((/* implicit */int) arr_2 [i_0] [i_3])))) : (((/* implicit */int) (short)-5461)));
                            var_20 = ((/* implicit */_Bool) var_1);
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */_Bool) (~(((((int) var_13)) % (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_0])) : (((/* implicit */int) (signed char)52))))))));
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_22 = ((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) arr_4 [i_0] [i_0])))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_5])) || (((/* implicit */_Bool) var_16))))))) : ((~(((/* implicit */int) arr_10 [13ULL] [i_1] [i_0] [i_5] [i_6])))));
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [15] [i_1])) << (((((/* implicit */int) (unsigned short)5716)) - (5692)))))) & (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_4] [i_5])) ? (((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [(signed char)12] [i_6])) : (var_13)))))) ? ((~((~(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((short) (~(((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_8 = 2; i_8 < 15; i_8 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_0] [i_8] [i_7] [i_8 - 2])) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (signed char)-52))));
                            var_25 = ((/* implicit */int) arr_13 [i_8 + 1] [i_8 - 2] [i_8]);
                            var_26 ^= ((/* implicit */int) (unsigned char)157);
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_27 = ((_Bool) min((((/* implicit */long long int) (short)5460)), (arr_9 [i_1])));
                            var_28 = ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) arr_9 [(_Bool)1])) ? (((/* implicit */int) (short)5467)) : (((/* implicit */int) (_Bool)1)))), (arr_6 [i_1] [i_9]))), ((~(((/* implicit */int) var_15))))));
                            var_29 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (arr_19 [i_0]) : (((/* implicit */unsigned long long int) ((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))), ((~(arr_22 [i_9] [i_7] [i_4] [i_1] [i_1] [i_0])))));
                        }
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 197761095)))))));
                    }
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    var_31 |= ((/* implicit */unsigned char) arr_4 [i_0] [i_10]);
                    var_32 = ((/* implicit */int) (_Bool)1);
                    var_33 = ((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)9)))), (((/* implicit */int) ((unsigned short) arr_13 [i_0] [i_1] [i_10])))));
                    var_34 ^= ((/* implicit */short) ((min((min((var_2), (((/* implicit */long long int) (short)-32759)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) var_5)) : (arr_27 [i_0] [i_1] [i_10])))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_11 [3] [3] [i_10])))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 18; i_12 += 3) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_15 [i_1] [i_10])))) - (((/* implicit */int) min((arr_15 [i_0] [i_10]), (arr_15 [i_0] [i_1]))))));
                                var_36 = ((/* implicit */int) min(((!((!(((/* implicit */_Bool) arr_10 [i_12] [i_0] [i_0] [i_1] [i_0])))))), ((!(((/* implicit */_Bool) var_10))))));
                                var_37 = ((/* implicit */int) arr_25 [i_0] [i_11]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((~(var_11))) << (((((/* implicit */int) (short)5464)) - (5455)))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) | (((/* implicit */int) (short)28120))))) % (((((/* implicit */unsigned long long int) 4294967295U)) % (var_11))))) : (((/* implicit */unsigned long long int) ((int) (~(var_3)))))));
    var_39 ^= ((/* implicit */unsigned long long int) ((var_7) >= (((/* implicit */unsigned int) min((var_8), ((~(450209873))))))));
    var_40 = ((/* implicit */int) var_17);
    var_41 = ((/* implicit */unsigned int) ((_Bool) var_3));
}

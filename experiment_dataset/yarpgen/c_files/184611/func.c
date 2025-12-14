/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184611
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) /* same iter space */
                    {
                        var_10 = min((((/* implicit */short) (_Bool)1)), ((short)17436));
                        var_11 = ((/* implicit */unsigned char) var_8);
                        var_12 = ((unsigned char) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))) : (4294967293U)));
                        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) 2147483647))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
                    {
                        arr_12 [i_2] [i_2] [i_0] [i_0] = ((unsigned int) var_8);
                        /* LoopSeq 4 */
                        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            arr_15 [i_5] [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483618)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (signed char)115))));
                            var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_0] [i_5]))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            var_15 = var_0;
                            var_16 = ((/* implicit */unsigned int) (-(2147483591)));
                        }
                        for (unsigned int i_7 = 4; i_7 < 20; i_7 += 2) 
                        {
                            arr_22 [i_0] [i_2] [i_2] [i_4] [i_7 - 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)32756))));
                            var_17 = ((/* implicit */long long int) var_9);
                            var_18 = ((/* implicit */short) (unsigned char)14);
                            var_19 = ((/* implicit */signed char) ((1296473121) & (262143)));
                        }
                        for (unsigned char i_8 = 1; i_8 < 19; i_8 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_8 + 1] [i_8 + 1] [i_8 + 1]))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) (unsigned short)65512)) : (((/* implicit */int) (short)3504)))))));
                            var_22 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (-193752181))))));
                        }
                    }
                    for (unsigned char i_9 = 1; i_9 < 18; i_9 += 3) 
                    {
                        var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)32747)), ((unsigned short)22966)));
                        arr_31 [i_2] [i_1] [i_1] [i_9 - 1] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65525)) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_28 [i_9 - 1] [i_2] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_2] [i_0]))))))))));
                        arr_32 [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_25 [i_0] [i_0] [i_2] [i_0])), (arr_27 [i_0] [i_1] [i_2] [i_9 - 1])))) ? (min((1), (((/* implicit */int) (short)-32752)))) : (((/* implicit */int) ((((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_9 + 3])) >= (((/* implicit */int) arr_25 [i_0] [i_0] [i_2] [i_9 + 3]))))))))));
                        var_24 = ((/* implicit */unsigned int) (+(658686488)));
                        var_25 ^= ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_2]);
                    }
                    arr_33 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) (short)-4111)))) | (((/* implicit */int) arr_27 [i_2] [i_2] [i_0] [i_0])))) ^ (((/* implicit */int) min((arr_13 [i_0] [i_0] [i_1] [i_1] [i_0]), (((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_1] [i_0])))))));
                    var_26 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_24 [i_0] [i_1] [i_0] [i_2])) : (((/* implicit */int) arr_24 [i_0] [i_1] [i_2] [i_2])))))));
                    var_27 = ((/* implicit */_Bool) ((unsigned char) (((!(((/* implicit */_Bool) (signed char)114)))) ? (106968641U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55837))))));
                }
            } 
        } 
        var_28 &= ((/* implicit */unsigned char) (~(min((((/* implicit */int) var_1)), ((~(((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0]))))))));
    }
    var_29 = ((/* implicit */signed char) max((((/* implicit */long long int) (unsigned char)186)), (-4606643015498122690LL)));
    var_30 = ((/* implicit */unsigned char) min((((/* implicit */int) (short)-32738)), (((((/* implicit */int) var_0)) | (6)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138382
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(((((/* implicit */_Bool) -8109173176262071328LL)) ? (((/* implicit */int) (short)-30948)) : (((/* implicit */int) (unsigned char)193)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) var_11);
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((-3901761512006948022LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (min((((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned long long int) arr_2 [i_1])) : (arr_5 [i_1] [i_1]))), (arr_5 [i_1] [i_1])))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 8109173176262071342LL)) > (((arr_5 [i_1] [i_1]) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12)))))))));
    }
    var_21 |= ((/* implicit */unsigned short) (short)-29482);
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        for (signed char i_3 = 3; i_3 < 18; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                {
                    arr_17 [i_3] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (unsigned short)65535)))))));
                    var_22 = ((/* implicit */unsigned short) arr_8 [i_2]);
                    /* LoopSeq 3 */
                    for (signed char i_5 = 1; i_5 < 16; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 1; i_6 < 17; i_6 += 4) 
                        {
                            arr_23 [i_5] [i_3] [i_5] [i_5] [13] [(short)18] [i_5] = ((/* implicit */_Bool) 3901761512006948003LL);
                            arr_24 [i_2] [(short)12] [i_3] = ((/* implicit */signed char) (unsigned char)6);
                        }
                        arr_25 [i_2] [(short)14] [i_4] [i_2] [i_3] [i_5] = ((/* implicit */signed char) (_Bool)1);
                        var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(8109173176262071313LL))))))), (((((/* implicit */_Bool) var_17)) ? (arr_1 [i_5 - 1] [i_3 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                        /* LoopSeq 2 */
                        for (long long int i_7 = 2; i_7 < 16; i_7 += 1) 
                        {
                            arr_28 [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 17815832340080811358ULL))));
                            var_24 = ((/* implicit */long long int) ((((((/* implicit */int) (short)-32766)) + (2147483647))) >> ((((-(((/* implicit */int) (unsigned char)113)))) + (131)))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            var_25 = ((/* implicit */signed char) var_0);
                            var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((-8109173176262071298LL) & (((/* implicit */long long int) var_16)))))));
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (_Bool)0))));
                            arr_33 [i_2] [i_3] [(unsigned char)4] [i_5] [(unsigned char)14] |= 1990804833;
                            var_28 = ((/* implicit */unsigned int) arr_9 [(unsigned short)4] [i_3 - 1]);
                        }
                        var_29 = ((/* implicit */unsigned char) (((~((~(((/* implicit */int) var_8)))))) ^ ((~(((/* implicit */int) (unsigned char)183))))));
                    }
                    for (short i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        arr_37 [(unsigned short)8] [i_2] [i_2] [i_2] &= ((/* implicit */long long int) arr_22 [i_9] [i_3] [i_2]);
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_7 [i_3 - 2]) / (-1439636049)))) ? (var_16) : (((/* implicit */unsigned int) var_10))));
                    }
                    for (unsigned char i_10 = 1; i_10 < 18; i_10 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned short) -2359533882996042132LL);
                        arr_40 [i_2] [i_3] [i_2] [i_3] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 17469300187265340087ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)63))))) ? (((/* implicit */int) ((unsigned short) (_Bool)0))) : (((/* implicit */int) var_2))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_11 = 3; i_11 < 20; i_11 += 2) 
    {
        arr_43 [(unsigned short)16] = ((/* implicit */_Bool) (unsigned short)44322);
        var_32 = ((/* implicit */unsigned short) var_10);
        var_33 -= (~(min((var_10), (((/* implicit */int) arr_41 [i_11 - 3])))));
    }
    var_34 = ((/* implicit */signed char) var_16);
}

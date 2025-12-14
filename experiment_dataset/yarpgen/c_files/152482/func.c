/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152482
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
    var_17 += ((/* implicit */unsigned short) var_10);
    var_18 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) (!(((/* implicit */_Bool) -106214822))))) < (-610432413))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) (unsigned short)65472);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) -2875377791303810647LL);
                            arr_11 [(unsigned char)2] [i_3] [(_Bool)1] [i_3] [i_0] = ((/* implicit */signed char) ((arr_5 [i_1] [i_3]) % ((~(610432426)))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (~(610432433))))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned short) var_11);
            var_23 += ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_1]);
            /* LoopSeq 2 */
            for (unsigned char i_5 = 2; i_5 < 8; i_5 += 2) /* same iter space */
            {
                arr_16 [i_0] [(unsigned char)8] [i_0] [i_0] = ((/* implicit */unsigned short) (short)-7263);
                var_24 = ((/* implicit */unsigned short) (((-(((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-22)))))));
            }
            for (unsigned char i_6 = 2; i_6 < 8; i_6 += 2) /* same iter space */
            {
                var_25 -= ((/* implicit */short) arr_13 [i_6 + 1] [i_6] [i_6 - 1] [i_6 + 3]);
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)28105)) / (((/* implicit */int) (short)-28088))));
            }
            arr_19 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_0] [1LL] [i_0] [i_1]))));
        }
        for (int i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
        {
            var_27 += ((/* implicit */unsigned long long int) (short)27946);
            /* LoopNest 3 */
            for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        {
                            arr_31 [i_0] [2U] [i_7] [i_8] [i_9] [i_7] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_7])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))));
                            arr_32 [i_8] [i_0] [i_0] [i_8] [i_0] [i_8] [4ULL] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_7] [i_9]))));
                        }
                    } 
                } 
            } 
        }
        arr_33 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)18783)) == (((/* implicit */int) (unsigned char)247))));
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 4) 
    {
        var_28 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 610432410)) ? (((/* implicit */int) (unsigned short)22756)) : (((/* implicit */int) (unsigned short)96))));
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_11])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_37 [i_11]))))) ? (((((/* implicit */_Bool) (unsigned short)18783)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) arr_36 [i_11])))) : (((/* implicit */int) ((unsigned short) (short)28082)))));
        var_30 ^= ((/* implicit */signed char) (unsigned short)22756);
    }
    var_31 = ((/* implicit */long long int) ((((unsigned long long int) ((unsigned char) var_2))) >> ((((+(((/* implicit */int) var_4)))) + (17324)))));
    var_32 = ((/* implicit */unsigned short) var_11);
}

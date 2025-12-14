/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105714
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) var_17);
                    var_19 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1807496110))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned char) min((var_20), ((unsigned char)3)));
                        var_21 -= ((/* implicit */unsigned int) min((((var_8) & (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) max((arr_7 [i_2 + 1] [13] [i_2] [i_2]), (((/* implicit */int) arr_3 [i_2] [(unsigned char)10] [i_2])))))));
                        var_22 ^= ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31049)) | (((/* implicit */int) var_9))))))) ? (((/* implicit */int) ((((((/* implicit */int) var_4)) % (var_5))) > (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)101)) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_3])))))))) : (((/* implicit */int) ((((/* implicit */int) max(((unsigned short)32740), (((/* implicit */unsigned short) var_4))))) <= ((~(((/* implicit */int) var_1)))))))));
                        var_23 = ((/* implicit */short) ((((arr_5 [i_2 + 1]) >= (arr_5 [i_2 + 2]))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) || (((/* implicit */_Bool) (unsigned char)53))))) : (min((((((/* implicit */_Bool) arr_4 [i_1] [1U] [i_2 + 2])) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) var_11)))), (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_2)))))))));
                    }
                    arr_12 [i_2 + 1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */long long int) (~(var_5)))) > (((long long int) var_6))))), (((((3152104700U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))))) << ((((-(((/* implicit */int) arr_11 [i_2 - 1])))) + (171)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_0))) && (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((unsigned short) (_Bool)1)))))));
    /* LoopSeq 2 */
    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 22; i_6 += 4) 
            {
                for (unsigned char i_7 = 2; i_7 < 21; i_7 += 4) 
                {
                    for (signed char i_8 = 1; i_8 < 23; i_8 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (((!(var_14))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (var_14)))) : (((((/* implicit */int) (unsigned char)63)) << (((((/* implicit */int) (unsigned short)42199)) - (42190))))))))));
                            var_26 = ((/* implicit */_Bool) max((var_26), ((!(((/* implicit */_Bool) var_0))))));
                            arr_27 [(signed char)13] [i_5] [i_5] [i_5] [i_5] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_19 [i_4]))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4] [i_4])) ? (((/* implicit */long long int) (-(arr_17 [i_4] [19ULL] [i_5])))) : (6557304704305201274LL))))));
        }
        var_28 = ((/* implicit */int) ((unsigned char) ((unsigned long long int) (unsigned short)32227)));
    }
    for (signed char i_9 = 2; i_9 < 18; i_9 += 3) 
    {
        arr_31 [i_9] [i_9 - 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_30 [i_9 - 1] [i_9 + 2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_9] [i_9 + 2])))))))))));
        arr_32 [i_9] [i_9] = ((/* implicit */unsigned long long int) (unsigned short)32227);
    }
}

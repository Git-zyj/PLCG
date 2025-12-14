/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137847
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
    var_19 = ((/* implicit */long long int) (unsigned char)76);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            arr_4 [i_0] [i_1] &= ((/* implicit */long long int) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_2 [(unsigned short)17] [(signed char)20] [(signed char)14])) ? (((/* implicit */int) arr_2 [i_0] [(unsigned char)7] [19U])) : (arr_1 [(signed char)11] [i_1]))) : (arr_0 [i_0]))), (max((arr_1 [i_0] [i_1]), (((((/* implicit */int) (short)-28661)) / (((/* implicit */int) var_9))))))));
            var_20 += ((/* implicit */int) arr_3 [(unsigned char)17] [i_1] [i_1]);
            var_21 -= ((/* implicit */long long int) (short)28660);
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            arr_8 [i_0] [i_2] = ((_Bool) (~(((/* implicit */int) (unsigned short)65535))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    {
                        arr_14 [i_2] [i_2] [8LL] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [10ULL] [i_2 + 1] [(short)2])) ? (-7028237572101755009LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [(signed char)7] [i_2 + 1] [i_2])))));
                        arr_15 [i_4] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [(_Bool)1] [i_3])) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) (signed char)114))));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 2; i_5 < 20; i_5 += 1) 
                        {
                            var_22 += ((/* implicit */unsigned long long int) ((arr_9 [i_4] [i_2 + 1]) | (arr_9 [i_4] [i_2 + 1])));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (+(((/* implicit */int) (short)28631)))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            arr_23 [i_2] [i_2] = ((/* implicit */int) arr_16 [i_2]);
                            arr_24 [i_0] [i_2] [i_2] [i_2] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 1] [i_3])) ? (((/* implicit */int) arr_6 [i_2 + 1] [(unsigned short)5] [(signed char)9])) : (((/* implicit */int) arr_6 [i_2 + 1] [i_0] [(unsigned short)17]))));
                            var_24 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)8])) ? (-7028237572101755009LL) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
                        }
                    }
                } 
            } 
            var_25 = ((/* implicit */short) ((((((/* implicit */int) var_4)) == (((/* implicit */int) arr_19 [(unsigned short)17] [10LL] [i_2] [i_2] [i_2])))) ? (((arr_0 [3LL]) & (((/* implicit */int) (unsigned short)52133)))) : ((~(((/* implicit */int) var_3))))));
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (~(arr_1 [i_0] [i_0]))))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                for (unsigned char i_8 = 1; i_8 < 20; i_8 += 1) 
                {
                    for (int i_9 = 2; i_9 < 19; i_9 += 3) 
                    {
                        {
                            arr_34 [i_0] [i_2] [i_7] [i_0] [i_2] [i_9] = ((/* implicit */unsigned int) ((6325164409080479726ULL) << (((((long long int) 18446744073709551615ULL)) + (53LL)))));
                            var_27 = ((/* implicit */int) max((var_27), ((~(var_14)))));
                            var_28 -= ((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_9 - 1] [i_8 + 1] [i_7] [(signed char)15] [i_0])) / (((/* implicit */int) var_12))));
                        }
                    } 
                } 
            } 
        }
        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) arr_18 [i_0] [(short)17] [16ULL] [(short)17] [i_0] [i_0]))));
        arr_35 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((~(var_7)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [(unsigned char)0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28660))) >= (2534194042887977604ULL)))) : (((arr_5 [i_0] [14U]) ^ (((/* implicit */int) arr_28 [(signed char)4]))))))) : (((((/* implicit */_Bool) arr_29 [(unsigned short)0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [10U]))) : (arr_13 [(_Bool)1] [(_Bool)1] [i_0] [(_Bool)1])))));
    }
}

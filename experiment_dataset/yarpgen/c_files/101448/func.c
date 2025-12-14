/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101448
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)37)) || (((/* implicit */_Bool) min(((+(((/* implicit */int) var_7)))), (((((/* implicit */int) (unsigned char)167)) % (((/* implicit */int) arr_1 [i_0])))))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [(signed char)8])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)119))))))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)244)), ((short)-15428)))) : (min((((-1209308001) / (((/* implicit */int) (short)-15435)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46171)))))))));
                var_12 = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) ((signed char) 4294967290U)))), ((+(((/* implicit */int) (unsigned short)3205))))));
                arr_8 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) min((min((((/* implicit */int) (short)15427)), (((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) (short)15427)))))), (((/* implicit */int) ((unsigned char) (-(7824582673723731220LL)))))));
            }
            /* LoopSeq 4 */
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                var_13 = ((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)251)) != (((/* implicit */int) var_5))))))));
                arr_11 [5ULL] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [(signed char)7])) ? ((+(((/* implicit */int) (short)15456)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_0 [(unsigned char)1]))))))));
            }
            for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                var_14 *= ((/* implicit */_Bool) ((unsigned long long int) ((((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */int) arr_7 [5LL] [i_1] [i_4])) : (((/* implicit */int) (signed char)59)))) << (((((/* implicit */int) min((var_7), (((/* implicit */unsigned char) (signed char)-60))))) - (92))))));
                var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */int) min(((!(((/* implicit */_Bool) var_8)))), (((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)21)))))))) & (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)85)) || (((/* implicit */_Bool) -5919171104829763473LL)))))));
            }
            for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    var_16 *= ((/* implicit */unsigned char) (unsigned short)23228);
                    arr_19 [i_0] [i_0] [i_1] [i_5] [i_6] = (signed char)127;
                    var_17 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))), (((((/* implicit */unsigned long long int) 1254454215)) / (7049357885943453993ULL))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)49))))));
                }
                var_18 = ((/* implicit */signed char) max(((+(((/* implicit */int) var_3)))), (((/* implicit */int) arr_16 [i_0]))));
                var_19 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)22223)))))))) <= ((+(((/* implicit */int) var_9)))));
            }
            for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                var_20 *= ((/* implicit */unsigned char) max((((/* implicit */int) var_2)), ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (arr_18 [i_0] [i_0] [i_0])))))));
                arr_22 [i_0] [3] [i_7] = ((/* implicit */long long int) ((signed char) (~(arr_9 [i_0] [i_1 + 1] [i_7] [i_1 - 1]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_8 = 1; i_8 < 9; i_8 += 4) 
                {
                    var_21 = ((/* implicit */int) ((long long int) (signed char)-60));
                    var_22 = ((/* implicit */short) arr_7 [5U] [i_1 - 2] [i_1]);
                    var_23 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_9)))) ? (((2512125223U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1 - 1] [i_0] [i_8 + 1])))));
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (+(((5883643181861474747LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
                }
                for (unsigned char i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1)))))));
                    arr_29 [i_0] [4ULL] [i_7] [i_9] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((-1LL) < (arr_27 [i_0] [i_1 - 2] [i_7] [i_9] [i_9])))) << (((/* implicit */int) (_Bool)1))))));
                }
                arr_30 [(signed char)2] [i_1 - 1] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((0LL) - (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? ((+(((/* implicit */int) var_1)))) : (((((/* implicit */int) arr_5 [i_0] [i_1] [(signed char)3])) + (((/* implicit */int) (unsigned char)10))))))) ? (((/* implicit */unsigned long long int) min((((long long int) var_6)), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [0LL])))))))) : (((((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0] [(unsigned char)2] [i_0])) && (((/* implicit */_Bool) (signed char)9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-64)) ? (((/* implicit */int) (unsigned short)44910)) : (((/* implicit */int) var_7))))) : (var_4)))));
            }
        }
        var_26 += ((/* implicit */short) 501836079302897285LL);
    }
    var_27 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) max(((unsigned char)209), (var_9)))))) * (((/* implicit */int) var_6))));
}

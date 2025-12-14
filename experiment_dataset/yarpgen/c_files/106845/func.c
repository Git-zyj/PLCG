/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106845
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) (+(var_14)))) : (((((/* implicit */_Bool) var_13)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) ? (max((4294967293U), (4294967291U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)13))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        var_21 += ((/* implicit */unsigned int) (short)0);
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+((-2147483647 - 1))))) + ((~(((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (4294967272U)))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
        {
            var_23 += ((/* implicit */unsigned short) (((~(var_12))) % (((/* implicit */unsigned long long int) arr_5 [i_0 - 2] [i_0 - 1]))));
            var_24 = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14580))) / (4294967272U)))));
        }
        for (int i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned long long int) var_13);
            var_26 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_6) : (((/* implicit */unsigned int) (~(arr_2 [4U]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_7))) | (arr_1 [i_0 + 1] [i_0])))) : (((((/* implicit */_Bool) 19U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (0U))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_3 = 2; i_3 < 12; i_3 += 1) 
            {
                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_3 + 2] [i_0 - 1] [i_0 - 2])) ? (var_17) : (((/* implicit */unsigned long long int) 659332087U))));
                var_28 = ((/* implicit */short) (unsigned short)13);
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
        {
            arr_15 [i_0] [(unsigned short)8] [i_0] = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_10)))));
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 4294967293U)) : (arr_7 [i_0] [i_0])))) ? (arr_7 [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((long long int) 4294967291U)))));
            arr_16 [i_0 - 2] [i_0] = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
            arr_17 [i_0] [i_4] [i_0] = ((/* implicit */short) ((unsigned char) ((unsigned char) var_17)));
        }
        for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_6 = 2; i_6 < 12; i_6 += 1) 
            {
                arr_22 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [(unsigned short)8])))))));
                var_30 = ((/* implicit */int) 5U);
            }
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                var_31 = ((/* implicit */int) min((var_31), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_5] [i_7])))))))));
                arr_26 [i_0] [(unsigned short)12] [i_7] = ((/* implicit */_Bool) max((((23U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27187))))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_23 [i_0])), (var_3))))));
                var_32 = (+(((/* implicit */int) (unsigned char)153)));
                var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) (-(1146915906U))))));
                /* LoopSeq 3 */
                for (short i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
                {
                    arr_30 [3] [i_0] [i_5 + 4] [i_7] [i_0] = ((/* implicit */unsigned long long int) ((var_7) & (((/* implicit */unsigned int) (-(arr_2 [i_0]))))));
                    var_34 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5 + 4] [i_0 + 1])) ? (((/* implicit */int) ((signed char) arr_25 [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) || (((/* implicit */_Bool) ((unsigned int) var_1))));
                    var_35 = ((/* implicit */unsigned long long int) min((var_35), (((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [0ULL])))))) ? (((/* implicit */unsigned int) max((var_15), (((/* implicit */int) arr_14 [i_7]))))) : (max((((/* implicit */unsigned int) var_4)), (4294967284U))))))));
                    var_36 = ((/* implicit */unsigned int) var_10);
                    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 601699039U)) & (arr_11 [i_8] [i_0] [i_5]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? ((+(((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (var_13))))) : (((/* implicit */long long int) 10U))));
                }
                /* vectorizable */
                for (short i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 1; i_10 < 13; i_10 += 3) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) arr_2 [i_0]))));
                        var_39 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)63725)) | (((/* implicit */int) (short)0))));
                        var_40 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)-56)) + (((/* implicit */int) arr_20 [i_0] [i_5] [i_7]))))) < (var_13)));
                        var_41 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_2 [(_Bool)0])) / (((((/* implicit */_Bool) arr_13 [i_0])) ? (23U) : (((/* implicit */unsigned int) arr_25 [i_0]))))));
                        var_42 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */int) var_4)) % (((/* implicit */int) (unsigned char)207)))) : (var_14));
                    }
                    for (unsigned int i_11 = 1; i_11 < 13; i_11 += 3) /* same iter space */
                    {
                        var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_27 [i_11 + 2] [i_0] [i_0] [i_0 - 2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1645474575U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_8 [i_11] [i_11] [i_11 + 2])))))));
                        arr_38 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [(signed char)7] [i_0] = ((/* implicit */unsigned char) 3U);
                    }
                    for (unsigned int i_12 = 1; i_12 < 13; i_12 += 3) /* same iter space */
                    {
                        arr_42 [i_0] [10ULL] [9] [i_7] [i_9] [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_39 [i_5] [i_0] [i_5] [i_5] [i_5 + 2])) == (((arr_18 [14ULL]) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)53995))))));
                        arr_43 [i_0 - 2] [14LL] [i_7] [0] [i_12] &= ((/* implicit */unsigned int) (unsigned char)207);
                    }
                    var_44 = ((/* implicit */short) (~(var_7)));
                }
                /* vectorizable */
                for (short i_13 = 0; i_13 < 15; i_13 += 3) /* same iter space */
                {
                    var_45 += ((/* implicit */unsigned int) (-(var_17)));
                    var_46 = ((/* implicit */long long int) (-(((/* implicit */int) arr_31 [i_7] [i_13]))));
                    var_47 = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) arr_2 [i_0])))));
                }
            }
            var_48 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_0 - 2] [i_0 - 2])) == (((/* implicit */int) max((arr_36 [i_0 - 1] [i_0 - 2] [i_5 + 4]), (arr_36 [i_0 - 2] [i_0 - 1] [i_5 + 2]))))));
            var_49 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_20 [i_5] [i_5] [i_5 + 1]))));
            arr_46 [i_0] [i_0] = ((/* implicit */short) (unsigned char)19);
        }
    }
    var_50 = ((unsigned int) (unsigned char)237);
    var_51 = ((/* implicit */int) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_0)))) : (var_17))), (((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)207)), ((short)-16)))) ? (((((/* implicit */_Bool) var_17)) ? (1299033907439826694ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16268))) : (var_18))))))));
    var_52 = ((/* implicit */short) var_18);
}

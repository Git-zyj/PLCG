/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115529
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            var_13 |= arr_2 [i_0] [(unsigned char)12];
            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) arr_3 [10LL] [i_1]))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 13; i_2 += 1) 
        {
            arr_10 [i_0] [(unsigned char)6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))) ? ((+(var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned char)126))))))));
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((((-252466046027946321LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)65533)) - (65533))))) > (((((/* implicit */_Bool) (unsigned char)16)) ? (arr_7 [i_0] [i_2] [i_2]) : (arr_7 [i_0 + 1] [i_2 - 1] [i_2]))))))));
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_7))));
        }
        for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
        {
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) & (((/* implicit */int) var_3))));
            arr_14 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) var_12);
            var_17 = max((var_5), (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0 + 2] [i_0 + 2] [i_3 - 1])) << (((4398046511096LL) - (4398046511096LL)))))));
        }
        arr_15 [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)72))) > (((((/* implicit */_Bool) (signed char)-11)) ? (3362688184995596542LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned char)126))))))))));
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)248))))))))));
    }
    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        var_19 *= ((/* implicit */unsigned short) (unsigned char)7);
        arr_18 [i_4] = ((/* implicit */unsigned char) (-(((long long int) ((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (unsigned char)136)))))));
        var_20 ^= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (signed char)-125)) ? (((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */int) arr_17 [(unsigned char)17])) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) arr_17 [i_4])) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) arr_17 [i_4])))))));
        arr_19 [i_4] &= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max(((unsigned char)135), ((unsigned char)0)))) : (((/* implicit */int) ((var_2) > (((/* implicit */long long int) ((/* implicit */int) arr_16 [(signed char)12]))))))))), (((((/* implicit */_Bool) (signed char)-1)) ? (221916440115689278LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55008)))))));
    }
    for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        arr_24 [i_5] = max((max((max((((/* implicit */long long int) arr_17 [i_5])), (var_7))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)48048))))))), (((/* implicit */long long int) max((((((/* implicit */int) var_0)) << (((((/* implicit */int) arr_16 [i_5])) - (54))))), (((/* implicit */int) arr_17 [i_5]))))));
        var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) 0LL)) ? (17592185782272LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)126))))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (max((arr_23 [i_5] [i_5]), (((/* implicit */long long int) min((var_1), (arr_16 [i_5])))))) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)154)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5]))) : (var_10))))));
        arr_25 [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (max((-2505502317515740761LL), (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)17469), (((/* implicit */unsigned short) (unsigned char)119))))))))) ? (((((/* implicit */_Bool) (unsigned short)748)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2475617182614640675LL)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (unsigned char)253))))) : (6648417826698707780LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_21 [i_5])) ? (2505502317515740761LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30786)))))))));
    }
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned char)130)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) | (-1078615758142944153LL))) : (-9009149380718305143LL))))))));
    var_23 -= ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)0)), (((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */int) ((var_7) < (((/* implicit */long long int) ((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)252))))))));
}

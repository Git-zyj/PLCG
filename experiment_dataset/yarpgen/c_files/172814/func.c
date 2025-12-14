/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172814
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
    var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) 4072287061U)), (-604171594219761744LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 604171594219761743LL)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) (unsigned short)19795)))))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) 3)) || (((/* implicit */_Bool) var_11))))), (604171594219761769LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) min((var_15), (((/* implicit */unsigned char) (signed char)-1))))))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) <= (((/* implicit */int) ((short) (~(((/* implicit */int) var_13))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_4 [6ULL] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) var_14)))) == (((unsigned long long int) arr_3 [i_0]))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((2429414194U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)55815))))));
        /* LoopSeq 3 */
        for (unsigned char i_2 = 1; i_2 < 20; i_2 += 2) 
        {
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_6 [i_1] [i_2]))));
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_6 [i_2] [i_1]))));
        }
        for (int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (arr_10 [i_1] [i_1]))))) | (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) % (arr_8 [i_1] [i_1] [i_3])))));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (4697623373018932651ULL) : (((/* implicit */unsigned long long int) 604171594219761733LL))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            arr_15 [14LL] [i_4] = ((/* implicit */int) ((unsigned long long int) arr_11 [i_1] [i_4] [i_4]));
            var_25 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_4]))) > (var_6)))) ^ ((~(var_9)))));
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                arr_19 [i_1] [i_4] [i_5] = var_10;
                arr_20 [i_1] [i_4] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5] [i_5]))) : (arr_10 [i_1] [i_4]))));
                arr_21 [i_1] [4LL] [(unsigned short)9] [(unsigned char)8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_1] [i_4] [i_5])) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)45741))) / (604171594219761768LL))) : (((/* implicit */long long int) ((int) arr_18 [i_1] [i_4] [i_5] [15U])))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                arr_25 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [14LL])) && (((/* implicit */_Bool) var_9))))) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) >= (arr_5 [i_6]))))));
                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-55)) ? (-604171594219761762LL) : (var_16)))) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) == (2147483647)))))));
                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_17 [i_1] [11LL] [i_6])))) ? (((((/* implicit */_Bool) 604171594219761734LL)) ? (3887608826149357798ULL) : (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_4] [i_4]))))))));
                var_28 += ((/* implicit */short) (~(((/* implicit */int) arr_12 [i_1] [i_1] [i_1]))));
            }
            for (int i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                arr_28 [i_4] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1745751186U)) ? (((/* implicit */int) (unsigned short)49989)) : (((/* implicit */int) (unsigned short)65535))));
                var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) var_5))));
                var_30 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_13 [i_7] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_7]))) : (arr_8 [i_1] [i_1] [(unsigned char)18])))));
            }
            arr_29 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_1] [i_1]))));
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    {
                        var_31 = ((/* implicit */int) ((var_8) == (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) (short)32)))))));
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)45740))) ^ (arr_5 [i_1]))) % (2LL))))));
                        arr_35 [i_1] [i_8] [i_8] [i_9] = ((/* implicit */short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_16 [(short)13])) : (var_10))) ^ (((/* implicit */int) ((unsigned char) var_13)))));
                    }
                } 
            } 
        }
        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)127)) > (((/* implicit */int) (unsigned char)15)))))) >= (((((/* implicit */_Bool) arr_33 [i_1] [i_1] [(signed char)10] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_5))))))));
        arr_36 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_13)) / (var_10))) > (((var_1) ? (((/* implicit */int) (signed char)60)) : (arr_22 [i_1] [i_1] [i_1] [i_1])))));
    }
    var_34 = ((_Bool) (+(((/* implicit */int) (unsigned char)30))));
    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)10)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (short)21327))))) ? (2LL) : (((/* implicit */long long int) ((/* implicit */int) ((-775311913808006166LL) < (((/* implicit */long long int) ((/* implicit */int) (short)32))))))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)31)))));
}

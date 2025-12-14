/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114563
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_12 &= ((/* implicit */unsigned long long int) var_5);
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */int) min((arr_4 [i_0] [7LL] [i_1]), (arr_4 [i_0] [i_1] [i_1])))) << (((((/* implicit */int) max((var_5), (((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_1]))))) - (220))))))));
            var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0]))) ? (((/* implicit */int) (!(arr_3 [i_0])))) : ((~(((/* implicit */int) (short)13315))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            var_15 += ((/* implicit */unsigned char) ((unsigned short) max((arr_1 [i_2] [i_0]), (var_9))));
            var_16 -= ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (var_7))))))) == (((/* implicit */int) var_7)));
            var_17 |= ((/* implicit */long long int) max(((-(18446744073709551608ULL))), (((/* implicit */unsigned long long int) arr_4 [i_2] [i_0] [i_0]))));
        }
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((unsigned short) var_5))));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_4 [i_0] [i_3 + 2] [i_4])), (max((((/* implicit */unsigned short) var_9)), (arr_9 [i_3 + 2] [i_3 - 2]))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_17 [i_0] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_5] [i_0])))))) <= (((((/* implicit */long long int) ((/* implicit */int) max((var_10), (var_7))))) + (-1051409331313935707LL))))))));
            var_21 = ((/* implicit */int) max((var_21), (max((max((((/* implicit */int) ((unsigned short) 1526336343))), (((int) arr_10 [(short)2] [(short)2])))), (((/* implicit */int) (!((_Bool)1))))))));
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 532676608)) ? (min((18446744073709551608ULL), (((/* implicit */unsigned long long int) (unsigned short)35740)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)239)) << (((((/* implicit */int) (unsigned char)31)) - (21)))))))), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_5] [i_5])))))));
        }
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            var_23 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_6 + 1])) | (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) arr_7 [i_0])) ? (max((((/* implicit */unsigned long long int) var_1)), (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-25877), (var_9)))))))));
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max((((((var_6) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_10 [i_0] [i_6]))) % (((/* implicit */long long int) ((((/* implicit */_Bool) 14894518537462515736ULL)) ? (((/* implicit */int) (unsigned short)29796)) : (((/* implicit */int) arr_12 [(signed char)4] [i_6]))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((-5267220176373693052LL) + (9223372036854775807LL))) << (((((/* implicit */int) (short)3337)) - (3337))))))))))))));
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (((((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0])) + (((((/* implicit */_Bool) 0LL)) ? (arr_6 [i_0] [i_0]) : (var_0))))))))));
            arr_21 [i_6] [i_6] = ((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29800))) : (max((3552225536247035890ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (short)25877)), (arr_8 [(unsigned short)10]))) < (max((arr_15 [i_6]), (((/* implicit */unsigned long long int) var_10))))))))));
        }
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_26 = ((/* implicit */unsigned long long int) var_1);
            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((11833618400923367181ULL) != (arr_8 [i_0]))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_7] [i_7]))) : (arr_8 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8707030723785886372LL)) ? (((/* implicit */int) (unsigned short)49689)) : (((/* implicit */int) var_8))))))))));
        }
    }
    for (int i_8 = 2; i_8 < 9; i_8 += 4) 
    {
        var_28 ^= ((/* implicit */_Bool) 11833618400923367181ULL);
        var_29 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-3327)), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_10))))))), (max((((/* implicit */unsigned long long int) var_1)), (((arr_19 [i_8] [i_8] [i_8]) >> (((((/* implicit */int) var_9)) - (9924)))))))));
        var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) var_0)), (arr_26 [i_8] [i_8]))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_8] [i_8] [i_8])) ? (3053835733157842192LL) : (((/* implicit */long long int) arr_20 [i_8] [i_8])))))))), (((long long int) arr_22 [i_8] [i_8 - 1]))));
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 1) 
    {
        var_31 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50105)) ? (((/* implicit */int) (unsigned short)21635)) : (((/* implicit */int) (unsigned char)127))))));
        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */int) arr_27 [i_9])) ^ (((/* implicit */int) var_6)))))));
    }
    for (short i_10 = 1; i_10 < 15; i_10 += 1) 
    {
        var_33 = ((/* implicit */unsigned long long int) min((var_33), (max((((/* implicit */unsigned long long int) min((max((var_5), (var_5))), (((/* implicit */unsigned short) var_8))))), (max((8410311570640612241ULL), (((/* implicit */unsigned long long int) arr_28 [i_10]))))))));
        var_34 += ((/* implicit */_Bool) (short)3336);
        var_35 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((_Bool) (~(((/* implicit */int) (unsigned char)255)))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_10]))) ^ (8410311570640612241ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_6)), (var_7))))))));
    }
    var_36 &= ((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-3352))))), (var_8)));
}

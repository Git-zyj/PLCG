/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157460
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
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) var_10)))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            arr_6 [i_1] [i_1] [i_0 - 1] = ((/* implicit */long long int) ((unsigned char) (-(((((/* implicit */_Bool) arr_3 [14U])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))))));
            /* LoopSeq 1 */
            for (long long int i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (~((-(-180011659))))))));
                var_21 += ((_Bool) -180011659);
                var_22 = ((max((((/* implicit */int) (unsigned short)7882)), ((-(-180011689))))) <= ((~((~(((/* implicit */int) var_8)))))));
            }
            arr_9 [i_1] [2ULL] [i_1] |= ((/* implicit */int) ((short) ((unsigned short) ((((var_11) + (2147483647))) >> (((((/* implicit */int) var_17)) + (13)))))));
            arr_10 [(_Bool)1] [i_1] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)6524)) ? (((/* implicit */int) var_2)) : (-1502631991))), ((+(((int) arr_2 [i_0] [i_0 - 2]))))));
        }
        for (signed char i_3 = 3; i_3 < 12; i_3 += 4) 
        {
            var_23 = ((/* implicit */_Bool) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) -180011662)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) -180011662)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7896))) : (8239379076079509919LL))))) & (((/* implicit */long long int) var_11))));
            var_24 = ((/* implicit */unsigned int) ((long long int) arr_8 [i_0] [9LL] [11ULL] [i_3]));
        }
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_5 = 3; i_5 < 12; i_5 += 1) 
            {
                var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)64598)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)62555)))))) / (arr_18 [i_0 - 1] [12LL] [i_0] [i_0])));
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_13 [i_5 - 3]))) + (min(((~(((/* implicit */int) (unsigned short)57654)))), (((/* implicit */int) min((var_10), ((unsigned short)57679))))))));
            }
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (-(((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3)))) / (min((var_9), (((/* implicit */long long int) var_10)))))))))));
                var_28 ^= ((/* implicit */int) ((min((((unsigned int) var_11)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [0U] [i_0] [i_0] [i_0 - 2])) ? (((/* implicit */int) arr_19 [i_0 + 1] [i_0] [i_0] [(unsigned short)8])) : (((/* implicit */int) var_5))))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
                /* LoopSeq 2 */
                for (unsigned short i_7 = 1; i_7 < 11; i_7 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */long long int) ((signed char) ((_Bool) max((((/* implicit */unsigned char) arr_15 [i_0] [(short)8] [i_6] [i_0])), (var_12)))));
                    var_30 = ((/* implicit */_Bool) 18446744073709551605ULL);
                    arr_25 [i_7] [i_4] = ((long long int) ((((/* implicit */_Bool) ((long long int) var_3))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */int) arr_15 [i_0 - 1] [i_0] [i_0] [i_0])) > (((/* implicit */int) var_8)))))));
                }
                /* vectorizable */
                for (unsigned short i_8 = 1; i_8 < 11; i_8 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */_Bool) arr_1 [i_4]);
                    arr_28 [i_8] = ((/* implicit */short) (~(939524096U)));
                }
            }
            var_32 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned int) (-(var_6))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57679))) ^ (3324031544913813764ULL))), (((/* implicit */unsigned long long int) arr_20 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
        }
    }
    var_33 = ((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_16))))), (var_0))));
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 19; i_9 += 3) 
    {
        for (signed char i_10 = 1; i_10 < 18; i_10 += 1) 
        {
            {
                var_34 = ((/* implicit */long long int) max((var_7), (((/* implicit */int) var_5))));
                var_35 = ((/* implicit */int) max((((/* implicit */long long int) (unsigned short)0)), (((((/* implicit */_Bool) 939524096U)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)7904)))) : (((long long int) (unsigned short)57679))))));
            }
        } 
    } 
    var_36 += ((/* implicit */_Bool) -1998112244);
    var_37 *= max((((/* implicit */unsigned char) ((((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) var_7))))) >= (var_6)))), (((unsigned char) ((((/* implicit */int) var_10)) - (((/* implicit */int) (unsigned short)6))))));
}

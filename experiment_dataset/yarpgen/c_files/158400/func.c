/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158400
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
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (~(var_3)))) : (((((/* implicit */unsigned long long int) 4294967290U)) + (var_7))))) - (((/* implicit */unsigned long long int) (~(var_9)))))))));
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) min((18446744073709551609ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (min((5U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))))))));
    var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_10)) : (10ULL))) > (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) var_11)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_1] [i_1 - 1]))))), ((-(arr_3 [i_0] [i_0] [i_1])))));
            arr_5 [i_0] [i_1 - 1] [i_1] = ((/* implicit */unsigned char) 16U);
            var_17 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)19299))) : (arr_4 [i_1 - 1])))));
            var_18 = ((/* implicit */unsigned long long int) (short)-10);
        }
        for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65522)) ? (((((/* implicit */_Bool) 909767466)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))) : (min((((/* implicit */unsigned int) (unsigned char)231)), (4294967289U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)222)))));
            var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (arr_1 [i_2 - 1])))) ? ((+(arr_1 [i_2 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_2 - 1]))))));
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_2] [i_2]))))) ? (((unsigned int) 17ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))));
        }
        for (unsigned char i_3 = 2; i_3 < 10; i_3 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) min((arr_3 [i_0] [i_3 - 1] [i_0]), (((/* implicit */long long int) arr_0 [i_0] [i_3 - 2]))));
            /* LoopSeq 3 */
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                var_22 = ((/* implicit */short) min((min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-6))))), (((var_3) >> (((/* implicit */int) arr_6 [i_0] [i_3])))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_3 + 1] [i_3 - 2] [i_3 + 1])) / (((/* implicit */int) ((unsigned char) arr_4 [i_4]))))))));
                var_23 = ((/* implicit */int) arr_12 [i_0] [(short)5] [i_0]);
                arr_13 [i_0] [i_0] = arr_2 [i_0];
            }
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_1 [i_3 + 1])))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) (unsigned char)125))))));
                var_25 = ((/* implicit */unsigned char) 7679534215293439958LL);
                var_26 = ((/* implicit */short) arr_14 [i_0]);
            }
            for (int i_6 = 2; i_6 < 9; i_6 += 1) 
            {
                arr_19 [5LL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned char)244)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_6] [i_0] [i_0])) ? (arr_18 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)123)))))) ? (2239159455U) : ((+(arr_18 [i_6])))))));
                var_27 = ((/* implicit */short) min((min((arr_0 [i_0] [i_6 + 1]), (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 18446744073709551608ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)19283))))) < (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned char)15))))))))));
                var_28 = ((/* implicit */short) arr_9 [i_0] [i_0] [i_0]);
            }
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (short)19297)) : (((/* implicit */int) (short)19291))));
            var_30 = ((/* implicit */unsigned short) ((((long long int) (_Bool)1)) | ((~(((((arr_4 [i_0]) + (9223372036854775807LL))) >> (((/* implicit */int) (unsigned char)6))))))));
        }
        for (unsigned char i_7 = 2; i_7 < 10; i_7 += 3) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) arr_12 [i_0] [4] [i_7 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)105)))) : (((((/* implicit */_Bool) (unsigned char)83)) ? (10U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70))))))));
            arr_23 [i_0] [i_7 - 2] [i_7 - 2] = ((/* implicit */unsigned char) (short)30819);
            var_32 = ((/* implicit */unsigned int) arr_0 [4ULL] [i_7 - 2]);
            arr_24 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1)))));
        }
        arr_25 [i_0] = ((/* implicit */short) (~(arr_3 [i_0] [i_0] [i_0])));
    }
    for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
    {
        /* LoopSeq 4 */
        for (long long int i_9 = 4; i_9 < 13; i_9 += 3) 
        {
            var_33 = ((((unsigned long long int) var_4)) >= (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned char)229))))))));
            var_34 = ((/* implicit */unsigned char) (~(((long long int) ((((/* implicit */int) (signed char)125)) | (((/* implicit */int) (short)32750)))))));
            arr_32 [i_8] [i_9] [i_8] = ((/* implicit */short) (unsigned char)23);
        }
        for (short i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 4294967294U)) + (140737488351232ULL)));
            var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) (short)-19286))));
            var_37 = ((/* implicit */unsigned char) ((1717955221U) != (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)209)))))));
        }
        for (short i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((9223372036854775807LL) ^ (((/* implicit */long long int) min((arr_34 [i_8] [i_11] [i_8]), (((/* implicit */unsigned int) (_Bool)1)))))))), (((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)230)), ((short)-15441)))) ? (arr_35 [i_11] [i_11] [i_11]) : (((/* implicit */unsigned long long int) var_6)))))))));
            arr_38 [i_8] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((1140562880U) >= (((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_8] [i_8]))) : (2577012071U)))))), (arr_29 [i_11] [i_11])));
        }
        for (long long int i_12 = 3; i_12 < 14; i_12 += 2) 
        {
            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)198)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) (short)32766)) : (((/* implicit */int) (unsigned char)204))))) : (max((18446744073709551613ULL), (0ULL)))))) ? (((long long int) min(((unsigned char)37), ((unsigned char)54)))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)248)), (var_4)))))))));
            var_40 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)113))));
        }
        /* LoopSeq 3 */
        for (unsigned short i_13 = 1; i_13 < 14; i_13 += 3) 
        {
            var_41 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_11)))))), (max((((/* implicit */unsigned long long int) arr_34 [i_13 - 1] [i_8] [i_13 + 1])), (arr_35 [i_13 + 1] [i_13 - 1] [i_13 + 2])))));
            /* LoopSeq 1 */
            for (short i_14 = 0; i_14 < 16; i_14 += 2) 
            {
                var_42 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) ((short) (unsigned short)3586))) : (((/* implicit */int) (short)-1))));
                var_43 = ((/* implicit */unsigned long long int) ((short) (~(arr_31 [i_13 - 1] [i_13 + 2]))));
            }
        }
        for (long long int i_15 = 0; i_15 < 16; i_15 += 1) 
        {
            arr_47 [i_8] [i_15] = ((/* implicit */unsigned char) max((arr_30 [i_8] [i_8] [i_8]), (((((/* implicit */_Bool) (~(2577012073U)))) ? (((((/* implicit */_Bool) arr_36 [i_8] [i_8])) ? (arr_30 [i_8] [i_15] [i_15]) : (((/* implicit */unsigned long long int) 980118289)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_26 [i_8]), (arr_41 [i_8] [i_8] [i_15])))))))));
            var_44 = ((/* implicit */signed char) 3313816841U);
            var_45 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)189)) << (((((((/* implicit */int) var_8)) + (32091))) - (10)))))) ? (max((arr_31 [i_8] [i_15]), (arr_28 [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_8] [i_15]))))))));
        }
        for (unsigned long long int i_16 = 4; i_16 < 14; i_16 += 4) 
        {
            var_46 = ((((/* implicit */unsigned long long int) ((/* implicit */int) min((max((((/* implicit */unsigned short) (signed char)107)), ((unsigned short)61940))), (((/* implicit */unsigned short) max(((short)-28327), (((/* implicit */short) arr_26 [i_8]))))))))) * (14216326695347866040ULL));
            arr_51 [i_8] [i_8] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) 2898902791U))));
            var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */int) (signed char)102)) : ((~(((/* implicit */int) (unsigned char)18))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 446266526U)) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) (unsigned short)511))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_8] [i_16 + 2] [i_16 + 1]))) | (arr_42 [i_8] [i_8] [i_8]))))) : (((/* implicit */unsigned long long int) 4294967280U))));
        }
        arr_52 [15LL] [i_8] = arr_34 [i_8] [i_8] [i_8];
        var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)235)) * (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_30 [(signed char)9] [i_8] [i_8]) * (arr_48 [i_8])))))))));
    }
    for (long long int i_17 = 1; i_17 < 21; i_17 += 3) 
    {
        arr_56 [i_17] = ((/* implicit */unsigned char) (~(10123538561539978658ULL)));
        var_49 = (unsigned char)84;
    }
}

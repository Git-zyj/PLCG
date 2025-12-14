/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101419
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
    var_16 = ((/* implicit */int) ((short) (((!(((/* implicit */_Bool) var_8)))) ? ((-(-2147483632))) : (var_8))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_17 *= ((/* implicit */int) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [3U])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min(((unsigned short)25863), ((unsigned short)62268))))))), (max((min((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (arr_0 [i_0] [(unsigned short)8]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [(short)8] [(short)8])))))))));
        var_18 = ((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [(_Bool)1]) : (-162733512))))), (((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) var_4))), (((unsigned char) arr_0 [4LL] [i_0])))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
    {
        var_19 += ((/* implicit */short) ((unsigned short) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0ULL))))), (((unsigned short) 17609444613893977783ULL)))));
        arr_5 [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)32111)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (unsigned short)3267)))), (((/* implicit */int) (!(((/* implicit */_Bool) -84799094)))))));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)32114))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_1] [i_2]))))), (((((/* implicit */_Bool) 1690987125)) ? (max((12312051998148476183ULL), (((/* implicit */unsigned long long int) (short)21795)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                var_21 *= arr_9 [i_1] [i_1];
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (unsigned short i_5 = 4; i_5 < 21; i_5 += 1) 
                    {
                        {
                            arr_17 [i_5] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */signed char) var_10);
                            var_22 = ((unsigned long long int) (signed char)-2);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        {
                            arr_24 [i_6] [i_2] [i_3] [i_2] [i_7] [i_7] [i_7] = min((((unsigned int) (signed char)0)), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_2] [(unsigned short)18])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_20 [15] [i_2] [21] [i_2]))) > (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_3)))))))));
                            arr_25 [i_1] [i_2] [i_1] [(unsigned short)15] [i_3] = (~(var_12));
                            arr_26 [i_2] = (-(((/* implicit */int) ((unsigned char) ((signed char) (short)16091)))));
                        }
                    } 
                } 
            }
            for (int i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
                {
                    var_23 *= ((/* implicit */unsigned char) var_15);
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_7)))))) : (((/* implicit */int) (signed char)27))));
                }
                for (short i_10 = 0; i_10 < 22; i_10 += 3) /* same iter space */
                {
                    var_25 = ((/* implicit */short) var_9);
                    var_26 = ((/* implicit */unsigned short) min((((arr_19 [i_1] [i_2] [i_8] [11ULL]) ? ((~(arr_10 [i_8]))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) var_14))));
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_2] [(_Bool)1] [i_2]))))) ? (((((/* implicit */_Bool) arr_12 [(unsigned short)4] [i_2] [i_2])) ? (((/* implicit */int) arr_12 [i_2] [i_8] [i_2])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_10] [i_2] [i_2])))))));
                }
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) min((((/* implicit */short) var_0)), (arr_12 [i_2] [i_2] [i_2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [(unsigned short)5] [(unsigned short)5])) : (((/* implicit */int) arr_19 [16ULL] [i_2] [i_1] [i_1]))))) ? ((+(((/* implicit */int) arr_13 [i_8] [i_8] [i_2] [i_1])))) : ((~(((/* implicit */int) arr_12 [i_2] [i_2] [i_2]))))))) : (max((((((/* implicit */_Bool) var_3)) ? (arr_20 [i_8] [i_8] [(unsigned char)20] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) (_Bool)1))))));
                var_29 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((var_12), (((((((/* implicit */int) var_1)) + (2147483647))) << (((var_12) - (993806226)))))))), (((((/* implicit */_Bool) ((unsigned short) arr_32 [i_1] [i_2] [i_2] [i_2] [(signed char)3] [i_8]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [0U] [i_2] [i_2] [i_2] [i_2] [(unsigned char)21])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4))))) : (var_11)))));
                arr_33 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) max((arr_29 [i_2] [i_2] [i_2]), (((/* implicit */unsigned short) var_6))))) : (((((/* implicit */int) var_7)) << (((var_10) - (1368658948U))))))), ((~(((/* implicit */int) (signed char)20))))));
            }
            /* vectorizable */
            for (unsigned short i_11 = 2; i_11 < 21; i_11 += 1) 
            {
                arr_37 [i_11] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_11] [i_2])) ? (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [(signed char)3] [i_2] [i_11 - 2])) : (((arr_19 [i_11 - 1] [i_11 - 1] [(_Bool)1] [(unsigned short)18]) ? (var_9) : (((/* implicit */int) var_13))))));
                arr_38 [i_2] [i_1] [(signed char)17] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (short)21795))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) var_4))));
                var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_11 - 2] [i_11 - 1] [i_11 - 2] [i_11 - 2]))));
            }
            arr_39 [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)7751));
        }
    }
    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 3) /* same iter space */
    {
        arr_43 [0ULL] = ((/* implicit */short) max((((unsigned short) ((((/* implicit */_Bool) arr_28 [i_12] [i_12])) && (((/* implicit */_Bool) var_3))))), (((/* implicit */unsigned short) ((_Bool) min((13267452543547517746ULL), (((/* implicit */unsigned long long int) var_7))))))));
        arr_44 [i_12] = ((/* implicit */long long int) max(((-(143552238122434560ULL))), (((/* implicit */unsigned long long int) ((unsigned short) max((var_5), (((/* implicit */short) var_6))))))));
        arr_45 [i_12] = ((/* implicit */int) max(((~(((((/* implicit */_Bool) 1410971756)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34896))) : (1259517414U))))), (((/* implicit */unsigned int) min((arr_16 [i_12] [i_12] [i_12] [i_12] [i_12]), (arr_31 [i_12] [i_12] [(unsigned char)15]))))));
    }
}

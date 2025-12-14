/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11765
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
    var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_5)), (min((min((4818835578717100959ULL), (((/* implicit */unsigned long long int) 2659326134U)))), (((/* implicit */unsigned long long int) var_2))))));
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) 2147483634)) : (var_2))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2227145135788617000LL)) || (((/* implicit */_Bool) 5183093769011653690LL))))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */_Bool) max((8103780497761556838LL), (((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (max((((/* implicit */long long int) 261341841U)), (673994885271317791LL))) : (((((/* implicit */_Bool) 50331648U)) ? (((/* implicit */long long int) 2659326134U)) : (-1LL)))))));
                    arr_7 [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (max((arr_0 [i_0 + 1]), (((/* implicit */long long int) arr_2 [i_1] [i_2])))));
                    arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((2108371676932326433LL), (((/* implicit */long long int) 242174152))))) ? (max((min((((/* implicit */long long int) (short)31744)), (arr_1 [i_1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 4294967291U))))))) : (max((((((/* implicit */_Bool) -1406678689235333745LL)) ? (((/* implicit */long long int) var_17)) : (var_3))), (arr_6 [i_0] [i_0])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_5 [i_3] [i_2] [i_1] [i_0]))));
                        var_23 -= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) var_10)) == (var_3))) ? (((8053063680LL) & (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (var_13)));
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (10523874993203922727ULL))))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((short) arr_6 [i_0 - 1] [i_0]));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_4 = 3; i_4 < 8; i_4 += 3) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned short) var_9);
        arr_16 [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -1666511658)) == (13617656863632658921ULL)));
        var_25 = ((/* implicit */short) arr_0 [i_4]);
        var_26 = ((/* implicit */long long int) var_14);
        arr_17 [i_4] = ((/* implicit */long long int) ((unsigned int) (unsigned short)7882));
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 3) 
    {
        var_27 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) max((arr_3 [i_5] [i_5 - 1] [i_5 + 1]), (arr_3 [i_5] [i_5 - 2] [i_5 + 1])))), (arr_4 [i_5] [i_5])));
        arr_21 [i_5] [i_5] = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) 264241152LL)))))), (var_5)));
        var_28 -= ((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5] [i_5]);
    }
    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_7 = 2; i_7 < 9; i_7 += 3) 
        {
            var_29 = ((/* implicit */signed char) ((long long int) ((int) arr_20 [i_7 - 2] [i_7 - 2])));
            var_30 = ((/* implicit */int) max((var_30), ((+(((/* implicit */int) min((arr_19 [i_6]), (arr_19 [i_6]))))))));
            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((-8053063692LL), (arr_11 [i_6] [i_7] [i_7] [i_7]))), (arr_18 [i_6] [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))))) : (min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_10)), (var_7)))), (max((arr_6 [i_6] [i_7]), (((/* implicit */long long int) arr_24 [i_6] [i_7])))))))))));
        }
        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            var_32 += ((/* implicit */unsigned char) arr_20 [i_6] [i_8]);
            /* LoopSeq 1 */
            for (unsigned char i_9 = 2; i_9 < 7; i_9 += 3) 
            {
                var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((_Bool) (-(((((/* implicit */unsigned long long int) var_8)) | (11308604878544936005ULL)))))))));
                arr_32 [i_9] [i_9] [i_8] [i_6] = ((/* implicit */unsigned int) (_Bool)0);
            }
            var_34 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) 1816605979U))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_27 [i_6] [i_6] [i_8])), (arr_29 [i_6] [i_8] [i_8])))) ? (((/* implicit */int) ((_Bool) 4294967295U))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61444)))))))));
            arr_33 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((long long int) var_10))) : (((((/* implicit */_Bool) arr_26 [i_6])) ? (max((11308604878544936005ULL), (((/* implicit */unsigned long long int) arr_1 [i_6])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
            var_35 = ((/* implicit */unsigned long long int) max((var_35), ((+(((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)25807))) ? (((arr_23 [i_8] [i_6]) ? (arr_30 [i_6] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3244))))) : (min((((/* implicit */unsigned long long int) var_5)), (var_14)))))))));
        }
        var_36 += ((/* implicit */unsigned short) 67108863);
        arr_34 [i_6] [i_6] = 4818835578717100967ULL;
    }
    for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
    {
        var_37 -= ((/* implicit */unsigned long long int) arr_36 [i_10] [i_10]);
        var_38 = ((/* implicit */long long int) max((var_9), (((unsigned char) ((((/* implicit */_Bool) 8070450532247928832ULL)) || (((/* implicit */_Bool) 2227145135788617000LL)))))));
        arr_37 [i_10] = ((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 6560820600478821868LL))));
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (long long int i_12 = 3; i_12 < 20; i_12 += 3) 
            {
                {
                    var_39 = ((/* implicit */unsigned int) var_4);
                    var_40 = ((/* implicit */long long int) max((var_40), (var_8)));
                    var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_10] [i_11] [18ULL])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_42 [(signed char)16])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31940)))))))))))));
                    var_42 += ((/* implicit */unsigned int) ((3449413971724479716LL) / (1151795604700004352LL)));
                }
            } 
        } 
    }
}

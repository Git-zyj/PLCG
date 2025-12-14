/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181482
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
    var_12 = ((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) 19U))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) (~(((min((arr_2 [i_0]), (((/* implicit */int) (unsigned char)16)))) + (((/* implicit */int) arr_0 [i_1]))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] = ((/* implicit */unsigned char) ((min((arr_8 [i_0] [i_3 - 1]), (arr_8 [i_0] [i_0]))) ^ ((~(((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))) & (-1LL)))))));
                            arr_13 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_10 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-32744)) - (-1)))) : (arr_10 [i_0] [i_0])));
                        }
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (short)-32744)) ? (-1LL) : (((/* implicit */long long int) 1268653148U)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_18 [11ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4])))))) ? (arr_18 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_17 [i_4] [(short)13])) < (((/* implicit */int) arr_9 [(unsigned char)0] [i_4] [i_4]))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_6 = 4; i_6 < 15; i_6 += 3) 
            {
                var_14 = ((/* implicit */short) arr_17 [i_5 - 1] [i_6]);
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (short)32759)) : (((/* implicit */int) (unsigned short)50128)))))));
                arr_24 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((int) (unsigned short)48815));
            }
            for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_8))) ? (-508627529036096389LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5] [i_5] [i_4])))));
                var_17 = arr_9 [i_5 - 1] [i_5 + 1] [i_4];
            }
            arr_28 [i_4] [i_4] = ((signed char) arr_9 [i_5] [i_5 - 1] [i_4]);
            var_18 *= ((/* implicit */unsigned long long int) 1107397209U);
        }
        for (long long int i_8 = 1; i_8 < 16; i_8 += 3) 
        {
            arr_32 [i_8] [(unsigned short)6] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_6 [i_8] [i_8 + 1]) : (arr_6 [i_8] [i_8 + 1])));
            /* LoopSeq 2 */
            for (unsigned char i_9 = 3; i_9 < 15; i_9 += 2) 
            {
                var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)15408))))) ? (((/* implicit */int) arr_35 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) (short)-14827))));
                arr_37 [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
            }
            for (int i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                var_20 = ((/* implicit */signed char) 1364232588U);
                arr_40 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_8 + 1])) && (((/* implicit */_Bool) -6362001285075901578LL))));
            }
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_4] [(unsigned char)14] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))) : (arr_22 [i_4] [15ULL] [i_4])));
        }
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1268653148U)) ? (3LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_36 [(short)5] [(short)5] [i_4] [i_4])) ^ (((/* implicit */int) arr_36 [i_4] [i_4] [(unsigned char)14] [i_4]))));
        arr_41 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_8 [i_4] [i_4]))));
    }
    for (long long int i_11 = 0; i_11 < 23; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 23; i_12 += 1) 
        {
            for (int i_13 = 1; i_13 < 20; i_13 += 3) 
            {
                {
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_45 [i_11] [i_12] [i_12])) ? (((((/* implicit */int) arr_44 [i_13 + 1])) << (((/* implicit */int) arr_44 [i_13 - 1])))) : (((((/* implicit */int) (unsigned short)27603)) % (min((68692501), (((/* implicit */int) (unsigned char)245))))))));
                    arr_50 [i_12] [i_12] [i_13 - 1] [i_12] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)23738)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-32765))))) : ((+(var_3))))));
                }
            } 
        } 
        arr_51 [i_11] = ((/* implicit */int) (~(arr_45 [i_11] [(unsigned short)20] [(_Bool)1])));
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_46 [i_11] [i_11] [i_11]))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_11])) ? (((/* implicit */int) (unsigned short)37933)) : (980705739)))) - ((~(-13186236935032298LL))))) : (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)112))))))))));
        var_26 += ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 17338011122430842011ULL))))), (var_0))))));
    }
    var_27 |= ((/* implicit */unsigned long long int) (+(1903640445)));
}

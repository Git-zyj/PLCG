/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148238
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                for (int i_3 = 1; i_3 < 21; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1697039691U)) && (((/* implicit */_Bool) 2597927621U)))))) / (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [15]))) ^ (2652136845U))))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)4))))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)784)) : (((/* implicit */int) arr_2 [i_1] [i_4])))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) (signed char)20)))))))));
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [16] [i_2] [i_1]))) : (var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)25826), (((/* implicit */unsigned short) arr_8 [i_4])))))) : (var_11)))) ? (((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0]))) * (2597927610U)))))) : (((((-1965306517977938986LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)39686)) - (39645)))))));
                        }
                        var_15 = ((/* implicit */unsigned char) (short)-784);
                        var_16 = ((/* implicit */unsigned char) (((~(min((((/* implicit */long long int) var_6)), (var_12))))) >> (((((((/* implicit */long long int) (~(((/* implicit */int) var_0))))) | (((arr_3 [i_0 - 1]) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))) + (50LL)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) (-((((+(((/* implicit */int) arr_10 [i_0 + 2] [i_0 + 2] [i_5] [i_0 + 2])))) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_6])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_5) << (((((/* implicit */int) var_2)) - (1488))))) & (arr_20 [i_0] [i_5] [i_6])))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_5 [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [20U] [i_5] [i_6]))) : (2996593502U)))))) : (((min((var_11), (arr_1 [(short)11] [i_6]))) + (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)25831)) / (((/* implicit */int) (signed char)71))))))))))));
                }
            } 
        } 
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_8 = 2; i_8 < 19; i_8 += 3) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)39709)) ? (arr_20 [(unsigned char)19] [(unsigned char)19] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(signed char)10] [i_8])))))))) & ((~(min((1965306517977938986LL), (((/* implicit */long long int) arr_7 [i_8]))))))));
                    var_20 *= ((/* implicit */unsigned char) 73680659);
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned short) ((arr_15 [(short)14] [i_7] [i_7] [(short)14] [i_7]) << (((/* implicit */int) ((((/* implicit */long long int) arr_15 [i_7] [i_7] [i_7] [i_7] [i_7])) <= (min((var_11), (((/* implicit */long long int) var_3)))))))));
    }
    for (unsigned char i_10 = 1; i_10 < 24; i_10 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            for (int i_12 = 2; i_12 < 22; i_12 += 1) 
            {
                for (unsigned short i_13 = 0; i_13 < 25; i_13 += 1) 
                {
                    {
                        var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_32 [i_10])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : ((+(((/* implicit */int) (unsigned short)25826)))))) == ((-(((((/* implicit */int) (unsigned short)39710)) << (((((((/* implicit */int) (short)-1322)) + (1339))) - (12)))))))));
                        var_23 = 708048622U;
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_32 [i_10 - 1]))))));
        var_25 = ((/* implicit */signed char) (+((-(((((/* implicit */_Bool) (short)-790)) ? (((/* implicit */int) (short)-24986)) : (((/* implicit */int) (short)-790))))))));
        /* LoopNest 2 */
        for (unsigned int i_14 = 0; i_14 < 25; i_14 += 4) 
        {
            for (unsigned short i_15 = 3; i_15 < 22; i_15 += 3) 
            {
                {
                    var_26 = (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)49152)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) arr_28 [i_10] [i_15 - 3]))))));
                    var_27 = ((/* implicit */unsigned int) var_1);
                    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_34 [i_10 - 1] [i_15 + 2])) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) (short)24965)))) * (((((/* implicit */int) var_0)) * (((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : ((+(arr_32 [i_10])))))));
                    var_29 = ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) (signed char)-64)) ? (3987417309U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)82))))) * (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))))));
                }
            } 
        } 
    }
    for (unsigned int i_16 = 0; i_16 < 23; i_16 += 2) 
    {
        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-77)), (arr_39 [i_16])))), ((~(var_12))))) : (((/* implicit */long long int) (~(max((arr_39 [i_16]), (((/* implicit */unsigned int) (short)-768))))))))))));
        /* LoopNest 2 */
        for (short i_17 = 0; i_17 < 23; i_17 += 2) 
        {
            for (unsigned short i_18 = 0; i_18 < 23; i_18 += 1) 
            {
                {
                    arr_52 [i_16] [i_17] [i_18] [(unsigned char)11] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)31837)) >> ((((~(((/* implicit */int) arr_47 [i_18])))) + (39474)))));
                    arr_53 [i_18] [i_17] [i_17] [i_16] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-31837))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_19 = 2; i_19 < 21; i_19 += 4) 
                    {
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_17] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (4294967290U)))) ? (((var_11) / (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_18] [i_17] [i_16]))))))));
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_54 [i_16] [i_16] [i_16] [i_16] [i_16]) : (((/* implicit */int) arr_28 [i_16] [i_16]))))) || (((/* implicit */_Bool) 1965306517977938993LL)))))));
                        var_33 -= ((/* implicit */unsigned int) arr_44 [i_17] [i_17] [i_17]);
                        var_34 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)16)) ? (5187859603782901042LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65533)))));
                        arr_56 [i_16] [i_17] [i_18] [i_16] [i_17] [i_16] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                    }
                    for (short i_20 = 0; i_20 < 23; i_20 += 3) 
                    {
                        var_35 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3268518787U)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) arr_51 [i_16] [i_17] [i_18] [i_18]))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) arr_47 [i_16])))))))) + (((/* implicit */int) ((((/* implicit */int) arr_28 [i_16] [i_17])) >= (((((/* implicit */int) arr_47 [(short)18])) << (((((/* implicit */int) var_3)) - (28047))))))))));
                        arr_61 [i_20] [i_18] [i_17] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_39 [i_17])) ^ ((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-10))) : (-4294967296LL)))))));
                        arr_62 [i_16] [i_17] [18U] [i_20] = ((max((1498800183U), (max((((/* implicit */unsigned int) arr_45 [i_16] [i_17])), (var_8))))) * (((/* implicit */unsigned int) ((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_10)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_21 = 2; i_21 < 20; i_21 += 2) 
                    {
                        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) (unsigned char)211))));
                        var_37 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-17))));
                    }
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_22 = 3; i_22 < 19; i_22 += 3) 
    {
        for (unsigned long long int i_23 = 1; i_23 < 20; i_23 += 4) 
        {
            {
                arr_70 [i_22] [19U] [i_23] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)25450))));
                /* LoopNest 2 */
                for (long long int i_24 = 0; i_24 < 22; i_24 += 3) 
                {
                    for (signed char i_25 = 1; i_25 < 21; i_25 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_25] [i_23] [i_23]))) - (((((/* implicit */_Bool) var_5)) ? (3534171151U) : (var_8))))) + (((/* implicit */unsigned int) ((max((((/* implicit */int) (_Bool)1)), (arr_57 [i_23]))) * (((((/* implicit */_Bool) arr_30 [i_22] [i_22 - 1])) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (short)-25450)))))))));
                            var_39 = (~(min((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) << (((arr_30 [i_22 - 1] [i_22 - 1]) - (38085719U)))))), ((~(var_8))))));
                            arr_75 [i_25] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-11)) + (2147483647))) >> (((((/* implicit */int) (short)11336)) - (11308)))))) ? ((+(var_12))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)50567)) * (((/* implicit */int) (signed char)29))))))) >= (((/* implicit */long long int) (-((~(((/* implicit */int) (_Bool)0)))))))));
                            var_40 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_22 [i_23])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_59 [i_22] [i_23] [i_23] [i_25]))) << (((arr_15 [i_22 - 1] [i_23 - 1] [i_24] [i_22 - 1] [i_25]) - (3507646970U)))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */unsigned int) max((arr_24 [i_22] [(unsigned short)10] [i_23 + 2]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_23] [i_23] [i_22] [i_23] [i_23])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3757441852U)))) ? (max((((/* implicit */long long int) 4199049758U)), (arr_17 [i_22]))) : (((/* implicit */long long int) (~(16256))))))));
            }
        } 
    } 
    var_42 |= ((/* implicit */signed char) max(((unsigned short)16220), (((/* implicit */unsigned short) (_Bool)1))));
}

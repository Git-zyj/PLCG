/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143744
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
    var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min(((_Bool)1), (var_7)))) : (((((/* implicit */int) var_10)) * (((/* implicit */int) var_7))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [10LL] [i_2])) ? (((/* implicit */int) arr_2 [5LL] [i_1])) : (((/* implicit */int) arr_8 [14ULL] [i_3] [i_0] [i_0] [2] [i_0]))))) ? (((/* implicit */int) (short)16200)) : (((((/* implicit */int) arr_9 [i_0] [i_0] [2U] [(_Bool)1] [i_3] [i_3])) << (((((/* implicit */int) arr_6 [17] [i_1] [i_2])) + (59))))))) % ((~((+(((/* implicit */int) (_Bool)1))))))));
                        var_21 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1])) + (((/* implicit */int) min((arr_3 [i_0] [i_1]), (((/* implicit */unsigned short) arr_8 [(_Bool)1] [i_3] [i_2] [i_2] [i_1] [i_0])))))));
                        arr_11 [i_1] [i_2] [i_1] [i_0] = ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]);
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [i_4] [i_4] [i_2] [i_4] [(_Bool)1] = (i_4 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [i_4] [i_1] [i_2] [i_2])) ? (((((((/* implicit */int) (short)-15263)) + (2147483647))) << (((/* implicit */int) arr_13 [i_4] [8U] [i_4] [i_3] [(_Bool)1] [(unsigned short)3])))) : (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_2] [i_2] [17] [i_4])))) == (((arr_1 [i_1] [i_2]) << (((arr_13 [i_4] [i_0] [i_1] [i_2] [i_2] [i_2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_2]))))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [i_4] [i_1] [i_2] [i_2])) ? (((((((/* implicit */int) (short)-15263)) + (2147483647))) << (((((/* implicit */int) arr_13 [i_4] [8U] [i_4] [i_3] [(_Bool)1] [(unsigned short)3])) - (1))))) : (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_2] [i_2] [17] [i_4])))) == (((arr_1 [i_1] [i_2]) << (((arr_13 [i_4] [i_0] [i_1] [i_2] [i_2] [i_2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_2])))))))));
                            arr_16 [i_0] [i_0] [i_4] [i_0] [i_4] [i_4 - 1] [i_0] = ((/* implicit */long long int) 1490264687);
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (((-(((/* implicit */int) max(((short)32754), (((/* implicit */short) (_Bool)1))))))) != (((arr_13 [i_3] [i_1] [i_1] [i_2] [i_3] [i_1]) ? ((~(((/* implicit */int) arr_13 [i_3] [i_1] [i_3] [10LL] [18LL] [i_1])))) : (((((/* implicit */int) (unsigned short)38353)) >> (((/* implicit */int) arr_2 [i_0] [i_0])))))))))));
                        }
                        arr_17 [i_2] [i_3] &= ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)18744)))) < (((((/* implicit */_Bool) arr_7 [i_0] [i_3] [i_2])) ? (arr_14 [i_0] [i_0] [i_1] [4U] [i_1] [12] [i_3]) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_3]))))));
                    }
                } 
            } 
            arr_18 [i_0] [i_1] [i_1] = ((/* implicit */int) ((192394659U) << (((((/* implicit */int) (short)-16195)) + (16226)))));
        }
        /* vectorizable */
        for (unsigned short i_5 = 1; i_5 < 17; i_5 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) (((((_Bool)1) ? (-1094954675) : (((/* implicit */int) (short)16200)))) <= ((~(((/* implicit */int) (unsigned char)255))))));
            arr_22 [i_5] [(_Bool)1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)255)) - (arr_14 [i_5 + 3] [i_5] [i_5] [i_5] [(short)3] [i_5 - 1] [i_5 - 1])));
        }
        arr_23 [i_0] [(_Bool)1] = ((/* implicit */int) (~(((long long int) 18446744073709551609ULL))));
        arr_24 [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (10418821136959243035ULL));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
        var_25 ^= ((_Bool) min((8016256187933513862ULL), (((/* implicit */unsigned long long int) arr_20 [i_6] [(unsigned char)19]))));
        var_26 = (~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) arr_3 [(_Bool)1] [i_6]))))) ? ((~(((/* implicit */int) arr_7 [(unsigned short)14] [i_6] [0U])))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)33)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 4; i_8 < 18; i_8 += 1) 
            {
                {
                    arr_33 [(_Bool)0] [i_6] = ((/* implicit */unsigned short) (~(686443115)));
                    arr_34 [i_6] [i_6] [i_8] = ((/* implicit */unsigned short) arr_13 [i_6] [i_7] [i_7] [14] [i_6] [i_6]);
                }
            } 
        } 
    }
    var_27 = (~(((/* implicit */int) (_Bool)1)));
    var_28 = ((/* implicit */int) ((((((/* implicit */int) var_7)) != ((~(((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (max((min((var_11), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) -562432943))))));
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 1689530615)) | (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) 562432951)) : (var_18)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_18)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
}

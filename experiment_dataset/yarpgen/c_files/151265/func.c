/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151265
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                            {
                                var_19 = ((/* implicit */signed char) (((~(((/* implicit */int) (unsigned char)255)))) != ((-(((/* implicit */int) var_14))))));
                                arr_13 [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)253)) != (((/* implicit */int) var_13)))))));
                                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)249)) + (((/* implicit */int) (unsigned char)40)))) - ((-(((/* implicit */int) (unsigned char)253))))));
                            }
                            arr_15 [i_1] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)23)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) (unsigned char)232)))))) : (((unsigned int) (short)-30959)))) > (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)233)) >> (((((/* implicit */int) (unsigned short)41506)) - (41506))))) & (((/* implicit */int) ((short) var_15)))))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) (!(var_16)))) - (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */int) var_13)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (short)-11855)))))))))))));
                            arr_16 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((long long int) (_Bool)1))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) (unsigned char)23);
                var_22 = ((/* implicit */unsigned char) max((var_22), (var_18)));
                arr_17 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-28440)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (((((~(((((/* implicit */_Bool) 578252381747816085LL)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (unsigned char)242)))))) + (2147483647))) << (((((((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) (signed char)105)))) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)6208)) < (((/* implicit */int) (signed char)121)))))))) - (3452617926U)))));
    var_24 = ((/* implicit */int) (((~((~(((/* implicit */int) (short)-28452)))))) < (((((/* implicit */int) ((((/* implicit */long long int) var_10)) >= (8093914514988915399LL)))) % (((/* implicit */int) ((short) (short)-18385)))))));
    /* LoopSeq 2 */
    for (unsigned int i_5 = 4; i_5 < 12; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_6 = 2; i_6 < 13; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    {
                        arr_27 [i_5] [i_5] = ((/* implicit */int) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)28439)) ? (((/* implicit */int) (short)-2)) : (((/* implicit */int) (short)4346))))), (((((/* implicit */long long int) ((/* implicit */int) var_16))) % (var_6))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (short)32766)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (short)17952))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (var_16)))))))));
                        var_25 |= ((/* implicit */short) (+(((/* implicit */int) (short)17952))));
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)6648))));
                            var_27 = ((/* implicit */unsigned char) ((long long int) (_Bool)1));
                        }
                        var_28 |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)-13))))) : (var_6)))));
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) max((min(((short)14), (((/* implicit */short) (unsigned char)125)))), (((/* implicit */short) ((((((/* implicit */int) var_0)) >> (((/* implicit */int) var_15)))) != (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 4146306108U)))))))))))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */_Bool) var_11);
        arr_32 [i_5] = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
        var_31 = ((/* implicit */signed char) ((((((((/* implicit */int) (short)11854)) + (((/* implicit */int) var_0)))) % ((+(((/* implicit */int) (short)28439)))))) / ((~(-499525926)))));
        var_32 += ((/* implicit */unsigned char) ((((/* implicit */int) ((var_16) || (((/* implicit */_Bool) ((unsigned char) var_8)))))) != ((-(((/* implicit */int) min((var_3), ((unsigned char)130))))))));
    }
    for (short i_10 = 0; i_10 < 25; i_10 += 4) 
    {
        var_33 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)92)) | (((/* implicit */int) var_2))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11)) ? (((/* implicit */int) (short)-6)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */int) var_9)) % (((/* implicit */int) (short)-28439)))) : (((/* implicit */int) ((7193621067043890134LL) < (((/* implicit */long long int) ((/* implicit */int) (short)-28439)))))))))));
        arr_36 [i_10] [i_10] = ((/* implicit */unsigned char) -5962317545313581073LL);
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_11 = 0; i_11 < 25; i_11 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_12 = 0; i_12 < 25; i_12 += 4) 
            {
                arr_43 [i_12] [i_11] &= ((/* implicit */long long int) (short)28429);
                var_34 = ((/* implicit */long long int) (!(var_15)));
            }
            var_35 &= ((/* implicit */long long int) (((!((_Bool)1))) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((-2147483647) - (-2147483619))) + (36))))))));
        }
        /* vectorizable */
        for (short i_13 = 0; i_13 < 25; i_13 += 3) 
        {
            var_36 = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((/* implicit */int) (_Bool)1))));
            var_37 = ((/* implicit */unsigned char) var_0);
            /* LoopNest 2 */
            for (unsigned char i_14 = 1; i_14 < 23; i_14 += 3) 
            {
                for (unsigned short i_15 = 0; i_15 < 25; i_15 += 2) 
                {
                    {
                        var_38 = ((/* implicit */short) ((((((/* implicit */long long int) var_11)) - (-6879014900418307853LL))) < (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)253)))))));
                        var_39 = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)129)) & (((/* implicit */int) (unsigned short)27214)))) & ((~(((/* implicit */int) var_1))))));
                    }
                } 
            } 
            var_40 = ((/* implicit */unsigned short) (short)32764);
        }
    }
}

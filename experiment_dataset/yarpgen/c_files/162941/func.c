/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162941
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = (~(((((/* implicit */_Bool) -2147483636)) ? (808660021) : (((/* implicit */int) (short)32719)))));
        var_16 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (short)13380)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)7614)))))))) + ((~(((/* implicit */int) (short)13380))))));
    }
    for (short i_1 = 2; i_1 < 7; i_1 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (short)-7)) < (((/* implicit */int) (short)-25656))))) << (((((/* implicit */int) arr_5 [i_1 + 3] [i_1 + 1])) + (25342)))));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                var_18 = ((/* implicit */short) ((((/* implicit */int) (short)0)) - (((/* implicit */int) (short)-21056))));
                var_19 ^= ((/* implicit */short) (~(((/* implicit */int) (short)13380))));
            }
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (short i_5 = 2; i_5 < 7; i_5 += 1) 
            {
                var_20 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (short)-32767)) != (var_14))))));
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    for (int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (+(((/* implicit */int) var_11)))))));
                            var_22 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_7]))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                        }
                    } 
                } 
            }
            for (short i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (714426929) : (((/* implicit */int) var_4))));
                var_24 = ((/* implicit */short) min((var_24), ((short)-9602)));
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((-170990616) & (((/* implicit */int) (short)(-32767 - 1)))))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)0)) << (((((/* implicit */int) (short)-12270)) + (12283))))))));
                var_26 ^= ((/* implicit */short) (+(((/* implicit */int) (short)25656))));
                var_27 &= (short)254;
            }
            for (short i_9 = 3; i_9 < 10; i_9 += 3) 
            {
                /* LoopSeq 4 */
                for (int i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    arr_34 [i_1] [i_4] [i_9] [i_10] [i_10] = var_4;
                    arr_35 [i_1 - 2] [i_4] [i_1] [i_1] = ((/* implicit */short) (((-(var_13))) != (((/* implicit */int) ((short) var_11)))));
                    arr_36 [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */int) (short)-23720)) <= (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)-18025))))));
                }
                for (int i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
                {
                    var_28 = var_10;
                    var_29 += ((/* implicit */short) (~((+(((/* implicit */int) var_9))))));
                    var_30 = ((/* implicit */int) max((var_30), ((-((-(((/* implicit */int) var_0))))))));
                }
                for (int i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
                {
                    arr_41 [i_1] [i_4] [i_12] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)-512)) && (((/* implicit */_Bool) (short)30949)))))));
                    var_31 = arr_30 [i_4];
                }
                for (short i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    arr_44 [i_4] = var_11;
                    arr_45 [i_1 + 3] [i_1] [i_4] [i_4] [i_1] [i_13] = ((/* implicit */short) (((+(((/* implicit */int) (short)6)))) > (((/* implicit */int) (short)13210))));
                    var_32 |= ((/* implicit */short) ((((/* implicit */_Bool) (short)496)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-13191))));
                }
                arr_46 [i_1 - 1] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-23999)) || (((/* implicit */_Bool) arr_20 [i_9 + 1] [i_9 - 3] [i_9 - 3] [i_1 + 3] [i_1 + 4]))));
                /* LoopSeq 1 */
                for (short i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    var_33 = ((/* implicit */short) min((var_33), ((short)-7592)));
                    var_34 *= (short)13190;
                    var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (~(((((/* implicit */_Bool) (short)-8361)) ? (888720964) : (((/* implicit */int) arr_48 [i_1] [i_4] [i_9] [i_14])))))))));
                }
                var_36 = ((/* implicit */short) var_14);
                var_37 = var_8;
            }
            for (int i_15 = 2; i_15 < 9; i_15 += 1) 
            {
                var_38 = var_0;
                arr_52 [i_4] [i_4] [i_15] = (~(((/* implicit */int) arr_33 [i_1 + 4] [i_4] [i_15] [i_15])));
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 11; i_16 += 4) 
            {
                for (short i_17 = 3; i_17 < 10; i_17 += 2) 
                {
                    {
                        var_39 = ((/* implicit */int) min((var_39), (((((/* implicit */_Bool) ((short) var_12))) ? (((/* implicit */int) arr_1 [i_16])) : ((+(((/* implicit */int) (short)0))))))));
                        var_40 = ((/* implicit */short) (+((-(((/* implicit */int) (short)-22660))))));
                        var_41 |= ((/* implicit */short) -1211856219);
                    }
                } 
            } 
            var_42 += ((short) var_6);
        }
        arr_57 [i_1] = ((/* implicit */int) (short)21240);
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 19; i_18 += 3) 
    {
        for (short i_19 = 0; i_19 < 19; i_19 += 1) 
        {
            {
                arr_62 [i_18] = ((short) ((int) ((((/* implicit */int) var_9)) == (((/* implicit */int) (short)28119)))));
                arr_63 [i_18] [i_19] [i_19] = var_9;
                var_43 = ((/* implicit */short) (((((~(((/* implicit */int) var_9)))) | (((1081847913) & (0))))) << ((((((~(((/* implicit */int) var_3)))) | (((((/* implicit */_Bool) -145041370)) ? (((/* implicit */int) arr_59 [i_18])) : (((/* implicit */int) var_4)))))) - (32234)))));
            }
        } 
    } 
    var_44 = ((/* implicit */short) ((((/* implicit */int) (short)27436)) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((short) 2047))) : (((((/* implicit */_Bool) (short)9567)) ? (((/* implicit */int) (short)10975)) : (((/* implicit */int) var_10)))))) - (2047)))));
}

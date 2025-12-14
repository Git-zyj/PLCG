/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163658
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) | (1719725645)));
    var_12 = ((/* implicit */unsigned long long int) 14);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_7 [(unsigned char)13] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) % (23LL)));
            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0])))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                arr_15 [3U] [i_0] [i_0] = ((((long long int) 23LL)) + (44LL));
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) -23LL))));
            }
            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) > (arr_0 [i_2]))))) * (((((/* implicit */_Bool) 0LL)) ? (14LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))))));
        }
        for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            arr_20 [i_0] [(short)8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 20LL))) ? (var_0) : ((-(-3467327584781571672LL)))))) ? (-1LL) : (min((((((/* implicit */long long int) 275295920)) ^ (-1LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_13 [i_0] [i_0])) : (((/* implicit */int) var_6))))))));
            arr_21 [i_0] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) (+(((/* implicit */int) var_7))))) : (arr_5 [i_0] [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (-14LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)116))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)169)) | (((/* implicit */int) (unsigned char)255)))))));
            arr_22 [i_0] = ((/* implicit */short) min((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) var_4)))) + (((((/* implicit */_Bool) -1459458284321897609LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32767)))))), (((/* implicit */int) ((-2074208176184137028LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47437))))))));
            arr_23 [i_0] [i_0] = ((/* implicit */unsigned char) 1563899235);
        }
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((-4LL) == (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
            arr_26 [i_0] = ((/* implicit */_Bool) ((var_8) | (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0])))));
            arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) (unsigned short)9));
            /* LoopNest 3 */
            for (long long int i_6 = 3; i_6 < 22; i_6 += 4) 
            {
                for (int i_7 = 2; i_7 < 20; i_7 += 1) 
                {
                    for (long long int i_8 = 1; i_8 < 23; i_8 += 4) 
                    {
                        {
                            var_17 ^= ((/* implicit */signed char) ((7LL) <= (-7213646604431299582LL)));
                            var_18 = ((/* implicit */long long int) (unsigned short)6);
                            arr_35 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_12 [i_5] [i_0] [i_8])) ? (arr_17 [i_0] [i_0] [i_0]) : (arr_17 [18LL] [i_0] [i_8]))))) || (((/* implicit */_Bool) max(((short)16451), (((/* implicit */short) ((unsigned char) 31744))))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (int i_9 = 0; i_9 < 17; i_9 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((((((/* implicit */_Bool) -923529042555236249LL)) ? (((/* implicit */int) (short)-21521)) : (((/* implicit */int) (unsigned short)65527)))) + (21550)))))) ? (-23LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_25 [(unsigned short)8] [i_9])) * (((/* implicit */int) (short)-29867)))))));
        /* LoopSeq 2 */
        for (short i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            arr_42 [i_9] [i_10] = ((/* implicit */long long int) var_4);
            var_20 = ((/* implicit */int) ((long long int) ((long long int) (unsigned char)9)));
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */long long int) (_Bool)1)), (var_1)))))));
            arr_43 [i_10] [i_9] [(unsigned char)13] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) - (((/* implicit */int) var_9))));
            /* LoopSeq 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                arr_46 [i_9] [i_9] = ((/* implicit */unsigned char) (unsigned short)47927);
                var_22 += ((/* implicit */int) ((signed char) min((arr_4 [(unsigned char)22] [2LL]), (((/* implicit */unsigned int) -1046262264)))));
                var_23 ^= ((/* implicit */unsigned short) (+(((((_Bool) (unsigned char)241)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_39 [i_9]))))));
            }
            /* vectorizable */
            for (long long int i_12 = 0; i_12 < 17; i_12 += 1) 
            {
                var_24 = ((/* implicit */long long int) (unsigned short)39979);
                arr_49 [i_9] [i_12] [i_9] = ((/* implicit */long long int) (unsigned char)158);
                var_25 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_1) - (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_12] [i_9])))))) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) arr_33 [0LL] [0LL] [0LL]))));
            }
        }
        /* vectorizable */
        for (long long int i_13 = 0; i_13 < 17; i_13 += 4) 
        {
            var_26 += ((/* implicit */unsigned int) ((unsigned short) arr_39 [5LL]));
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (short i_15 = 0; i_15 < 17; i_15 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            arr_62 [i_9] [(unsigned short)16] [i_14] [i_15] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)133)) >> (((/* implicit */int) (unsigned short)9))));
                            arr_63 [i_9] [(unsigned char)6] [i_14] [i_9] [i_9] [5] [i_16] = (!(((/* implicit */_Bool) arr_31 [i_9] [i_13])));
                        }
                        arr_64 [i_9] [i_13] [i_13] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_52 [i_9])));
                    }
                } 
            } 
        }
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173992
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
    var_12 = ((/* implicit */_Bool) var_9);
    var_13 = ((/* implicit */short) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)210)))))))));
    var_14 += ((/* implicit */_Bool) min((max((var_0), (min((((/* implicit */unsigned int) (short)32250)), (1794496328U))))), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) (short)32250)) << (((576460750155939840LL) - (576460750155939827LL))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (min((arr_0 [i_0]), (arr_1 [i_0]))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_15 = ((/* implicit */unsigned char) 1794496315U);
            var_16 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-6)) ? (((/* implicit */long long int) 1978580008)) : (6185980388326584028LL))) | (var_6)))) ? (min((((((/* implicit */_Bool) (short)-22)) ? (((/* implicit */long long int) 1057701692)) : (-8321841328927981433LL))), (((/* implicit */long long int) (signed char)-59)))) : (((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_4)) ? (-6605814529473048535LL) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (1794496309U) : (arr_1 [i_0])))))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 4 */
            for (int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                arr_10 [i_0] [i_2] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_0])) ? (arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_0]) : (((/* implicit */unsigned int) var_3))))) ? (((int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))) : (4552327418693034789ULL)))) : (((((/* implicit */_Bool) max((2500470939U), (((/* implicit */unsigned int) (short)-2927))))) ? (((/* implicit */int) arr_5 [i_2 - 1] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32240)))))))));
                arr_11 [i_0] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) (unsigned short)65535);
            }
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 19; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_14 [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))))) && (((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) (short)6))) ^ (140735340871680LL))))))));
                            var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-11928))));
                        }
                    } 
                } 
                var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_0] [i_0] [(unsigned char)19] [i_0] [i_0])) * (((/* implicit */int) arr_19 [i_2] [i_2] [(_Bool)1] [8U]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)34352), (((/* implicit */unsigned short) (short)-3171)))))) : (((((/* implicit */unsigned long long int) 2500470981U)) & (arr_9 [i_2] [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(arr_5 [i_0] [(_Bool)1]))))))) : (((((/* implicit */_Bool) max(((short)-2960), (((/* implicit */short) (_Bool)1))))) ? (-8927656304773071823LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                var_20 |= ((/* implicit */unsigned int) var_9);
            }
            /* vectorizable */
            for (long long int i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) (unsigned short)28437)) : (((/* implicit */int) (signed char)27)))))));
                var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) / (arr_22 [i_0] [i_0] [i_2] [i_2]))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_0] [i_2])))))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                {
                    for (short i_9 = 1; i_9 < 17; i_9 += 1) 
                    {
                        {
                            var_23 = arr_3 [i_8];
                            arr_30 [i_2] [i_7] [i_9] = arr_0 [i_0];
                            var_24 = ((/* implicit */_Bool) 15067704357257494246ULL);
                        }
                    } 
                } 
                arr_31 [i_0] [i_0] [i_2] = (!(((/* implicit */_Bool) arr_25 [i_2] [i_2 - 1])));
                var_25 = ((/* implicit */signed char) ((_Bool) arr_15 [i_0] [i_2] [i_2]));
            }
            for (unsigned int i_10 = 1; i_10 < 20; i_10 += 3) 
            {
                var_26 = ((/* implicit */unsigned int) ((arr_26 [i_0] [i_2] [i_2] [i_2] [i_2]) << (((((/* implicit */int) var_5)) + (13843)))));
                arr_35 [(unsigned short)11] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2 - 1] [i_10 + 1]))))), ((+(((((/* implicit */_Bool) 1094849590U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)28672))))))));
            }
            /* LoopSeq 1 */
            for (short i_11 = 1; i_11 < 20; i_11 += 1) 
            {
                var_27 = ((/* implicit */unsigned int) (+(min((arr_15 [i_2] [i_2 - 1] [i_2]), (((/* implicit */int) (_Bool)1))))));
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_2 - 1] [i_11 + 1]))))) ? (((((/* implicit */int) arr_13 [i_2 - 1] [i_11 + 1])) + (((/* implicit */int) arr_13 [i_2 - 1] [i_11 + 1])))) : (((/* implicit */int) arr_13 [i_2 - 1] [i_11 + 1]))));
                arr_38 [i_2] = ((/* implicit */unsigned long long int) max((2500470982U), (((/* implicit */unsigned int) ((((_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)28436)) : (((/* implicit */int) max((var_9), (((/* implicit */unsigned char) (signed char)50))))))))));
            }
            var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_2]))));
        }
        for (unsigned int i_12 = 2; i_12 < 19; i_12 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_13 = 2; i_13 < 19; i_13 += 1) 
            {
                var_30 -= ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_27 [i_0] [i_0] [i_13 - 2] [(unsigned char)18] [i_12])), (3436147130U)));
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    for (short i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        {
                            arr_52 [i_15] [i_13] [i_13] [i_14] [i_13] = ((((/* implicit */int) ((_Bool) (short)(-32767 - 1)))) / (((/* implicit */int) arr_13 [i_12 - 2] [i_12 - 2])));
                            var_31 = ((/* implicit */unsigned char) ((int) min((((/* implicit */unsigned int) var_4)), (var_0))));
                            var_32 *= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (short)32225)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-31956))) : ((-9223372036854775807LL - 1LL))))));
                            arr_53 [i_0] [i_13] = ((/* implicit */short) 3069620572U);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned char i_17 = 2; i_17 < 19; i_17 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) arr_57 [i_0] [i_13] [i_16] [i_16]);
                            arr_61 [i_13] [i_13] = ((/* implicit */unsigned int) arr_44 [i_13] [i_12 + 1] [i_12]);
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned char i_18 = 2; i_18 < 20; i_18 += 4) 
            {
                for (long long int i_19 = 1; i_19 < 20; i_19 += 3) 
                {
                    {
                        arr_67 [i_19] [i_18] [i_19 - 1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) var_2)))) : ((-(((/* implicit */int) (unsigned char)12))))))));
                        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_12 + 1] [i_0] [i_19]))) * (((3436147150U) / (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))))));
                    }
                } 
            } 
            arr_68 [i_12] [i_12] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
        }
        arr_69 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [(_Bool)1])) + (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */_Bool) 3434497991U)) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((arr_62 [20U] [(short)1] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned char)12] [14ULL])))))))));
        var_35 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) arr_42 [i_0] [i_0]))))))))));
    }
}

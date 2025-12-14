/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170445
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((16001497276189445782ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) != (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2147483647)), (8589934591LL))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) -2147483642)) : (-9023786135705280041LL)))))))));
        var_17 = ((/* implicit */unsigned long long int) max((-2147483642), (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 2) /* same iter space */
        {
            arr_4 [i_1 + 2] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((-2147483624) + (((/* implicit */int) arr_3 [i_0]))))) - (((((/* implicit */_Bool) arr_3 [i_0])) ? (34359721984ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))))));
            arr_5 [i_1] [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [(unsigned short)4] [(unsigned short)4]))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)12191);
        }
        for (unsigned char i_2 = 2; i_2 < 14; i_2 += 2) /* same iter space */
        {
            var_18 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)53351)) - (((/* implicit */int) (_Bool)1))))) == (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_2 + 1]))) - (25ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_2 - 2]))))))));
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_10 [i_2 + 2] [i_2] [i_2 + 1])) ? (((/* implicit */int) (unsigned short)12184)) : (arr_10 [i_2 + 2] [i_2] [i_2 + 1]))), (arr_10 [i_2 + 2] [i_2] [i_2 + 1]))))));
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_7 [i_2 - 1])) % (((/* implicit */int) arr_7 [i_2 + 1]))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) ((unsigned short) arr_10 [i_0] [i_2 - 2] [i_3])));
                /* LoopSeq 2 */
                for (long long int i_4 = 2; i_4 < 15; i_4 += 2) /* same iter space */
                {
                    arr_18 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((long long int) (unsigned short)16)));
                    /* LoopSeq 3 */
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_3] [i_2]))))) / ((+(6719235961674014581ULL)))));
                        var_22 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -966651782797617669LL)) ? (((/* implicit */long long int) arr_16 [i_0] [i_2 - 1] [i_2] [i_3] [i_4] [i_5])) : (-1LL)))) % ((~(18446744073709551607ULL)))));
                    }
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
                    {
                        arr_24 [i_0] [i_2] [i_3] [i_4] [i_0] = ((/* implicit */int) arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] [9]);
                        arr_25 [i_0] [i_0] [i_0] [i_4 - 1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (-1LL) : (((/* implicit */long long int) arr_16 [i_0] [i_0] [i_2] [i_3] [i_0] [i_6]))));
                        arr_26 [i_0] [i_2] [i_2] [i_2] [i_2 + 2] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_6] [i_3]))))) != (((/* implicit */int) arr_1 [i_2 + 2])));
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_15 [i_7 - 1] [i_2] [i_3] [i_7 - 1])) == (((/* implicit */int) (_Bool)0))))) / (((((/* implicit */_Bool) (unsigned short)34555)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)46)))))))));
                        var_24 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)51541)) && (((/* implicit */_Bool) 12ULL)))) ? (arr_17 [i_0] [i_0]) : (((arr_19 [i_0] [i_2]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                }
                for (long long int i_8 = 2; i_8 < 15; i_8 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */_Bool) (unsigned short)34160);
                    var_26 = ((/* implicit */long long int) arr_7 [i_3]);
                    arr_34 [i_3] [i_0] [i_3] = ((/* implicit */unsigned long long int) -1854514638);
                    arr_35 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_20 [i_0] [(unsigned char)1] [i_2] [i_3] [i_8] [(unsigned char)1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) == ((-(((/* implicit */int) (unsigned short)12183))))));
                }
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_2] [i_3]))))) ? (((((/* implicit */_Bool) 23LL)) ? (5173124789806642722LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12204))))) : (((long long int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                var_28 = arr_9 [i_3] [i_0] [i_0];
            }
            /* vectorizable */
            for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    for (int i_11 = 2; i_11 < 15; i_11 += 3) 
                    {
                        {
                            arr_44 [i_0] [i_2 + 2] [i_2] [i_9] [i_0] [i_11] = ((/* implicit */unsigned short) (+(((arr_40 [i_0] [i_0] [i_0] [i_0] [15]) % (8976243255012099518LL)))));
                            var_29 *= ((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_10]))))) % (((/* implicit */int) arr_29 [i_11 - 1] [i_11 - 1] [i_9] [i_10] [i_11 - 2] [i_2 + 1])));
                            var_30 = ((/* implicit */unsigned short) 2147483599);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_12 = 3; i_12 < 15; i_12 += 4) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)18))));
                            arr_51 [i_0] [i_2] [i_0] [i_12] [i_13] = (+(arr_49 [i_0] [i_2 + 2] [i_9] [i_9] [i_0]));
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) arr_28 [i_13] [i_12 + 1] [i_9] [i_2 - 1] [(unsigned short)9] [i_0]))));
                            var_33 = arr_27 [i_0] [i_2] [i_2] [i_12 - 2] [i_0];
                        }
                    } 
                } 
                arr_52 [i_0] [i_0] [i_9] [i_9] = ((/* implicit */int) (unsigned short)12184);
            }
        }
        arr_53 [12LL] [4ULL] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [10ULL])))))))) && (((((/* implicit */_Bool) max((((/* implicit */int) arr_43 [0ULL] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (2147483623)))) || ((_Bool)1)))));
    }
    var_34 = ((/* implicit */unsigned short) (-(var_5)));
    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) == (((long long int) -492543313432738399LL))));
    var_36 = ((/* implicit */unsigned long long int) -317697267);
}

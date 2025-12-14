/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125732
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
    var_15 = ((/* implicit */short) var_5);
    var_16 = ((/* implicit */unsigned long long int) var_2);
    var_17 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            arr_7 [(unsigned char)0] = ((/* implicit */short) -3067371232776674683LL);
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3067371232776674683LL))) : (((/* implicit */long long int) ((((/* implicit */int) (short)31877)) ^ (((/* implicit */int) (unsigned char)109)))))));
                /* LoopSeq 2 */
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_0] [i_1] [i_3]))));
                    arr_16 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 7126516189614970547LL)) ? (-1LL) : (-2LL)));
                    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-16700)) ? (((/* implicit */int) (unsigned short)29070)) : (((/* implicit */int) arr_2 [14ULL] [14ULL])))) >> (((/* implicit */int) (short)0))));
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
                    {
                        var_20 = (_Bool)1;
                        arr_20 [i_0] [i_3] [(signed char)13] [i_3] [i_4] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)16)) || (((/* implicit */_Bool) (signed char)123))))) % (((/* implicit */int) (unsigned short)29045))));
                    }
                    for (short i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                    {
                        var_21 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32006)) ? (((/* implicit */int) arr_3 [i_0])) : (-356001433)))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_3] [i_3])) << (((arr_1 [i_0]) - (3902825757U))))))));
                        arr_23 [i_1] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1166397110)) ? (((/* implicit */int) arr_14 [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_14 [13LL] [i_1] [i_2]))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36491))) > (arr_1 [i_0])));
                    }
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        arr_27 [i_0] [(unsigned char)14] [i_0] [i_3] [(short)5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32748)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [(unsigned short)0] [i_6]))) : (arr_1 [i_2])));
                        arr_28 [i_0] [i_0] [i_2] [i_3] [i_6] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_3])) ? (arr_4 [i_0]) : (arr_4 [i_2])));
                        var_23 = ((/* implicit */int) (unsigned short)36465);
                        arr_29 [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (unsigned short)36443);
                    }
                }
                for (short i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    arr_34 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((short) arr_25 [i_0] [i_1] [i_1] [i_1] [i_2] [i_2] [12LL]));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 3) 
                    {
                        var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52799)) ? (((arr_13 [(short)12] [(short)12] [(unsigned char)0] [i_0] [(short)12]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-9)) ? (1746277011U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [(short)15] [i_2]))))))));
                        arr_38 [(short)15] [i_7] [i_2] [(_Bool)1] [2LL] = ((((((/* implicit */_Bool) (unsigned short)36497)) ? (3067371232776674701LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-20))))) == (((/* implicit */long long int) arr_5 [i_2] [i_2])));
                    }
                    for (signed char i_9 = 3; i_9 < 12; i_9 += 2) 
                    {
                        var_25 &= ((/* implicit */signed char) arr_5 [i_1] [i_1]);
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (~(arr_12 [6ULL] [i_9 - 1] [i_9 - 2] [i_9 + 4] [i_9 - 2] [i_9 + 3]))))));
                    }
                    for (short i_10 = 3; i_10 < 15; i_10 += 2) 
                    {
                        var_27 = ((/* implicit */int) arr_18 [i_0] [i_10 - 2] [i_2] [i_7] [i_1] [12U] [i_0]);
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_1])) ? (((/* implicit */int) arr_17 [i_0] [i_1] [(signed char)4] [i_1] [i_10])) : (((/* implicit */int) (short)0))))) ? (((/* implicit */int) arr_11 [2U] [i_1] [i_1])) : (((/* implicit */int) arr_33 [i_0] [i_1] [i_0] [12ULL])))))));
                    }
                    var_29 = ((/* implicit */unsigned char) arr_31 [i_0] [i_0] [i_2] [i_7]);
                }
                var_30 = ((/* implicit */unsigned int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)13]);
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_2]))));
            }
            arr_45 [i_0] [(unsigned char)3] [6U] = ((/* implicit */signed char) arr_18 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [1ULL]);
        }
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            var_32 = ((arr_46 [i_11 - 1] [i_11 - 1]) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])) : (arr_5 [i_11 - 1] [i_0]));
            arr_50 [i_0] [(short)9] [i_11] = ((/* implicit */int) arr_46 [(short)4] [(unsigned short)12]);
            arr_51 [i_11] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) min((((/* implicit */short) arr_44 [i_0] [i_0] [i_0] [i_0] [i_11])), ((short)32011)))) : (((((/* implicit */_Bool) (short)32001)) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (short)25402))))))) ? (((/* implicit */int) ((arr_25 [i_11 - 1] [i_11 - 1] [i_0] [i_11] [i_11 - 1] [i_11 - 1] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) (short)14460)))))) : ((-(((/* implicit */int) (unsigned short)41724))))));
            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_11] [7] [i_11] [i_11] [i_11] [i_11 - 1])) ? (((/* implicit */int) arr_18 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11 - 1])) : (((/* implicit */int) arr_18 [i_0] [i_11] [i_11] [i_0] [i_0] [i_0] [i_11 - 1]))))) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_11] [i_0] [i_11] [(_Bool)1] [i_11] [i_11 - 1])) ? (((/* implicit */int) arr_18 [(signed char)7] [i_0] [(signed char)7] [i_11] [i_0] [i_11] [i_11 - 1])) : (((/* implicit */int) arr_18 [i_11] [i_11] [i_11 - 1] [i_11] [7LL] [i_0] [i_11 - 1])))) : (((/* implicit */int) arr_18 [i_0] [i_11] [i_11] [i_0] [i_0] [i_0] [i_11 - 1]))));
        }
        for (short i_12 = 3; i_12 < 14; i_12 += 4) 
        {
            var_34 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((arr_37 [5ULL] [5ULL] [(signed char)3] [i_0] [i_12]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32012))))) || (((((/* implicit */_Bool) (short)-32034)) && (((/* implicit */_Bool) (unsigned short)36488)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_12 - 3] [i_0] [i_12] [i_0]))) : (((unsigned long long int) arr_12 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 2] [i_12] [i_12 - 3]))));
            var_35 = (short)-32009;
            var_36 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_0] [i_12 + 2] [i_0])) ? (arr_6 [i_12 - 3] [i_12 + 2]) : (arr_6 [i_12 - 1] [i_12 - 1])))) ? (((((/* implicit */_Bool) arr_6 [i_12 + 2] [i_12 + 2])) ? (((((/* implicit */int) (signed char)-124)) * (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_12] [(unsigned char)0])))) : (((/* implicit */int) arr_36 [i_12 - 2] [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11657))) : (2642418950U)))) ? (((/* implicit */int) (unsigned short)15346)) : (((/* implicit */int) max((arr_8 [i_12]), (arr_37 [i_0] [i_12 + 1] [i_12 + 2] [i_0] [i_12 + 2]))))))));
            arr_55 [i_12] [i_12] = ((/* implicit */long long int) (signed char)-95);
        }
        /* vectorizable */
        for (unsigned int i_13 = 0; i_13 < 16; i_13 += 2) 
        {
            var_37 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3067371232776674694LL)) ? (((/* implicit */int) (short)32049)) : (((/* implicit */int) (unsigned char)3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_0] [i_13])) ? (arr_53 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [(signed char)13] [i_0])))))) : (arr_48 [(unsigned char)3] [(unsigned char)3] [i_0]));
            var_38 = ((/* implicit */unsigned char) arr_12 [i_0] [i_13] [i_0] [i_0] [i_0] [i_13]);
            var_39 = arr_56 [i_0] [i_0];
            arr_58 [i_13] [i_13] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [14U] [i_0] [i_0] [i_0] [i_13])) ? (((/* implicit */int) arr_14 [i_0] [(_Bool)1] [i_13])) : (((/* implicit */int) (unsigned char)62))));
            var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)22)) || ((_Bool)0)));
        }
        var_41 = ((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((arr_6 [i_0] [i_0]) == (arr_6 [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) -898877321)) % (4294967280U))))))));
    }
    /* vectorizable */
    for (long long int i_14 = 0; i_14 < 16; i_14 += 4) /* same iter space */
    {
        var_42 = (signed char)0;
        var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [14LL] [i_14] [i_14])) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) arr_37 [i_14] [i_14] [i_14] [i_14] [(signed char)15]))))) : (((/* implicit */int) arr_61 [i_14] [i_14])))))));
        arr_63 [i_14] = ((/* implicit */unsigned long long int) arr_47 [(unsigned char)5] [(unsigned char)5]);
        var_44 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_14])) ? (((((/* implicit */_Bool) 1371706200)) ? (arr_56 [i_14] [(signed char)8]) : (13275685834938149392ULL))) : (((/* implicit */unsigned long long int) arr_49 [i_14] [i_14]))));
    }
    /* vectorizable */
    for (long long int i_15 = 0; i_15 < 16; i_15 += 4) /* same iter space */
    {
        var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (short)32739))));
        var_46 = ((/* implicit */_Bool) min((var_46), (((arr_49 [i_15] [i_15]) < (arr_49 [i_15] [i_15])))));
    }
    var_47 = ((/* implicit */long long int) var_14);
}

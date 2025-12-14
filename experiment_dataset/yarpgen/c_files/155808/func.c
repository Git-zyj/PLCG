/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155808
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
    var_19 += ((/* implicit */long long int) (+(max((((/* implicit */int) var_11)), (var_3)))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = max((((/* implicit */long long int) arr_0 [i_0] [i_0])), ((((+(-1481446995986784702LL))) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((((/* implicit */signed char) arr_0 [(short)18] [(short)18])), (max((arr_1 [10LL] [i_0]), (arr_1 [(_Bool)1] [i_0]))))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned short) max(((~(max((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])), (arr_2 [i_1]))))), (((/* implicit */unsigned long long int) (unsigned char)117))));
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (unsigned char)197))));
        var_23 = (signed char)20;
    }
    for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_3 = 2; i_3 < 15; i_3 += 4) 
        {
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_11 [i_2] [i_3]))));
            /* LoopSeq 3 */
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) (signed char)-37);
                            arr_22 [i_2] [i_2] [1LL] = ((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned short)6328)) + (((/* implicit */int) (unsigned char)65))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        {
                            var_26 *= (_Bool)1;
                            var_27 = ((/* implicit */unsigned int) arr_8 [i_2]);
                            var_28 = ((/* implicit */signed char) ((arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2]))))))));
                        }
                    } 
                } 
            }
            for (long long int i_9 = 0; i_9 < 16; i_9 += 2) /* same iter space */
            {
                arr_30 [i_3] [i_2] [i_9] = ((/* implicit */long long int) arr_0 [i_2] [i_2]);
                var_29 = 3908906875741463625LL;
                /* LoopSeq 3 */
                for (long long int i_10 = 1; i_10 < 14; i_10 += 2) /* same iter space */
                {
                    var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (((+(-1554398948))) & (((/* implicit */int) arr_25 [(signed char)0] [i_3] [i_3] [i_3 - 2] [i_3] [i_3])))))));
                    var_31 = ((/* implicit */long long int) arr_6 [i_2] [i_3]);
                    /* LoopSeq 3 */
                    for (short i_11 = 3; i_11 < 13; i_11 += 4) 
                    {
                        arr_38 [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_2] [i_9] [13] [i_10] [i_11 + 2] [i_10]))) - (arr_2 [i_2])));
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) 1614689122))));
                        var_33 &= ((/* implicit */long long int) arr_5 [i_9]);
                    }
                    for (long long int i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        var_34 = arr_25 [i_2] [i_2] [i_9] [i_10] [i_2] [i_12];
                        var_35 = ((/* implicit */int) (short)-23639);
                        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) arr_21 [i_2] [i_2] [i_2] [i_9] [i_10] [i_12] [12LL]))));
                    }
                    for (long long int i_13 = 0; i_13 < 16; i_13 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) 11181206218957985755ULL))));
                        var_38 = arr_20 [i_2] [i_3 - 2] [i_3 - 2] [i_2] [i_13];
                        var_39 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-68))));
                        var_40 = ((/* implicit */unsigned long long int) -1614689125);
                    }
                    var_41 = ((/* implicit */signed char) arr_29 [i_2] [i_2] [i_2]);
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        var_42 = arr_21 [i_2] [i_2] [i_2] [i_9] [i_2] [i_2] [8LL];
                        arr_49 [i_3] [i_2] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) arr_0 [i_2] [i_2]);
                    }
                }
                for (long long int i_15 = 1; i_15 < 14; i_15 += 2) /* same iter space */
                {
                    var_43 = ((/* implicit */unsigned int) (signed char)127);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 3) 
                    {
                        arr_56 [i_2] [i_2] [i_9] [i_2] [i_16] = (~(((((/* implicit */long long int) ((/* implicit */int) (signed char)-33))) / (arr_51 [i_2] [i_3] [i_16] [i_2] [i_2] [3LL]))));
                        var_44 = ((/* implicit */int) (unsigned short)6328);
                        var_45 = ((/* implicit */int) arr_10 [i_9] [i_9] [i_9]);
                        var_46 = ((/* implicit */signed char) arr_32 [i_2] [i_2]);
                    }
                }
                for (long long int i_17 = 1; i_17 < 14; i_17 += 2) /* same iter space */
                {
                    var_47 = ((/* implicit */short) (+((+(2780003660U)))));
                    var_48 = ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) arr_6 [i_2] [i_2]))));
                    arr_61 [i_2] [i_2] [i_2] [i_2] = (+(((/* implicit */int) (signed char)81)));
                    var_49 += ((/* implicit */short) -4182260748426531952LL);
                }
                /* LoopNest 2 */
                for (short i_18 = 4; i_18 < 14; i_18 += 2) 
                {
                    for (long long int i_19 = 2; i_19 < 15; i_19 += 1) 
                    {
                        {
                            var_50 ^= ((/* implicit */signed char) ((arr_54 [i_2] [i_2] [i_9] [i_2] [10ULL] [(signed char)10]) <= (((/* implicit */long long int) (+(((/* implicit */int) (short)-25628)))))));
                            var_51 = ((/* implicit */unsigned int) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)132))) + (arr_48 [i_19])))));
                            var_52 = ((/* implicit */int) (+(6357728557810002115LL)));
                        }
                    } 
                } 
            }
            for (long long int i_20 = 0; i_20 < 16; i_20 += 2) /* same iter space */
            {
                var_53 *= ((/* implicit */short) ((((((/* implicit */int) arr_37 [i_3] [i_20] [i_3] [i_3] [6LL] [i_3])) - (arr_28 [i_2] [i_2] [i_20] [i_2]))) / (arr_31 [i_2] [i_2] [i_20] [i_2] [i_2])));
                arr_69 [i_2] [i_3] [i_20] = ((/* implicit */int) arr_55 [(short)9] [i_2]);
                /* LoopNest 2 */
                for (signed char i_21 = 0; i_21 < 16; i_21 += 1) 
                {
                    for (short i_22 = 0; i_22 < 16; i_22 += 1) 
                    {
                        {
                            var_54 = ((/* implicit */signed char) arr_5 [i_21]);
                            var_55 &= ((/* implicit */_Bool) arr_13 [i_21] [i_3 + 1] [i_2]);
                            var_56 *= ((/* implicit */short) arr_40 [i_22] [i_22] [(short)13] [i_20] [i_20] [i_3 - 1] [i_2]);
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (signed char i_23 = 0; i_23 < 16; i_23 += 1) 
            {
                arr_76 [i_2] [i_2] [i_2] = arr_19 [i_2] [i_3] [i_23] [i_3] [i_23] [i_2];
                var_57 = (signed char)-1;
                var_58 = ((/* implicit */long long int) (~((-(-1554398948)))));
                var_59 += ((/* implicit */unsigned char) (+((+(((/* implicit */int) (signed char)-93))))));
            }
        }
        arr_77 [i_2] [i_2] = ((/* implicit */long long int) max(((short)31925), (((/* implicit */short) (unsigned char)59))));
        var_60 ^= ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_67 [i_2] [i_2] [i_2] [i_2])), ((-(((/* implicit */int) (short)-25340))))));
    }
    /* vectorizable */
    for (unsigned long long int i_24 = 2; i_24 < 9; i_24 += 3) 
    {
        var_61 = ((/* implicit */short) arr_42 [i_24]);
        var_62 = arr_46 [i_24 - 1];
        /* LoopSeq 1 */
        for (long long int i_25 = 0; i_25 < 12; i_25 += 1) 
        {
            arr_83 [i_24] = (i_24 % 2 == zero) ? (((15728640LL) >> (((arr_26 [i_24] [i_25] [i_25] [i_25]) + (7821980806566032672LL))))) : (((15728640LL) >> (((((arr_26 [i_24] [i_25] [i_25] [i_25]) - (7821980806566032672LL))) + (252339690085624693LL)))));
            arr_84 [i_24 - 2] [i_24] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)60)) + (-1743292805)));
            arr_85 [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(arr_13 [i_24] [i_24] [i_24])))) - (arr_15 [i_24])));
            arr_86 [i_24] [i_25] [i_25] = ((/* implicit */long long int) ((arr_36 [i_25] [i_24] [i_25] [i_24]) % (((/* implicit */int) arr_25 [i_24 - 2] [i_24 + 3] [i_25] [i_25] [i_24] [i_25]))));
            var_63 = ((/* implicit */unsigned char) ((1614689119) >> (((((-1) % (((/* implicit */int) arr_23 [i_24] [i_24 - 1] [i_25] [i_25])))) + (31)))));
        }
    }
    var_64 = ((/* implicit */_Bool) var_11);
}

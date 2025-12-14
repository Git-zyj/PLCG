/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17002
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
    var_12 = ((/* implicit */long long int) (short)12428);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) (signed char)-81);
                        arr_11 [i_0] [i_1] [i_0] [5ULL] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) -6940429752635168234LL)) ? (((/* implicit */int) (signed char)36)) : (-666851616)));
                    }
                } 
            } 
            var_14 = ((/* implicit */_Bool) 67104768U);
            arr_12 [i_0] [16LL] = ((/* implicit */unsigned char) 4544088937113388019LL);
        }
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                {
                    arr_19 [i_4] [i_4] [i_5] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_5] [(_Bool)1])) % (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || ((_Bool)1))))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 19; i_7 += 3) 
                        {
                            {
                                arr_24 [i_4] [i_6] [i_5] [i_4] [i_4] = (signed char)-120;
                                arr_25 [i_0] [i_4] [i_6] [i_4] = ((/* implicit */long long int) (unsigned char)143);
                                var_15 = ((/* implicit */signed char) ((-2327749992083094238LL) == (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0] [i_0])))))));
                                var_16 = ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_0] [i_4] [i_5] [(_Bool)1] [i_8])) ? (-5352564622166863662LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))));
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) arr_16 [i_4] [i_8]);
                            var_19 -= ((/* implicit */long long int) ((((/* implicit */int) arr_22 [3U] [20] [i_5] [i_4] [i_0])) % (((/* implicit */int) (_Bool)1))));
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_10 [(unsigned char)16] [i_4] [i_4] [i_4] [i_4]))));
                        }
                        for (signed char i_10 = 2; i_10 < 21; i_10 += 1) 
                        {
                            arr_32 [i_4] = ((/* implicit */signed char) ((unsigned long long int) 18446744073709551593ULL));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_15 [i_10 - 2] [i_4])) ? (-6770115020054362934LL) : (((/* implicit */long long int) 1074518573)))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                            arr_33 [i_4] [i_8] [i_5] [i_4] [i_4] = ((/* implicit */unsigned char) arr_20 [i_10 - 2]);
                            arr_34 [i_0] [i_0] [i_5] [i_8] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)252)) << (((((((/* implicit */int) (short)-11119)) + (11145))) - (15)))));
                        }
                    }
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
                    {
                        var_22 = ((signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) var_3))));
                        arr_38 [i_4] [i_4] = ((/* implicit */unsigned char) ((arr_18 [i_5] [i_5] [i_4] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)57)))))));
                    }
                }
            } 
        } 
        var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_0] [i_0])) * (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (int i_12 = 0; i_12 < 22; i_12 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_13 = 0; i_13 < 22; i_13 += 3) 
            {
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((_Bool) ((unsigned char) (_Bool)1))))));
                arr_44 [i_13] [15U] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 1543487107U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (857274841434359041LL))));
                arr_45 [i_0] [i_12] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)3)) ? (4639417509689903425ULL) : (((/* implicit */unsigned long long int) 6770115020054362933LL))));
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    for (unsigned int i_15 = 1; i_15 < 19; i_15 += 4) 
                    {
                        {
                            arr_52 [i_0] [i_0] [7LL] [i_0] = ((/* implicit */short) ((unsigned int) (signed char)3));
                            arr_53 [i_0] [i_12] [i_13] [i_14] [8U] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)203)) % (((/* implicit */int) arr_28 [i_15 + 3] [i_15] [i_15 - 1] [i_15] [i_15 + 2] [i_15]))));
                        }
                    } 
                } 
                var_26 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_0]))));
            }
            arr_54 [i_12] [i_12] [18ULL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_4))))) : (4575657221408423936ULL));
            arr_55 [i_12] = ((/* implicit */signed char) ((((/* implicit */int) arr_40 [i_0] [i_0] [15LL])) % (((/* implicit */int) arr_7 [i_0] [i_0] [i_12]))));
        }
        for (signed char i_16 = 0; i_16 < 22; i_16 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 3) 
            {
                for (int i_18 = 0; i_18 < 22; i_18 += 1) 
                {
                    for (int i_19 = 0; i_19 < 22; i_19 += 4) 
                    {
                        {
                            var_27 &= ((/* implicit */signed char) ((_Bool) arr_15 [i_17] [0LL]));
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                var_29 = ((/* implicit */signed char) var_4);
                arr_71 [i_0] [i_0] [i_0] [i_16] = ((/* implicit */signed char) -432810933);
                /* LoopSeq 1 */
                for (unsigned int i_21 = 0; i_21 < 22; i_21 += 2) 
                {
                    arr_74 [i_16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (_Bool)1))))) ? (-4041135175819725702LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
                    var_30 = var_5;
                }
                arr_75 [i_0] [i_0] [i_16] [i_0] = ((/* implicit */int) ((_Bool) arr_22 [i_0] [i_16] [1ULL] [i_20] [i_16]));
            }
            for (unsigned int i_22 = 2; i_22 < 20; i_22 += 2) 
            {
                /* LoopSeq 1 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    var_31 = ((/* implicit */unsigned long long int) var_2);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_24 = 0; i_24 < 22; i_24 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) ((signed char) (signed char)22));
                        var_33 = ((/* implicit */unsigned char) arr_84 [i_22 + 2] [i_16] [i_22]);
                    }
                }
                /* LoopNest 2 */
                for (unsigned char i_25 = 0; i_25 < 22; i_25 += 3) 
                {
                    for (int i_26 = 0; i_26 < 22; i_26 += 1) 
                    {
                        {
                            var_34 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */int) (short)22877)) << (((arr_60 [i_0] [(signed char)6]) - (1952950346154986082LL))))) : (arr_13 [i_22 - 2] [i_22 - 1] [i_22 - 1])));
                            arr_92 [i_25] [i_16] [i_16] [i_25] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1514352870)) ? (3458764513820540928ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79)))));
                            arr_93 [i_16] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) 1977662495))) ? (((((/* implicit */int) (_Bool)1)) << (((324617474) - (324617466))))) : (((/* implicit */int) (unsigned short)3715))));
                        }
                    } 
                } 
                arr_94 [i_22 - 2] [i_16] [i_16] [i_0] = ((/* implicit */short) arr_67 [i_0] [i_0] [i_16] [i_0] [i_0] [i_0] [17U]);
                arr_95 [17] [i_16] [i_16] [i_16] = ((/* implicit */int) (unsigned char)112);
                arr_96 [(_Bool)1] [i_16] [i_22 + 1] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1479954620)) ? ((((_Bool)1) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [8LL] [8LL]))))) : (((/* implicit */long long int) ((/* implicit */int) (short)1807)))));
            }
            arr_97 [i_16] = var_11;
        }
    }
    for (unsigned char i_27 = 0; i_27 < 22; i_27 += 4) 
    {
        arr_102 [i_27] [i_27] = ((/* implicit */int) var_8);
        var_35 = ((/* implicit */int) ((((long long int) 4041135175819725701LL)) & (-2277432446425928730LL)));
    }
}

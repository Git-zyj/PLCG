/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170549
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
    var_11 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_6)) != (((/* implicit */int) var_3)))) ? (1976520639958525629ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (2192724431657084940LL)))))) >= (var_1)));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)74)), (max((var_4), ((unsigned char)33)))))) || (((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) -6070815117200003778LL))))))));
                    arr_6 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) max((((/* implicit */long long int) arr_5 [i_0] [i_2])), (arr_2 [i_2])))))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */signed char) arr_1 [i_0 + 2]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_3 + 3] [i_3 + 3] [i_3 + 2])) ? (arr_10 [(signed char)0] [i_3 - 2] [i_3] [i_3 + 2] [i_3 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_3])) * (((/* implicit */int) arr_0 [i_0 + 2]))));
                        arr_12 [i_0 - 1] [i_1] [i_1] [(signed char)13] [(signed char)13] = ((/* implicit */unsigned long long int) ((long long int) var_9));
                        arr_13 [i_2] [i_2] [i_2] [i_2] [2ULL] = ((/* implicit */signed char) arr_10 [i_0 + 3] [i_3 + 1] [i_0 + 3] [i_3] [i_3]);
                        arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-75))));
                    }
                }
            } 
        } 
        var_15 = (signed char)63;
    }
    /* LoopSeq 4 */
    for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned char) (~(-4809367044938818161LL)));
        var_16 = (+(((long long int) arr_4 [i_4] [i_4])));
    }
    for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) 7997597860495050720ULL)) ? (8430983728630528334ULL) : (((/* implicit */unsigned long long int) -6070815117200003778LL)))))));
        var_18 = 6226096699747121392LL;
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)100))) : (5621864883914438585LL)))) ? (((3046042781992498011LL) << (((((/* implicit */int) (signed char)47)) - (47))))) : (var_9)))) ^ (arr_1 [i_5])));
            var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)0)), ((unsigned char)223)));
            arr_22 [i_6] [i_6] = ((((long long int) var_1)) ^ (31LL));
            arr_23 [i_6] = ((/* implicit */signed char) ((((arr_1 [i_6]) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-11)) ? (arr_21 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-59)))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        }
        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    {
                        arr_32 [i_7] = ((/* implicit */unsigned long long int) arr_5 [i_5] [19LL]);
                        var_21 = ((/* implicit */signed char) 16516839084727006086ULL);
                        var_22 = ((((/* implicit */_Bool) ((arr_3 [i_8] [i_7]) / (arr_3 [i_5] [i_8])))) ? (min((arr_3 [i_8] [i_9]), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_8))))));
                        var_23 = arr_11 [i_5] [i_7] [i_8] [10ULL];
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned char i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                var_24 = ((/* implicit */long long int) ((unsigned long long int) ((unsigned long long int) ((unsigned long long int) var_4))));
                var_25 = ((/* implicit */long long int) arr_5 [i_5] [i_7]);
                arr_35 [i_10] [4LL] [i_7] [i_10] &= ((/* implicit */signed char) (+(-8986433355148321669LL)));
            }
            /* vectorizable */
            for (long long int i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                arr_38 [i_5] [i_7] [i_11] = ((/* implicit */unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_7] [17LL] [i_7] [i_5]))) > (-5356221841895235232LL)))));
                var_26 = ((/* implicit */signed char) ((long long int) arr_8 [i_11] [i_11] [i_11] [i_7] [i_5] [i_5]));
            }
            for (signed char i_12 = 0; i_12 < 21; i_12 += 4) 
            {
                arr_41 [i_12] [i_7] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_7] [i_7] [i_12] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_7] [i_7] [20LL] [i_7]))) : (arr_18 [i_12]))))))) ^ ((((~(((/* implicit */int) (signed char)56)))) + (((/* implicit */int) arr_34 [9ULL] [(signed char)4]))))));
                /* LoopNest 2 */
                for (long long int i_13 = 1; i_13 < 17; i_13 += 4) 
                {
                    for (signed char i_14 = 0; i_14 < 21; i_14 += 1) 
                    {
                        {
                            var_27 = var_6;
                            var_28 = var_6;
                            var_29 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-57)) ? ((-(0ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)66))))))));
                            arr_47 [i_7] [15LL] [15LL] [14LL] [14LL] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-51))) : (var_1)))) ? (((long long int) 3046042781992498011LL)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_5])) || (((/* implicit */_Bool) -8058252361071432934LL))))))))) ? (((long long int) arr_40 [i_7] [i_13 + 1] [i_7] [i_13 + 1])) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_9)))))))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (long long int i_15 = 2; i_15 < 19; i_15 += 1) 
            {
                for (signed char i_16 = 0; i_16 < 21; i_16 += 3) 
                {
                    for (signed char i_17 = 0; i_17 < 21; i_17 += 4) 
                    {
                        {
                            arr_55 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_4))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)0)) <= (((/* implicit */int) (signed char)46))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 705424885620310547LL)))))));
                            arr_56 [i_7] [i_7] [i_7] [i_16] [i_17] = (signed char)127;
                            arr_57 [i_7] [i_7] [i_15 + 2] [i_17] = var_6;
                            arr_58 [i_7] [i_7] [i_16] [(signed char)5] = ((/* implicit */long long int) ((unsigned long long int) ((arr_49 [i_7] [i_15 + 2] [i_15] [(signed char)1]) | (17419225138087937809ULL))));
                            arr_59 [i_7] [i_15] [i_7] [i_7] = ((/* implicit */signed char) ((((unsigned long long int) var_9)) >> (((((unsigned long long int) ((((/* implicit */int) (signed char)-80)) - (((/* implicit */int) var_4))))) - (18446744073709551387ULL)))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 3) 
        {
            for (unsigned char i_19 = 1; i_19 < 17; i_19 += 3) 
            {
                {
                    var_30 = ((/* implicit */unsigned char) var_5);
                    arr_64 [i_18] [i_18] [i_18] = ((/* implicit */signed char) (~(4LL)));
                    arr_65 [i_18] [i_18] [i_19] [i_18] = arr_3 [i_18] [i_19 + 1];
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_20 = 2; i_20 < 19; i_20 += 4) 
        {
            for (unsigned long long int i_21 = 0; i_21 < 21; i_21 += 1) 
            {
                {
                    arr_71 [6LL] [i_20] [i_20 - 2] [i_21] |= (-((+(arr_67 [i_20 - 2]))));
                    var_31 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-86)) + (2147483647))) >> (((6001924781518245348ULL) - (6001924781518245338ULL)))))) / (arr_30 [i_21] [7LL] [7LL] [i_21]))), (((/* implicit */unsigned long long int) ((-5684568372443462605LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-9))))))));
                    arr_72 [i_21] [i_20] [i_21] [i_21] = ((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_21] [i_5] [i_20] [i_21]))) | (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_21] [i_21] [i_21] [i_21]))) : (-1393785838597537187LL))));
                }
            } 
        } 
    }
    for (long long int i_22 = 1; i_22 < 10; i_22 += 4) 
    {
        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_46 [i_22] [i_22] [i_22 - 1] [i_22 + 1] [i_22] [i_22] [i_22])) & (6701537023295930755ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)80))) : (5978851847730328308LL))))));
        arr_76 [i_22 - 1] [i_22] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (signed char)-127)) ? (15148257432743640854ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))));
        arr_77 [i_22] = ((/* implicit */unsigned long long int) (signed char)-1);
    }
    for (signed char i_23 = 0; i_23 < 21; i_23 += 1) 
    {
        arr_81 [(signed char)0] [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (arr_27 [i_23])))), ((-(((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-54)) || (((/* implicit */_Bool) (signed char)-62)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)(-127 - 1)))))))) : (((((/* implicit */_Bool) arr_24 [i_23])) ? (((/* implicit */unsigned long long int) -7736679871879029486LL)) : (arr_18 [i_23])))));
        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((unsigned long long int) max((arr_21 [i_23]), (arr_11 [i_23] [i_23] [i_23] [i_23])))))));
        var_34 = var_2;
    }
}

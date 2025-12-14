/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149126
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
    var_19 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((3836303913369439228LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35511)))));
        arr_3 [i_0 - 4] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65527)) + (((/* implicit */int) arr_0 [i_0 + 1]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65527))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 2])))))))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) (+(var_7)));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 3] [i_2 - 1] [i_3 + 1]))) + (arr_4 [i_0 + 1])));
                        var_23 = ((/* implicit */unsigned int) (_Bool)1);
                        var_24 = ((/* implicit */short) ((unsigned int) arr_6 [i_2 - 1] [i_2 - 1] [i_2]));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 2) 
                    {
                        arr_15 [i_4 - 2] [i_4 - 1] [i_2] [i_4] [i_4 + 3] = (+(arr_10 [i_0 - 3] [i_2 - 1]));
                        var_25 *= ((/* implicit */short) var_2);
                        var_26 = (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4 - 2]))) : (((3836303913369439228LL) / (((/* implicit */long long int) var_10)))));
                        arr_16 [i_0 - 1] [i_0 + 1] [i_2] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) ((var_13) * (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (-1601612515772528902LL)));
                        arr_19 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 24; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_25 [i_0 - 1] [i_1] [i_2] [i_6] [i_7] = ((((/* implicit */_Bool) var_1)) ? ((~(var_13))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0 - 1] [i_0 - 4] [i_0 - 1] [i_0 - 4] [i_0] [i_0 - 2] [i_0 - 4])))))));
                                arr_26 [i_0 - 2] [i_2] [i_6] [i_7] = ((/* implicit */unsigned long long int) arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                                var_28 = ((/* implicit */long long int) var_17);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_9 [i_0 + 1]))));
    }
    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
    {
        arr_30 [i_8] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_13) / (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))))) ? (((((/* implicit */_Bool) arr_0 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_8] [i_8]))) : (arr_10 [i_8] [i_8]))) : (((/* implicit */long long int) (~(var_4))))))) ^ (((0ULL) * (((/* implicit */unsigned long long int) var_17))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_9] [i_9])) ? (17989489365904273248ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_8] [i_8])))));
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_24 [i_8] [i_8])) : (((/* implicit */int) arr_24 [i_8] [i_8]))));
            var_32 -= ((/* implicit */unsigned long long int) (+(var_4)));
        }
        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned short) ((unsigned long long int) var_6));
            arr_37 [i_10] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_8] [i_8] [i_8]))))), (min((var_14), (((/* implicit */unsigned long long int) var_18))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((var_3), ((unsigned short)33536))), (((/* implicit */unsigned short) var_1)))))) : (var_5));
            arr_38 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) var_1);
            var_34 = ((/* implicit */unsigned int) ((((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)4866)) : (((/* implicit */int) (unsigned short)45320))))) ^ (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 538780504523253248ULL)) ? (var_7) : (-1LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_8] [i_10])))))))))));
        }
        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 2) /* same iter space */
        {
            var_35 = ((/* implicit */_Bool) max(((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_8] [i_11]))) * (6075085578662396102ULL))))), (((/* implicit */unsigned long long int) max((-9223372036854775793LL), (((/* implicit */long long int) (short)18)))))));
            var_36 &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((3777857944652292886LL) ^ (-12LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_8] [i_11]))) : (((((/* implicit */_Bool) var_16)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))), (((((/* implicit */_Bool) min((var_12), (8527274460394058557ULL)))) ? (((/* implicit */unsigned long long int) ((9223372036854775796LL) / (((/* implicit */long long int) var_17))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) + (1978489853196087589ULL)))))));
        }
        var_37 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_40 [i_8])) * (((/* implicit */int) (short)-26))))), (min((arr_1 [i_8] [i_8]), (arr_1 [i_8] [i_8])))));
        var_38 = ((/* implicit */short) ((((unsigned long long int) (unsigned short)43473)) * (((((((/* implicit */_Bool) arr_33 [i_8] [i_8])) ? (((/* implicit */unsigned long long int) var_17)) : (var_12))) * (arr_13 [i_8])))));
    }
    var_39 = var_12;
    /* LoopNest 2 */
    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
    {
        for (unsigned long long int i_13 = 2; i_13 < 16; i_13 += 2) 
        {
            {
                var_40 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1007890880U))));
                arr_47 [i_12] [i_13 - 1] [i_13] = ((/* implicit */unsigned short) (~(9006649498927104ULL)));
                var_41 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) (short)23588)))))), (var_17)));
                var_42 ^= ((/* implicit */_Bool) 26ULL);
                var_43 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_41 [i_12 - 1] [i_12 - 1])) + (min((18404945770900913751ULL), (((/* implicit */unsigned long long int) arr_18 [i_13] [i_13] [i_13 - 2] [i_13] [i_13]))))))) ? (((/* implicit */unsigned long long int) (+(arr_22 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_13] [i_13 - 1])))) : (((var_14) * (arr_32 [i_12 - 1] [i_13 + 1] [i_13 - 1]))));
            }
        } 
    } 
}

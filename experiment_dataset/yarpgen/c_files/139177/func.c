/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139177
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_17 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((3980927132767212416ULL), (((/* implicit */unsigned long long int) -7723829468581582912LL))))) ? (((3980927132767212416ULL) >> (((/* implicit */int) (signed char)49)))) : (arr_5 [i_0] [i_1])))));
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) 8273536133527194657ULL))));
                            var_19 += (signed char)121;
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > (-7723829468581582912LL)));
                arr_14 [i_1] = (!(((_Bool) var_3)));
            }
            /* vectorizable */
            for (signed char i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
            {
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_0])))))));
                /* LoopNest 2 */
                for (long long int i_6 = 3; i_6 < 21; i_6 += 3) 
                {
                    for (long long int i_7 = 1; i_7 < 24; i_7 += 2) 
                    {
                        {
                            arr_21 [i_0] [i_5] [i_5] [i_7] = ((/* implicit */unsigned char) (-(-3946672842384677981LL)));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551613ULL)) && ((!(((/* implicit */_Bool) arr_6 [i_0] [i_5] [i_6 - 3] [i_7 - 1]))))));
                        }
                    } 
                } 
                var_22 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0]))));
                var_23 += ((/* implicit */unsigned char) (_Bool)1);
            }
            for (signed char i_8 = 0; i_8 < 25; i_8 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 2; i_10 < 24; i_10 += 4) 
                    {
                        var_24 = ((/* implicit */signed char) ((long long int) max((((((/* implicit */_Bool) (unsigned char)222)) ? (arr_10 [i_8]) : (arr_8 [i_1] [i_8] [i_9] [i_10 - 1]))), (((/* implicit */long long int) (_Bool)1)))));
                        arr_31 [i_0] [i_0] [i_1] [i_8] [i_8] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (signed char)-71)))), (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) (-(max((arr_2 [i_1] [i_0]), (((/* implicit */long long int) var_12))))))) : (((min((arr_3 [i_8] [i_9 - 1]), (((/* implicit */unsigned long long int) arr_25 [i_0])))) - (5340447882742393164ULL)))));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 1) 
                    {
                        var_25 += ((/* implicit */_Bool) (-(3980927132767212431ULL)));
                        var_26 += ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((arr_23 [i_11] [i_9] [i_1] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) var_13))))), (max((((/* implicit */long long int) var_16)), (7723829468581582911LL)))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81))) == (0ULL)))), (arr_11 [i_11] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9] [i_8] [i_1])))));
                        arr_35 [i_0] [i_0] [i_8] [i_8] = ((/* implicit */signed char) (~(((/* implicit */int) min((max((arr_15 [i_8] [i_11] [i_8] [i_0]), ((signed char)-62))), (min(((signed char)15), ((signed char)121))))))));
                    }
                    var_27 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)66)) >> (((((/* implicit */int) var_0)) + (145)))));
                }
                for (unsigned char i_12 = 0; i_12 < 25; i_12 += 3) 
                {
                    arr_39 [i_0] [i_8] [i_8] [i_8] = ((unsigned long long int) (!(((/* implicit */_Bool) (signed char)-67))));
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((14465816940942339174ULL), (((/* implicit */unsigned long long int) var_0)))))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) -7650714757986717053LL)) ? (((/* implicit */int) arr_20 [i_0] [i_1] [i_8] [i_12] [i_8] [i_1])) : (((/* implicit */int) var_13))))), (max((var_14), (((/* implicit */long long int) (unsigned char)223)))))))))));
                }
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    for (signed char i_14 = 0; i_14 < 25; i_14 += 2) 
                    {
                        {
                            var_29 += ((/* implicit */_Bool) max((((unsigned char) arr_28 [i_0] [i_1] [i_8] [i_13] [i_1])), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_8] [i_8] [i_14])))))));
                            arr_44 [i_0] [i_1] [i_1] [i_1] [i_8] [i_14] [i_8] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_2)), (14465816940942339199ULL)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_15 = 0; i_15 < 25; i_15 += 3) 
                {
                    arr_47 [i_0] [i_0] [i_8] [i_15] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551613ULL))));
                    var_30 = ((/* implicit */unsigned long long int) (((~(arr_22 [i_8] [i_1] [i_1]))) == (max((arr_22 [i_8] [i_1] [i_8]), (((/* implicit */long long int) var_11))))));
                    arr_48 [i_8] [i_8] = ((/* implicit */unsigned char) ((((-5308482471809053932LL) + (9223372036854775807LL))) >> (((((((/* implicit */int) (signed char)121)) & ((~(((/* implicit */int) arr_0 [i_8] [i_8])))))) - (29)))));
                    var_31 = ((/* implicit */long long int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) == (arr_16 [i_8] [i_8] [i_8] [i_8])))), (((unsigned char) var_12))));
                }
            }
            arr_49 [i_0] [i_1] = ((signed char) ((arr_18 [i_0] [i_0] [i_1] [i_1] [i_1]) + (((/* implicit */unsigned long long int) var_14))));
            arr_50 [i_0] [i_1] = ((/* implicit */signed char) var_7);
            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) arr_24 [i_1] [i_1] [i_1]))));
        }
        for (signed char i_16 = 0; i_16 < 25; i_16 += 1) 
        {
            var_33 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_32 [i_16] [i_16] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_45 [i_16] [i_16] [i_16] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (max((arr_16 [i_0] [i_16] [i_0] [i_16]), (((/* implicit */unsigned long long int) arr_1 [i_0])))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_12 [i_16] [i_16] [i_16] [i_16] [i_0] [i_0] [i_0])), (var_6))))));
            var_34 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)46)))))), ((signed char)-2)));
            var_35 = ((/* implicit */unsigned long long int) arr_20 [i_16] [i_16] [i_16] [i_0] [i_0] [i_0]);
        }
        arr_53 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_10)))))));
        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 18446744073709551608ULL)) ? (max((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) 5782777952319815257LL)))) : ((~(18446744073709551615ULL))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))))));
        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-85))))) >= (((/* implicit */int) (!((_Bool)1)))))))));
    }
    var_38 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) - (205866175963700230ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
}

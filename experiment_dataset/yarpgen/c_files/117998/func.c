/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117998
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_17 = (!(((/* implicit */_Bool) ((((/* implicit */int) (!((_Bool)1)))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                var_18 *= max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) 3547487628U)) ? (arr_1 [i_0] [i_0]) : (arr_1 [(signed char)6] [(signed char)6]))), (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */signed char) var_5)))))))), ((-(max((((/* implicit */unsigned int) var_10)), (4294967291U))))));
                var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [12U])) ? ((((-(3768833578U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))) : (((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_1]))));
                var_20 = ((/* implicit */unsigned int) arr_0 [i_0]);
                var_21 = ((/* implicit */int) ((unsigned int) arr_3 [3U] [i_1] [i_1]));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 23; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_12 [i_5] [i_2] [i_2]))));
                                var_23 = ((/* implicit */unsigned int) ((signed char) (~(((((/* implicit */_Bool) arr_18 [i_4] [i_2] [i_4 - 2] [i_2] [i_2] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (var_9))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    for (unsigned int i_8 = 4; i_8 < 23; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((arr_18 [i_2] [i_2] [i_2] [i_2] [i_8] [i_7]) + (2147483647))) << (((((var_13) + (1447205315))) - (29)))))))) ? ((+(((/* implicit */int) ((arr_6 [i_8]) || (((/* implicit */_Bool) arr_9 [(signed char)9]))))))) : (((/* implicit */int) arr_7 [i_9]))));
                                var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_5) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) (((_Bool)1) ? (arr_9 [i_9]) : (arr_14 [i_7] [12U] [i_8 - 4])))))) ? (747479668U) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_17 [(_Bool)1] [i_7] [i_3] [2U]))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 += ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (!(((/* implicit */_Bool) 345848442U)))))))) <= (((((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_11)))) ? (((/* implicit */int) max(((signed char)0), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) var_5))))));
    /* LoopSeq 3 */
    for (int i_10 = 3; i_10 < 16; i_10 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */_Bool) arr_20 [i_10] [i_10 - 1] [i_10] [i_10 - 1]);
        var_28 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((_Bool) arr_13 [i_10] [4] [i_10 - 2] [i_10 - 2]))), (max((var_6), (((/* implicit */unsigned int) arr_11 [i_10 + 1] [19] [19] [i_10 + 3]))))))) && (((/* implicit */_Bool) ((min((arr_28 [i_10 + 2] [i_10] [i_10 + 1]), (arr_26 [i_10] [i_10] [i_10]))) ? (((/* implicit */unsigned int) arr_11 [i_10] [i_10] [i_10 - 2] [i_10])) : ((((_Bool)1) ? (584636651U) : (((/* implicit */unsigned int) 507663306)))))))));
    }
    for (int i_11 = 3; i_11 < 16; i_11 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_12 = 3; i_12 < 17; i_12 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 19; i_13 += 2) 
            {
                for (signed char i_14 = 1; i_14 < 17; i_14 += 4) 
                {
                    {
                        var_29 += ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) + (3320060857U))))) & (((/* implicit */int) (!(((((/* implicit */_Bool) var_6)) || (arr_39 [13] [i_12]))))))));
                        /* LoopSeq 1 */
                        for (signed char i_15 = 0; i_15 < 19; i_15 += 2) 
                        {
                            var_30 = ((int) var_16);
                            arr_43 [i_11] [i_12 + 2] [i_12 + 2] [i_14] [i_12 + 2] = ((/* implicit */int) min(((((+(974906422U))) << (((arr_11 [i_11 + 3] [i_11 + 3] [i_11 + 3] [i_15]) + (542248126))))), ((~(974906439U)))));
                            arr_44 [i_14] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_17 [i_11] [i_12] [i_13] [i_12])), (3547487628U)));
                            var_31 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((int) 3240396585U))) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_12)) <= (arr_37 [i_12])))) : (min((((/* implicit */int) arr_24 [22] [14U] [22] [22])), (var_9)))))));
                        }
                    }
                } 
            } 
            arr_45 [i_11 + 1] [i_12 - 2] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
        }
        var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))));
        /* LoopSeq 1 */
        for (int i_16 = 2; i_16 < 18; i_16 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_17 = 0; i_17 < 19; i_17 += 3) 
            {
                for (unsigned int i_18 = 0; i_18 < 19; i_18 += 1) 
                {
                    {
                        var_33 ^= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_35 [i_18] [i_16 - 2] [i_11])))) && ((!(arr_39 [i_11] [i_11])))));
                        arr_54 [i_11] [i_16] [i_11] [i_17] = arr_12 [(signed char)18] [i_16 + 1] [i_16 - 1];
                    }
                } 
            } 
            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((unsigned int) 24U)) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_10)))))))) ? (((((/* implicit */_Bool) 4059380640U)) ? (((/* implicit */unsigned int) (~(var_2)))) : (var_7))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))))));
            var_35 = max((((/* implicit */unsigned int) (+((+(var_2)))))), (3547487628U));
            var_36 = max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) | ((~(arr_51 [i_11] [i_11 - 2] [i_11] [i_16] [10U] [(signed char)2]))))), (((747479657U) ^ (((/* implicit */unsigned int) (-(var_9)))))));
        }
        var_37 ^= ((/* implicit */unsigned int) arr_32 [i_11 + 3] [i_11]);
    }
    for (int i_19 = 1; i_19 < 20; i_19 += 1) 
    {
        arr_57 [i_19] [i_19 + 3] = ((/* implicit */unsigned int) (+((~(arr_13 [i_19 + 2] [(signed char)10] [i_19 + 3] [i_19 - 1])))));
        var_38 = ((/* implicit */unsigned int) ((507663306) - (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_20 = 1; i_20 < 21; i_20 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_21 = 0; i_21 < 23; i_21 += 3) 
            {
                for (signed char i_22 = 0; i_22 < 23; i_22 += 1) 
                {
                    {
                        var_39 = arr_67 [i_22] [i_22] [i_22] [(_Bool)1];
                        arr_68 [i_19] [i_20] [(signed char)21] [i_22] = ((/* implicit */signed char) (+(arr_17 [i_20 + 2] [i_20 - 1] [i_20 - 1] [i_19 - 1])));
                        var_40 = var_4;
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
            {
                var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) ((var_13) > (((int) arr_6 [i_20])))))));
                var_42 = ((/* implicit */unsigned int) arr_28 [17] [i_20 + 2] [i_23]);
                arr_71 [i_20] [i_23] [i_20] [i_20] = ((/* implicit */int) arr_55 [i_23]);
            }
            for (unsigned int i_24 = 2; i_24 < 19; i_24 += 1) 
            {
                var_43 = (~(arr_60 [i_20] [i_20]));
                var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_20] [i_20 - 1] [i_20 - 1] [i_20] [i_20] [i_20])) ? (arr_19 [i_19] [2]) : (arr_13 [i_19] [i_20] [10] [i_24])));
                var_45 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [14] [i_24 - 2] [i_24] [i_24 - 2])) << (((/* implicit */int) arr_20 [i_19] [i_24 - 2] [i_24 - 2] [14U]))));
                var_46 = ((((/* implicit */_Bool) 507663306)) ? (3822234560U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
            }
        }
        arr_74 [(_Bool)1] [i_19 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((min((var_1), (var_5))) || (((/* implicit */_Bool) 3686437272U)))))) : (max((arr_62 [8U] [i_19] [8U]), (arr_23 [i_19 + 3] [i_19 - 1] [i_19 - 1])))));
    }
}

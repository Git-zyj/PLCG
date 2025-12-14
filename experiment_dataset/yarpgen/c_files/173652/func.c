/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173652
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        var_18 += ((/* implicit */_Bool) ((min((arr_4 [i_0] [i_1] [i_3]), (arr_4 [i_0] [i_2] [(signed char)14]))) ^ (((var_15) ? (((/* implicit */int) (short)2)) : (((/* implicit */int) (_Bool)1))))));
                        var_19 = ((((/* implicit */int) (_Bool)1)) ^ ((((((_Bool)1) ? (-2147483643) : (((/* implicit */int) var_5)))) + (((/* implicit */int) arr_10 [i_0] [10] [i_2] [i_3])))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */int) ((_Bool) min((((/* implicit */int) max((var_15), (var_2)))), ((((_Bool)1) ? (1949958299) : (((/* implicit */int) var_4)))))));
                        var_21 = ((/* implicit */_Bool) max((var_21), (((max(((+(-2049026109))), (min((arr_12 [(unsigned short)12] [(unsigned short)12] [8] [i_4]), (((/* implicit */int) var_12)))))) <= (max(((-(((/* implicit */int) (signed char)-62)))), (((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) var_4))))))))));
                        var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-58)) + (2147483647))) << (((((((((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (short)-22353))))) ^ (((/* implicit */int) ((signed char) arr_11 [i_0] [i_0] [i_2] [i_0]))))) + (65483))) - (11)))));
                    }
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (1633139271) : (min((((((/* implicit */_Bool) (unsigned short)19165)) ? (((/* implicit */int) (unsigned short)65515)) : (((/* implicit */int) var_14)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)1))))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                var_24 |= ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) ((-792644667) >= (-31340680)))), (((var_7) ? (1718455201) : (((/* implicit */int) arr_17 [(_Bool)1] [(_Bool)1] [(signed char)8] [i_5] [i_6] [i_2])))))))));
                                var_25 = ((((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)-16)))) ^ (((/* implicit */int) var_14))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (var_7)))) : (arr_0 [(unsigned short)14]));
                                var_26 ^= ((/* implicit */short) ((max((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_7)))))) == (((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [(_Bool)1] [(_Bool)1] [i_2] [(_Bool)1] [2])), (max((((/* implicit */unsigned short) (short)23749)), (var_4))))))));
                                var_27 = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */int) var_12)) <= (var_6)))) >= (((/* implicit */int) arr_8 [i_6] [i_5] [i_2] [i_1] [(_Bool)1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (arr_0 [i_1])))) && ((_Bool)1)))) : (((int) var_7))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        var_28 = arr_18 [i_1] [i_0];
                        var_29 = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_2]);
                        var_30 = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_13 [i_0] [3] [i_2])) / (((/* implicit */int) arr_13 [i_0] [i_7] [i_2]))))));
                        var_31 = ((/* implicit */unsigned short) max((var_31), ((unsigned short)65535)));
                    }
                    for (int i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        var_32 = ((/* implicit */int) (signed char)-19);
                        var_33 = ((/* implicit */signed char) (~(((((((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_8] [i_8] [i_0])) + (2147483647))) >> ((((~(var_9))) + (615135475)))))));
                    }
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned short) var_15);
    var_35 = var_8;
    /* LoopSeq 1 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 23; i_11 += 1) 
            {
                {
                    var_36 += min((((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) arr_31 [i_11])) : (((/* implicit */int) var_10)))), (((/* implicit */int) ((_Bool) arr_27 [i_10]))));
                    var_37 = ((/* implicit */signed char) ((((/* implicit */int) arr_26 [i_9] [i_11])) | (((((/* implicit */int) min((var_11), (((/* implicit */short) (signed char)-21))))) ^ (((arr_32 [i_9] [i_10] [i_11]) & (((/* implicit */int) var_0))))))));
                    var_38 |= ((/* implicit */_Bool) max((max((((/* implicit */int) (short)32767)), (((((/* implicit */int) var_17)) << (((884312804) - (884312787))))))), (((int) (short)27152))));
                    var_39 = ((/* implicit */short) min((((((/* implicit */int) min(((short)21107), (((/* implicit */short) (_Bool)0))))) << ((+(((/* implicit */int) var_7)))))), (((/* implicit */int) min((((/* implicit */short) arr_30 [(short)21] [i_10] [i_11])), ((short)11448))))));
                    var_40 = ((((/* implicit */_Bool) min((((/* implicit */int) arr_26 [(signed char)19] [i_10])), (var_6)))) ? (((/* implicit */int) (!(arr_29 [i_11] [i_10] [i_9])))) : (((((/* implicit */_Bool) arr_26 [i_11] [i_10])) ? (((/* implicit */int) arr_26 [i_10] [i_11])) : (((/* implicit */int) var_13)))));
                }
            } 
        } 
        var_41 = ((/* implicit */_Bool) max((var_9), (var_6)));
        var_42 ^= var_9;
        var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) max((((((/* implicit */int) max((((/* implicit */short) arr_29 [i_9] [i_9] [i_9])), ((short)22025)))) >= (((/* implicit */int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)16078)))))), ((!(var_7))))))));
    }
}
